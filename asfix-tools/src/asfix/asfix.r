\literate[{\tt ASFIX}]
% GT -- Grammar Tools
% Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
%                    Eelco Visser <visser@acm.org>
%                    Joost Visser <jvisser@cwi.nl>
%
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
%
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
%
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.

% $Id: asfix.r,v 1.2 2002/03/13 21:50:35 eelco Exp $


	Abstract syntax for parse tree representation of SDF2 parsers.

\begin{code}
module asfix
signature
  sorts Sort
  constructors
    layout        : Sort
    cf            : Sort -> Sort
    lex           : Sort -> Sort
    opt           : Sort -> Sort
    seq           : Sort -> Sort
    lit           : String -> Sort
    iter-sep      : Sort * Sort -> Sort
    iter-star-sep : Sort * Sort -> Sort
    iter          : Sort -> Sort
    iter-star     : Sort -> Sort
    alt           : Sort * Sort -> Sort
    char-class    : Char-Class -> Sort
    sort          : String -> Sort
    varsym        : Sort -> Sort
\end{code}

\begin{code}
  sorts Attribute 
  constructors
    atr      : String -> Attribute
    cons     : String -> Attribute
    no-attrs : List(Attribute)
    attrs    : List(Attribute) -> List(Attribute)
\end{code}

\begin{code}
  sorts Prod AsFixTerm
  constructors
    prod     : List(Sort) * Sort * List(Attribute) -> Prod
    appl     : Prod * List(AsFixTerm) -> AsFixTerm
    amb      : List(AsFixTerm) -> AsFixTerm
    flatlex  : Sort * String -> AsFixTerm
    meta-var : String -> AsFixTerm
\end{code}

	Note: integers are also AsFixTerms

\begin{code}
  sorts ParseTree
  constructors
    parsetree : AsFixTerm * Int -> ParseTree
\end{code}
