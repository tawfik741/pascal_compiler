%option yylineno
delim     [ \t]
bl        {delim}+
chiffre   [0-9]
lettre    [a-zA-Z]
id        {lettre}({lettre}|{chiffre})*
nb        ("-")?{chiffre}+("."{chiffre}+)?(("E"|"e")"-"?{chiffre}+)?
iderrone  {chiffre}({lettre}|{chiffre})*
ouvrante  (\()
fermante  (\))
COMMENT_LINE        "//"

%%

{bl}                                                                                 /* pas d'actions */
"\n" 			                                                             ++yylineno;
"program"                                                                            printf(" keyword ");
"begin"                                                                              printf(" keyword ");
"end"                                                                                printf(" keyword ");
"int"                                                                                printf(" keyword ");
{ouvrante}                                                                           printf(" parenthèse_ouvrante ");
{fermante}                                                                           printf(" parenthèse_fermante ");
{id}                                                                                 printf(" Identifier ");
{nb}                                                                                 printf(" Number ");
"="|"<>"|"<"|">"|"<="|">="	                                                     printf(" OPREL "); 
":="	                                                                             printf(" OPPAFFECT ");
{COMMENT_LINE}         								     printf(" COMMENT ");

{iderrone}              {fprintf(stderr,"illegal identifier \'%s\' on line :%d\n",yytext,yylineno);}
	

%%

int main(int argc, char *argv[]) 
{
     yyin = fopen(argv[1], "r");
     yylex();
     fclose(yyin);
}

yywrap()
{
	return(1);
}
