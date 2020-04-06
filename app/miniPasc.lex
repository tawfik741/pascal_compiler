%{	
 /* We usually need these... */	
 #include <stdio.h>	
 #include <stdlib.h>	
 		
 #include "miniPasc.tab.h"	                                                                         	
 /* Local stuff we need here... */	
#include <math.h>	 			
%}


%option yylineno
lettre [A-Za-z]
chiffre [1-9]
sep ["_"]
symbols ["?", "!",";", ",","/","*","+","'"]
id {lettre}({lettre}|{chiffre}|{sep})*
iderr ({chiffre}|{sep})({lettre}|{chiffre}|{sep})*
delim [\t]
bl {delim}+
integer ("-")?{chiffre}+
ouvrante  (\()
fermante  (\))
message               ("\"")({lettre}|{chiffre}|{sep}|{symbols})*("\"")

%x C_COMMENT


%%

"/*"            { BEGIN(C_COMMENT); }
<C_COMMENT><<EOF>> { fprintf(stderr,"unclosed comment on line :%d\n",yylineno); exit( 1 ); }
<C_COMMENT>"*/" { BEGIN(INITIAL); }
<C_COMMENT>\n   { }
<C_COMMENT>.    { }

{bl}                                                                                /* pas d'actions */
" "																					/* pas d'actions */
"\n" 			                                                             		++yylineno;
"program"                                                                           return program;
"procedure"																			return procedure;
"begin"																				return keyword_begin;
"end"                                                                               return keyword_end;
"var"																				return keyword_var;
"read"																				return keyword_read;
"write"																				return keyword_write;
"while"																				return keyword_while;
"do"																				return keyword_do;
"if"																				return keyword_if;
"then"																				return keyword_then;
"else"																				return keyword_else;
"integer"																			return type_integer;
"array"																				return keyword_array;
"of"																				return keyword_of;
"["																					return opening_brackets;
"]"																					return closing_brackets;
".."																				return two_points;
";"																					return semicolon;
"," 																				return comma;
{ouvrante}                                                                          return opening_parenthesis;
{fermante}                                                                          return closing_parenthesis;
{id}                                                                                return identifier;
{integer}																			return an_integer;
"*"|"/"																				return mulop;
"-"|"+"                                                         			        return addop; 
":="	                                                                            return affectop;
":"																					return colon;

{iderr}              {fprintf(stderr,"illegal identifier \'%s\' on line :%d\n",yytext,yylineno);}

.			{fprintf(stderr,"Illegal character \'%s\' on line :%d\n",yytext,yylineno);}


%%