module conc-modules

imports lib

signature
   constructors
      Module : String -> Option
      Include: File -> Include
      Main:    String -> Option
      Specification: list(Module) -> Specification
      Imports: list(Module) -> Imports

strategies
conc-modules = parse-options( io-options
                 + ArgOption("-m", \x -> Module(x)\,       !"-m <module>  Concat <module>")
                 + ArgOption("-I", \x -> Include(x)\,      !"-I <dir>     Search in dir")
                 );
               store-options;
               ConcModules
                  
ConcModules =
   get-options;
   filter( \Include(p)->p\ )=> path;
   get-options;
   collect(\ Module(m) -> m \)=> modules;
   map(Parse(!path));concat;filter(not(Imports(id)));
   !Specification(<id>)

Parse(path) =
   guarantee-extension(!"r");
   <debug(!"Reading*: ");find-in-path> (<id>,<path>());
   parse-mod;
   ?Specification(xs);!xs


parse-mod : 
  filein -> trm
  where <conc-strings> ("pack-stratego",
                        <get-pid; int-to-string>()) => fileout;
        <call>("parse-mod",
               ["-silent", "-i", filein, "-o", fileout]);
        <ReadFromFile> fileout => trm;               
        <rm-files> [fileout]
