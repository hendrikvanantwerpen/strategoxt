[
   "autobundle-0"               -- _1,
   PackageDef                   -- V[KW["package"] _1 _2 _3 _4],
   PackageDef.3:iter-star          -- _1,
   PackageDef.4:opt             -- _1,
   Name                         -- KW["name"] KW["="] _1,
   Version                      -- KW["version"] KW["="] _1,
   Location                     -- KW["location"] KW["="] _1,
   Location.1:opt               -- _1,
   LocationPBSD                 -- Vis=3[KW["location"] _1],
   LocationPBSD.1:seq           -- _1 _2,
   PrimaryLoc                   -- H[KW["primary"] KW["="] _1],
   SecondaryLoc                 -- H[KW["secondary"] KW["="] _1],
   Info                         -- KW["info"] KW["="] _1,
   Info.1:opt                   -- _1,
   Description                  -- KW["description"] KW["="] HV[_1],
   Description.1:opt            -- _1,
   Keywords                     -- KW["keywords"] KW["="] HV[_1],
   Keywords.1:iter-star-sep           -- H hs=0[ _1 KW[","]],
   Keywords.1:iter-star-sep.1:iter    -- H[_1],
   Identification               -- Vis=3[KW["identification"] Hhs=0[_1] 
                                     Hhs=0[_2] Hhs=0[_3] Hhs=0[_4] 
                                     Hhs=0[_5] Hhs=0[_6]],
   Option                       -- R [_1 _2],
   Interface                    -- Vis=3[H[KW["configuration"] KW["interface"]] _1],
   Interface.1:iter-star        -- A(l,l)[_1],
   InterfaceOld                 -- Vis=3[KW["interface"] _1],
   InterfaceOld.1:iter-star     -- A(l,l)[_1],
   Requires                     -- Vis=3[KW["requires"] _1],
   Requires.1:iter-star         -- _1,
   BuildTimeRequires               -- V  is = 3 [H  [KW["build-time"] KW["requires"]] _1],
   BuildTimeRequires.1:iter-star   -- _1,
   RunTimeRequires                 -- V  is =3 [H  [KW["run-time"] KW["requires"]] _1],
   RunTimeRequires.1:iter-star     -- _1,
   ReqPackage                   -- V is=3[H[_1 _2 ] _3],
   ReqPackage.3:opt             -- _1,
   ReqPackage.3:opt.1:seq       -- Vis=3[KW["with"] _1],
   ReqPackage.3:opt.1:seq.1:iter -- _1,
   Switch                       -- _1,
   ArgSwitch                    -- Hhs=0[_1 KW["="] _2],
   Configuration                -- Vis=3[KW["configuration"] _1],
   Configuration.1:iter-star    -- _1,
   Bundle                       -- Vis=3[KW["bundle"] _1 _2 _3 _4],
   Bundles                      -- Vis=3[KW["bundles"] _1],
   Bundles.1:iter-star          -- _1,
   Package                      -- Vis=3[KW["package"] _1 _2]
]
