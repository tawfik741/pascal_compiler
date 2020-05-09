%{	
 /* We usually need these... */	
 #include <stdio.h>	
 #include <stdlib.h>	
 		
 #include "miniPasc.tab.h"	                                                                         	
 /* Local stuff we need here... */	
#include <math.h>	

#define		LE		500
#define		GE		501
#define		NE		502

%}

%option yylineno 

lettre [A-Za-z]
chiffre [1-9]
sep ["_"]
symbols ["?", "!",";", ",","/","*","+","'","="]
id {lettre}({lettre}|{chiffre}|{sep})*
iderr ({chiffre}|{sep})({lettre}|{chiffre}|{sep})*
delim [\t]
bl {delim}+
integer ("-")?{chiffre}+
string (\"[^\"]*\")
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
"\n"                                                                                  { }
"\n" 			                                                             		{++yylineno;}
[pP][rR][oO][gG][rR][aA][mM]                                                        return program;
[pP][rR][oO][cC][eE][dD][uU][rR][eE]											    return procedure;
[bB][eE][gG][iI][nN]																return keyword_begin;
[eE][nN][dD]                                                                        return keyword_end;
[vV][aA][rR]																	    return keyword_var;
[rR][eE][aA][dD]																	return keyword_read;
[wW][rR][iI][tT][eE]																return keyword_write;
[wW][hH][iI][lL][eE]																return keyword_while;
[dD][oO]																			return keyword_do;
[iI][fF]																			return keyword_if;
[tT][hH][eE][nN]																	return keyword_then;
[eE][lL][sS][eE]																	return keyword_else;
[iI][nN][tT][eE][gG][eE][rR]														return type_integer;
[sS][tT][rR][iI][nN][gG]														    return type_string;
[aA][rR][rR][aA][yY]																return keyword_array;
[oO][fF]																			return keyword_of;
"["																					return opening_brackets;
"]"																					return closing_brackets;
".."																				return two_points;
";"																					return semicolon;
"," 																				return comma;
{ouvrante}                                                                          return opening_parenthesis;
{fermante}                                                                          return closing_parenthesis;
{id}                                                                                return identifier;
{integer}																			return an_integer;
{string}																			return a_string;
"*"|"/"																				return mulop;
":="	                                                                            return affectop;
":"																					return colon;
">"|"<"|">="|"<="|"="                                                              return compop;

{iderr}              {fprintf(stderr,"illegal identifier \'%s\' on line :%d\n",yytext,yylineno);}

.			{fprintf(stderr,"Illegal character \'%s\' on line :%d\n",yytext,yylineno);}


%%