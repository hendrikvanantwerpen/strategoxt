module check-constructors
imports sugar dynamic-rules

strategies

  CheckConstructorsIO = iowrap(CheckConstructors)

overlays

  TupleDeclarations(decs) =
    [OpDecl("", ConstType(Var("a"))),
     OpDecl("", FunType([Var("a")],Var("a"))),
     OpDecl("", FunType([Var("a"),Var("a")],Var("a"))),
     OpDecl("", FunType([Var("a"),Var("a"),Var("a")],Var("a"))),
     OpDecl("", FunType([Var("a"),Var("a"),Var("a"),Var("a")],Var("a"))),
     OpDecl("", FunType([Var("a"),Var("a"),Var("a"),Var("a"),Var("a")],Var("a"))),
     OpDecl("", FunType([Var("a"),Var("a"),Var("a"),Var("a"),Var("a"),Var("a")],Var("a"))),
     OpDecl("", FunType([Var("a"),Var("a"),Var("a"),Var("a"),Var("a"),Var("a"),Var("a")],Var("a"))),
     OpDecl("", FunType([Var("a"),Var("a"),Var("a"),Var("a"),Var("a"),Var("a"),Var("a"),Var("a")],Var("a")))
    | decs]


rules

  CheckConstructors :
    Specification([Signature([Constructors(ods1)]), Strategies(sdefs)]) -> 
    Specification([Signature([Constructors(<conc>(ods3,ods2))]), Strategies(sdefs)])
    where !TupleDeclarations(ods1) => ods2
        ; <map(GenerateCheckRule)> ods2
        ; <filter(check-constructors)> sdefs => []
        ; (TupleDeclarations <+ ![]) => ods3
 
  GenerateCheckRule =
    ?OpDecl(c, ConstType(t));
    where(!0 => n);
    rules(
      CheckCons : Op(c, <?xs; length => n>) -> Op(c, [])
    )

  GenerateCheckRule =
    ?OpDecl(c, FunType(ts, t));
    where(<length> ts => n);
    rules(
      CheckCons :  
        Op(c, <?xs; length => n>) -> Op(c, xs)
    )

  // CheckTuple implements generic checking of tuple constructors (for arbitrary arity)
  // For some reason the generation of operator declarations for tuples does not work.

  CheckTuple =
    ?Op("", ts);
    where(
      <length> ts => n
      ; !"" => c
      ; !OpDecl("", FunType(<copy>(n,Var("a")),Var("a"))) => decl
      ; GenerateCheckRule
      ; ![decl | <TupleDeclarations <+ ![]>] => decs
      ; rules(
          TupleDeclarations : _ -> decs
        )
    )

  check-constructors =
    ?RDef(f, xs, <id>); check-constructors'(!f, !"rule")

  check-constructors =
    ?SDef(f, xs, <id>); check-constructors'(!f, !"definition")

  check-constructors'(f, kind) =
    {| CheckConsError :
       where(f => fstr; kind => kindstr);
       rules(
         CheckConsError : 
           Op(c, ts) -> Op(c, ts) 
           where <printnl> (stderr, 
		   ["error: in ", kindstr, " ", fstr, ": ", 
		    "constructor ", c, "/", <length; int-to-string> ts,
		    " not declared"])
       );
       manytd(not(CheckCons <+ CheckTuple); CheckConsError)
    |}
