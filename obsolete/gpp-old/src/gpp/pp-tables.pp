[
   "pp-tables-0" -- _1,
   NatCon -- _1,
   plus -- KW["+"] _1,
   minus -- KW["-"] _1,
   SOpt -- _1 KW["="] _2,
   SOptB -- _1 KW["="] _2,
   VS -- KW["vs"],
   HS -- KW["hs"],
   IS -- KW["is"],
   H -- KW["H"] _1 KW["["] _2 KW["]"],
   V -- KW["V"] _1 KW["["] _2 KW["]"],
   HV -- KW["HV"] _1 KW["["] _2 KW["]"],
   ALT -- KW["ALT"] KW["["] _1 _2 KW["]"],
   A -- KW["A"] _1 _2 KW["["] _3 KW["]"],
   R -- KW["R"] _1 KW["["] _2 KW["]"],
   AL -- KW["l"] _1,
   AC -- KW["c"] _1,
   AR -- KW["r"] _1,
   AOPTIONS -- KW["("] _1 KW[")"],
   AOPTIONS.1:iter-star-sep -- _1 KW[","],
   FNAT -- _1 KW["="] _2,
   FFID -- _1 KW["="] _2,
   F -- KW["F"] _1,
   FBOX -- _1 KW["["] _2 KW["]"],
   FN -- KW["fn"],
   FM -- KW["fm"],
   SE -- KW["se"],
   SH -- KW["sh"],
   SZ -- KW["sz"],
   CL -- KW["cl"],
   KW -- KW["KW"],
   VAR -- KW["VAR"],
   NUM -- KW["NUM"],
   MATH -- KW["MATH"],
   LBL -- KW["LBL"] KW["["] _1 _2 KW["]"],
   REF -- KW["REF"] KW["["] _1 _2 KW["]"],
   C -- KW["C"] _1 KW["["] _2 KW["]"],
   L -- KW["L"] KW["["] _1 _2 KW["]"],
   LNAT -- KW["L"] KW["["] _1 _2 KW["]"],
   S -- _1,
   Arg -- KW["_"] _1,
   Arg2 -- KW["_"] _1 KW["."] _2,
   PP-Table -- KW["["] _1 KW["]"],
   PP-Table.1:iter-star-sep -- _1 KW[","],
   selector -- _1 KW[":"] _2,
   Path1 -- _1,
   Path -- _1 KW["."] _2,
   Path.2:iter-sep -- _1 KW["."],
   PP-Entry
   --
   _1 KW["--"] _2
]
