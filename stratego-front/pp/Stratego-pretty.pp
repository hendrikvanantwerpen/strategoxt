[
   "stratego-0" -- _1,
   Definition -- V[_1],
   Definition.1:iter-star -- _1,

   Module -- V[H[KW["module"] _1] _2],
   Module.2:iter-star -- _1,
   Specification -- V  vs=1 is=2 [H  [KW["specification"]] _1],
   Specification.1:iter-star -- _1,
   Script -- V  [H  [KW["stratego"] KW["script"]] _1],
   Script.1:iter-star -- _1,
   Command -- _1,
   Dump -- KW[":dump"] _1,
   Load -- KW[":load"] _1,
   Eval -- KW[">"] _1,
   Imports -- H  [KW["imports"] _1],
   Imports.1:iter-star -- _1,
   Rules -- V  is=2 [H  [KW["rules"]] V vs=1[_1]],
   Rules.1:iter-star -- _1,
   Strategies -- V  is=2 [H  [KW["strategies"]] V vs=1[_1]],
   Strategies.1:iter-star -- _1,
   Signature -- V  is=2 [H  [KW["signature"]] _1],
   Signature.1:iter-star -- _1,
   Overlays -- V  is=2 [H  [KW["overlays"]] _1],
   Overlays.1:iter-star -- _1,
   Sorts -- V  [H  [KW["sorts"]] _1],
   Sorts.1:iter-star -- _1,
   Constructors -- V  is=2 [H  [KW["constructors"]] A (l hs=1, l hs=1, l hs=1) [_1]],
   Constructors.1:iter-star -- _1,

   SortVar                          -- _1,
   SortNoArgs                       -- _1,
   Sort -- H hs=0[_1 KW["("] _2 KW[")"]],
   Sort.2:iter-star-sep -- _1 KW[","],
   SortList                         -- KW["["] _1 KW["]"],
   SortList.1:iter-star-sep         -- _1 KW[","],
   SortListTl                       -- KW["["] _1 KW["|"] _2 KW["]"],
   SortListTl.1:iter-star-sep       -- _1 KW[","],
   SortTuple                        -- KW["("] _1 KW[")"],
   SortTuple.1:iter-star-sep        -- _1 KW[","],
   Star -- KW["*"],
   StarStar -- KW["**"],

   OpDecl    -- R [_1 KW[":"] H hs=1 [_2]],
   OpDeclInj -- R ["" KW[":"] H hs=1 [_1]],

   ConstType -- _1,
   FunType -- _1 KW["->"] _2,
   FunType.1:iter-sep -- _1 KW["*"],
   Var -- _1,
   ListVar -- _1,
  
   Int  -- _1,
   Real -- _1,
   Str  -- _1,
   Char -- _1,
   
   Wld  -- KW["_"],
   BuildDefault -- KW["_"] _1,
   Inj  -- _1,

   Op -- H hs=0[_1 KW["("] H[_2] KW[")"]],
   Op.2:iter-star-sep -- H hs=0[_1 KW[","]],
   As -- _1 KW["@"] _2,
   Tuple -- H hs=0[KW["("] H hs=0[_1] KW[")"]],
   Tuple.1:iter-star-sep -- H hs=0[_1 KW[","]],
   App -- H[H hs=0[KW["<"] _1 KW[">"]] _2],
   List -- KW["["] _1 KW["]"],
   List.1:iter-star-sep -- _1 KW[","],
   ListTail -- KW["["] _1 KW["|"] _2 KW["]"],
   ListTail.1:iter-star-sep -- _1 KW[","],
   Explode -- H hs=0[_1 KW["#"] KW["("] _2 KW[")"] ],
   RootApp -- H hs=0[KW["<"] _1 KW[">"]],
   
   Anno -- _1 KW["{"] _2 KW["}"],
   AnnoCong -- _1 _2,
   StrategyCurly -- KW["{"] _1 KW["}"],

   Con  -- H hs=0 [_1 KW["["] _2 KW["]"] KW["("] _3 KW[")"]],
   Con1 -- H hs=0 [   KW["["] _1 KW["]"] ],
   Con2 -- H hs=0 [   KW["["] _1 KW["]"] KW["("] _2 KW[")"]],
   Con3 -- KW["["] _1 KW["where"] _2 KW["]"],
   Con4 -- KW["["] _1 KW["where"] _2 KW["]"] KW["("] _3 KW[")"],
   
   RDefNoArgs 	 		    -- V is=2[H[_1 KW[":"]] _2],
   RDef 			    -- V is=2[H[ H hs=0[_1 KW["("] H[_2] KW[")"]] KW[":"]] _3],
   RDef.2:iter-star-sep 	    -- H hs=0[_1 KW[","]],

   RDefT                            -- V is=2[H[ H hs=0[_1 KW["("] H[_2 KW["|"] _3] KW[")"]] KW[":"]] _4],
   RDefT.2:iter-star-sep            -- H hs=0[_1 KW[","]],
   RDefT.3:iter-star-sep            -- H hs=0[_1 KW[","]],
   
   SRDefNoArgs -- _1 KW["::"] _2,
   SRDef -- _1 KW["("] _2 KW[")"] KW["::"] _3,
   SRDef.2:iter-star-sep -- _1 KW[","],

   SRDefT                           -- _1 KW["("] _2 KW["|"] _3 KW[")"] KW["::"] _4,
   SRDefT.2:iter-star-sep           -- _1 KW[","],
   SRDefT.3:iter-star-sep           -- _1 KW[","],

   RuleNoCond -- V[H[_1 KW["->"]] _2],
   Rule -- V[H[_1 KW["->"]] _2 H[KW["where"] _3]],
   StratRuleNoCond -- _1 KW["-->"] _2,
   StratRule -- _1 KW["-->"] _2 KW["where"] _3,
   Fail -- KW["fail"],
   Id -- KW["id"],
   SVar -- _1,
   
   Let -- V[H[KW["let"] V[_1]] H[KW["in"] _2] KW["end"]],
   Let.1:iter-star -- _1,
   Let.1:iter-star.1:alt -- _1 _2,
   
   Cong			    	    -- H hs=0[_1 KW["("] H[_2] KW[")"]],
   Cong.2:iter-star-sep 	    -- H hs=0[_1 KW[","]],

   CallNoArgs 			    -- _1,
   Call 			    -- H hs=0[_1 KW["("] H[_2] KW[")"]],
   Call.2:iter-star-sep 	    -- H hs=0[_1 KW[","]],
   
   CallT                            --  H hs=0[_1 KW["("] H[_2 KW["|"] _3] KW[")"]],
   CallT.2:iter-star-sep            --  H hs=0[_1 KW[","]],
   CallT.3:iter-star-sep            --  H hs=0[_1 KW[","]],


   Match -- H hs=0[KW["?"] _1],
   Build -- H hs=0[KW["!"] _1],
   
   ScopeDefault -- H hs=0[KW["{"] _1 KW["}"]],
   Scope -- H hs=0[KW["{"] V[H[_1 KW[":"]] _2] KW["}"]],
   Scope.1:iter-star-sep -- H hs=0[_1 KW[","]],
   BA -- H hs=1[H hs=0[KW["<"] _1 KW[">"]] _2],
   AM -- H[_1 KW["=>"] _2],
   
   AngleStrat -- H hs=0[KW["<"] _1 KW[">"]],
   ParenStrat -- H hs=0[KW["("] _1 KW[")"]],
   
   LRule -- H[KW["\\"] _1 KW["\\"]],
   SRule -- H[KW["("]  _1 KW[")"]],

   Seq      -- V[_1 H[KW[";"] _2 ]],
   Choice   -- H hs=0[KW["("] V[_1 H[KW["+"]   _2 ]] KW[")"]],
   LChoice  -- H hs=0[KW["("] V[_1 H[KW["<+"]  _2 ]] KW[")"]],
   RChoice  -- H hs=0[KW["("] V[_1 H[KW["+>"]  _2 ]] KW[")"]],
   GChoice  -- H hs=0[KW["("] V[_1 H[KW["++"]  _2 ]] KW[")"]],
   LGChoice -- H hs=0[KW["("] V[_1 H[KW["<++"] _2 ]] KW[")"]],
   RGChoice -- H hs=0[KW["("] V[_1 H[KW["++>"] _2 ]] KW[")"]],
   GuardedLChoice -- V[H hs=0[KW["("] _1] H[KW["<"] _2] H[KW["+"] _3 ] KW[")"]],
   CondChoice -- V vs=0 [
     H hs=1 [KW["if"] _1]
     H hs=1 [KW["then"] _2]
     H hs=1 [KW["else"] _3] KW["end"]
   ],

   Rec -- H[KW["rec"] _1 KW["("] _2 KW[")"]],
   Not -- H hs=0 [KW["not"] KW["("] _1 KW[")"]],
   Where -- H hs=0 [KW["where"] KW["("] _1 KW[")"]],
   Test -- H hs=0 [KW["test"] KW["("] _1 KW[")"]],
   Bagof -- H hs=0 [KW["bagof"] KW["("] _1 KW[")"]],

   PrimNoArgs -- H hs=0 [KW["prim"] KW["("] _1 KW[")"]],
   Prim -- H hs=0 [KW["prim"] KW["("] _1 KW[","] _2 KW[")"]],
   Prim.2:iter-star-sep -- _1 KW[","],

   PrimT                            -- H hs=0 [KW["prim"] KW["("] _1 H[KW[","] _2 KW["|"] _3] KW[")"]],
   PrimT.2:iter-star-sep            -- H hs=0 [_1 KW[","]],
   PrimT.3:iter-star-sep            -- H hs=0 [_1 KW[","]],

   Path -- _1 _2,
   Some -- H hs=0 [KW["some"] KW["("] _1 KW[")"]],
   One -- H hs=0 [KW["one"] KW["("] _1 KW[")"]],
   All -- H hs=0 [KW["all"] KW["("] _1 KW[")"]],
   Thread -- H hs=0 [KW["thread"] KW["("] _1 KW[")"]],

   StrCong         -- _1,
   IntCong         -- _1,
   RealCong        -- _1,
   EmptyTupleCong  -- H hs=0 [KW["("] KW[")"]],
   TupleCong       -- H  hs=0 [KW["("] _1 KW[")"]],
   TupleCong.1:iter-star-sep -- _1 KW[","],
   ModCongNoArgs -- _1,
   ModCong -- _1 KW["("] _2 KW[")"],
   ModCong.2:iter-star-sep -- _1 KW[","],
   Mod -- _1 KW["^"] _2,
   ListCongNoTail -- KW["["] _1 KW["]"],
   ListCongNoTail.1:iter-star-sep -- _1 KW[","],
   ListCong -- KW["["] _1 KW["|"] _2 KW["]"],
   ListCong.1:iter-star-sep -- _1 KW[","],
   ExplodeCong -- _1 KW["#"] _2,

   DynamicRules -- V[V is=2[H[KW["rules"] KW["("]] _1] KW[")"]],
   DynamicRules.1:iter-star -- _1,
   OverrideDynamicRules -- KW["override"] KW["rules"] KW["("] _1 KW[")"],
   OverrideDynamicRules.1:iter-star -- _1,

   ExtendDynamicRules -- V[V is=2[H[KW["extend"] KW["rules"] KW["("]] _1] KW[")"]],
   ExtendDynamicRules.1:iter-star -- _1,

   ExtendOverrideDynamicRules -- KW["extend"] KW["override"] KW["rules"] KW["("] _1 KW[")"],
   ExtendOverrideDynamicRules.1:iter-star -- _1,

   DynRuleScope -- V[V is=3[H hs=0[KW["{|"] _1 KW[":"]] _2] KW["|}"]],
   DynRuleScope.1:iter-star-sep -- _1 KW[","],

   SDefNoArgs -- V is=2[H[ _1 KW["="]] _2 ],
   SDef -- V is=2[H[ H hs=0[_1 KW["("] H[_2] KW[")"]] KW["="]] _3],
   SDef.2:iter-star-sep -- H hs=0[_1 KW[","]],

   SDefT                            
	-- V is=2[H[ H hs=0[_1 KW["("] H[_2]] KW["|"] H hs=0[H[_3] KW[")"]] KW["="]] _4],
   SDefT.2:iter-star-sep            -- H hs=0[_1 KW[","]],
   SDefT.3:iter-star-sep            -- H hs=0[_1 KW[","]],

   ExtSDefInl       
	-- V is=2[H[ KW["external"]  H hs=0[_1 KW["("] H[_2]] KW["|"] H hs=0[H[_3] KW[")"]] KW["="]] _4],
                
   ExtSDefInl.2:iter-star-sep       -- _1 KW[","],
   ExtSDefInl.3:iter-star-sep       -- _1 KW[","],
   ExtSDef -- H[ KW["external"]  H hs=0[_1 KW["("] H[_2]] KW["|"] H hs=0[H[_3] KW[")"]]],
   ExtSDef.2:iter-star-sep          -- _1 KW[","],
   ExtSDef.3:iter-star-sep          -- _1 KW[","],

   DefaultVarDec -- _1,
   VarDec -- H[_1 KW[":"] _2],
   OverlayNoArgs -- _1 KW["="] _2,
   Overlay -- V is=2[H[_1 KW["("] _2 KW[")"] KW["="]] _3],
   Overlay.2:iter-star-sep -- H hs=0[_1 KW[","]],

   Mark -- "@mark@"

]