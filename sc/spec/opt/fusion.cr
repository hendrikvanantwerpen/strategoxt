module fusion
imports stratego stratego-laws lib strategy-patterns desugar
	fusion-rules verbose

signature
  constructors
    Mark : Strat

strategies

  fusion = 
    iowrap(
      declare-inline-rules
      ; ( check-library-definitions
        ; alltd(innermost-fusion)
        ) <+ if-verbose2(say(!"no innermost here"))
    )


  // Inlining strategy definitions

  declare-inline-rules =
    Specification([Signature(id),
                   Strategies(map(declare-inline-rule))])

  declare-inline-rule =
    ?[[ f(as) = s ]];
    rules(
      InlineStrat :
        [[ f(ss) :S]] -> <ssubs> (<map(?VarDec(<id>,_))> as', ss, s')
        where <strename> [[ f(as) = s ]] => [[ f(as') = s' ]]
    )

  inline-rules = 
    rec x(try(
	Choice(x, x)
	+ LChoice(x, x) 
	+ Scope(id, Seq(Match(id),Build(id)))
	+ Scope(id, Seq(Match(id),Seq(id,Build(id))))
	+ InlineStrat; x
    ))

  // Check library definitions
  // note that other implementations might also be correct

  check-library-definitions =
    check-that-try-is-try
    ; check-that-innermost-is-innermost
    ; check-that-bottomup-is-bottomup

  check-that-try-is-try =
    where(
      new => x
      ; (<InlineStrat> [[ try_1(x()) : S ]]
         <+ if-verbose2(say(!"no definition of try_1: ")); fail)
      ; (?[[ x() <+ id ]]
         <+ if-verbose1(debug(!"try is not try: ")); fail)
      ; if-verbose2(say(!"try is try "))
    )

  check-that-innermost-is-innermost =
    where(
      new => x
      ; (<InlineStrat> [[ innermost_1(x()) : S ]]
         <+ if-verbose2(say(!"no definition of innermost_1: ")); fail)
      ; (?[[ bottomup_1(rec z(try_1(x(); bottomup_1(z())))) ]]
         <+ if-verbose1(debug(!"innermost is not innermost: ")); fail)
      ; if-verbose2(say(!"innermost is innermost "))
    )

  check-that-bottomup-is-bottomup =
    where(
      new => x
      ; (<InlineStrat> [[ bottomup_1(x()) : S ]]
         <+ if-verbose2(say(!"no definition of bottomup_1: ")); fail)
   // ; ?[[ rec y(all(y()); x()) ]]
      ; (?[[ all(bottomup_1(x())); x() ]]
         <+ if-verbose1(debug(!"bottomup is not bottomup: ")); fail)
      ; if-verbose2(say(!"bottomup is bottomup"))
    )

  // The fusion strategy

  innermost-fusion = 
    ?[[ innermost_1(s1) ]] 
    ; if-verbose2(say(!"fusion: application of innermost found"))

    ; where(new => x)
    ; where(<seq-over-choice> [[ bottomup_1(x()) :S]])
    ; where(<bottomup-to-var> [[ bottomup_1(x()) :S]])

    ; where(<inline-rules> s1 => s2)
    ; ![[ bottomup_1(rec x((mark(); s2); bottomup_1(x()) <+ id)) ]]
    ; propagate-mark

    ; fuse-with-bottomup
    ; alltd(BottomupToVarIsId-UnCond + BottomupToVarIsId-Cond)

    ; desugar
    // ; alltd(UnMark)
    ; if-verbose1(say(!"fused application of innermost"))

  // Propagate mark over choice

  propagate-mark = 
    innermost(
	SeqOverChoiceL
	+ SeqOverLChoiceL
	+ SeqOverScopeL 
    )

  fuse-with-bottomup = 
    innermost(
	SeqOverChoiceR
	+ SeqOverLChoiceR
	+ SeqOverScopeR
	+ AssociateR
	+ IntroduceApp
	+ BottomupOverConstructor
    )

  propagate-nf-assertion = 
    is-innermost;
    innermost(
	SeqOverChoiceL
	+ SeqOverLChoiceL
	+ SeqOverScopeL 
	+ AssociateL
	+ IntroduceApp
	+ NormalFormToBuildVars
    )

  // The following rule applies in the context of the transformation
  // above, where we know that the bottomup is the application of the
  // normalisation strategy to all subterms. Since the variable
  // originates in the left-hand side of the rewrite rule, we know
  // it is already in normal form.

  bottomup-to-var-old =
    ?bu
  ; rules(
      BottomupToVarIsId-UnCond :
        [[ mark(); ?t1; !t2 ]] -> [[ ?t1; !t3 ]]
        where !bu => s
            ; <tvars> t1 => vs
            ; {| Replace : 
                 map(!Var(<id>); {?t; rules(Replace : [[ <s> t :T]] -> [[ t :T]])})
                 ; <alltd(Replace)> t2 => t3 |}

      BottomupToVarIsId-Cond :
        [[ mark(); ?t1; where(s); !t2 ]] -> [[ ?t1; where(s'); !t2 ]]
        where !bu => s''
            ; <tvars> t1 => vs
            ; {| Replace : 
                 map(!Var(<id>); {?t; rules(Replace : [[ <s''> t :T]] -> [[ t :T]])})
                 ; <alltd(Replace)> (s, t2) => (s', t3) |}
   )

  bottomup-to-var = ?bu;
    rules(
      BottomupToVarIsId-UnCond :
        [[ mark(); ?t1; !t2 ]] -> [[ ?t1; !t3 ]]
        where <replace-application> (bu, t1, t2) => t3

      BottomupToVarIsId-Cond :
        [[ mark(); ?t1; where(s); !t2 ]] -> [[ ?t1; where(s'); !t3 ]]
        where <replace-application> (bu, t1, (s, t2)) => (s', t3)
    )

   replace-application :
     (s, t1, t2) -> t3
     where {| Replace : 
              <tvars; map({?x; rules(Replace : [[ <s> x : T ]] -> [[ x : T ]])})> t1;
              <alltd(Replace)> t2 => t3 
           |}
