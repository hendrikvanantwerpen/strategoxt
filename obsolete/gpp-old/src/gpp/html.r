\literate[html]
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

% $Id: html.r,v 1.1 2001/06/05 09:11:47 mdejonge Exp $

% Author: Merijn de Jonge (mdjonge@cwi.nl)

\begin{code}
module html

imports lib pp-tables.r misc
signature
constructors

// These are constructors for HTML constructs that are used for the BOX to
// HTML translation

   TABLE: Opts * Rows -> Table
   TR   : Opts * Cels -> TableRpw
   TD   : Opts * Text -> TableData
   TD'  : Text -> Td'
   SPAN : Opts * Text -> Span
   HREF : Url  * Text -> Href
   ANCHOR : Url -> Anchor
   BR   : Br
   NBSP : Nbsp
   S    : Text -> Text
   TDTD : Tdtd
   TDTR : Text -> Trtd
   PRE  : Text -> Pre
   HR   : Hr 

strategies 
html2text = 
   bottomup(try(Html2text))

// This strategy implments a simple pretty-printer for abstract HTML
Html2text =
   ?TABLE( opts, rows );
      ![ "<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", opts, ">",
      rows, "</table>"]
   <+
      ?TR( opts, cells );
      !["<tr ", opts, ">", cells, "</tr>"]
   <+
      ?TD( opts, table-data );
      !["<td ", opts, ">", table-data, "</td>"]
   <+
      ?TD'( text );
      !["</td>", text, "<td>"]
   <+
      ?SPAN( opts, text );
      !["<span ", opts, ">",text,"</span>"]
   <+
      ?PRE( text );
      !["<pre>", text, "</pre>"]
   <+
      ?TDTR( text );
      !["</td></tr>", text, "<tr><td>"]
   <+
      ?HREF( url, text );
      !["<a href=\"", url, "\">", text, "</a>"]
   <+
      ?ANCHOR( url );
      !["<a name=\"", url, "\"></a>"]
   <+
      ?BR(); !"<br>"
   <+
      ?NBSP(); !"&nbsp;"
   <+
      ?HR(); !"<hr>"
   <+
      ?TDTD();!"</td><td>"

html-string =
   explode-string;
   listtd( try( replace-quotes ) );
   map(try(
      \32 -> <explode-string>"&nbsp;" \  (* space *)
   +
      \38 -> <explode-string>"&amp;" \   (* & *)
   +
      \60 -> <explode-string>"&lt;" \    (* < *)
   +
      \62 -> <explode-string>"&gt;" \    (* > *)
   
   ));
   flat-list;
   implode-string

// replaces "abcd\"efg\"hij" to "abcd``efg''hij"
replace-quotes =
   [34|?xs]; 
   ![96,96| <oncetd( \ [34| xs'] -> [39,39|xs'] \ ) >xs]
\end{code}
