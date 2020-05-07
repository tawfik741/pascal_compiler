


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
"program"                                                                           printf(" program");
"procedure"																			printf(" procedure");
"begin"																				printf(" keyword_begin");
"end"                                                                               printf(" keyword_end");
"var"																				printf(" keyword_var");
"read"																				printf(" keyword_read");
"write"																				printf(" keyword_write");
"while"																				printf(" keyword_while");
"do"																				printf(" keyword_do");
"if"																				printf(" keyword_if");
"then"																				printf(" keyword_then");
"else"																				printf(" keyword_else");
"integer"																			printf(" type_integer");
"array"																				printf(" keyword_array");
"of"																				printf(" keyword_of");
"["																					printf(" opening_brackets");
"]"																					printf(" closing_brackets");
".."																				printf(" two_points");
";"																					printf(" semicolon");
"," 																				printf(" comma");
{ouvrante}                                                                          printf(" opening_parenthesis");
{fermante}                                                                          printf(" closing_parenthesis");
{id}                                                                                printf(" identifier");
{integer}																			printf(" an_integer");
"*"|"/"																				printf(" mulop");
"-"|"+"                                                         			        printf(" addop"); 
":="	                                                                            printf(" affectop");
":"																					printf(" colon");

{iderr}              {fprintf(stderr,"illegal identifier \'%s\' on line :%d\n",yytext,yylineno);}

.			{fprintf(stderr,"Illegal character \'%s\' on line :%d\n",yytext,yylineno);}



%%


int main(int argc, char *argv[]) 
{
     yyin = fopen(argv[1], "r");
     yylex();
     fclose(yyin);
}

int yywrap()
{
	return(1);
}