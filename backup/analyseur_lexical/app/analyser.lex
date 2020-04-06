%option yylineno
spaces					" "*
line_returns			"\n"*
space_between_words		({spaces}|{line_returns})*
ignore_space			{space_between_words}*
delim     				[ \t]
bl        				{delim}+	
comment   				"{".*"}"|"(*".*"*)"|"//".*""\n" 
chiffre   				[0-9]
lettre    				[a-zA-Z]
literal_entier			{chiffre}*
id        				{lettre}({lettre}|{chiffre})*
nb        				("-")?{chiffre}+("."{chiffre}+)?(("E"|"e")"-"?{chiffre}+)?
iderrone  				{chiffre}({lettre}|{chiffre})*
ouvrante  				(\()	
fermante  				(\))
comparaison				"="|"<>"|"<"|">"|"<="|">="
arith 					"+"|"-"|"*"|"/"|"mod"|"div"
type 					"integer"|"boolean"|"char"|"string"
op_logique 				"or"|"not"|"and"
bool_value 				"true"|"false" 
punc 					";"|"."|","|":"
keyword 		"program"|"var"|"func"|"proc"|"begin"|"if"|"then"|"else"|"while"|"do"|"for"|"to"|"repeat"|"until"|"end"
commentline 			"//".*"\n"
program					"program"{ignore_space}{id}
liste_declarations		{declaration}* 
declaration 			"var"{ignore_space}{declaration_corps}{ignore_space};{ignore_space}	
declaration_corps		{liste_ids}{ignore_space}":"{ignore_space}{type}
liste_ids 				{id_enumeration}*{ignore_space}{id}
id_enumeration			{id}{ignore_space}","
declaration_methodes	declaration_methode{ignore_space}*
declaration_methode 	{entete_methode}{ignore_space}{liste_declarations}{ignore_space}{instruction_composee}
entete_methode			"procedure"{ignore_space}{id}{ignore_space}{arguments}
arguments				{ouvrante}{ignore_space}{liste_parametres}{ignore_space}{fermante}
liste_parametres 		{declaration_corps_c}*
declaration_corps_c		{ignore_space}{declaration_corps}{ignore_space}
instruction_composee 	"begin"{ignore_space}{liste_instructions}{ignore_space}"end"
liste_instructions 		{instruction}*
if_instruction			"if"{ignore_space}{expression}{ignore_space}"then"{ignore_space}{instruction}{ignore_space}"else"{ignore_space}{instruction}
while_instruction		"while"{ignore_space}{expression}{ignore_space}"do"{ignore_space}{instruction}
assign_instruction 		{lvalue}{ignore_space}{ignore_space}":="{ignore_space}{expression}|{appel_methode}
read_instruction		"read"{ignore_space}{ouvrante}{ignore_space}{liste_ids}{ignore_space}{fermante}
write_instruction		"write"{ignore_space}{ouvrante}{ignore_space}{liste_expressions}{ignore_space}{fermante}
rw_instruction			{read_instruction}|{write_instruction}
instruction 			{assign_instruction}|{rw_instruction}|{if_instruction}	
lvalue					{id}|{expression}
appel_methode			{id}{ignore_space}{ouvrante}{ignore_space}{liste_expressions}{ignore_space}{fermante}
liste_expressions		{expression_s}*
expression_s			{ignore_space}{expression}{ignore_space}
expression 				{facteur}{ignore_space}{addop}{ignore_space}{facteur}|{facteur}{ignore_space}{mulop}{ignore_space}{facteur}
addop					"+"|"/"
mulop					"*"|"-"
facteur					{literal_entier}|{expression}|{id}{expression}

%%
{bl}                                                            /* pas d'actions */
"\n" 			                                          		++yylineno;
{commentline}													{printf("commentline ");++yylineno;}
{keyword}                                                       printf(" keyword ");
{punc}															printf(" punc ");
{bool_value}                                                    printf(" boolean ");
{type}                                                          printf(" type ");
{op_logique}													printf("op�rateur logique");
{comparaison}													printf("comp");
{op_logique}													printf("op�rateur logique");
{ouvrante}                                                      printf(" parenth�se_ouvrante ");
{fermante}                                                      printf(" parenth�se_fermante ");
{nb}                                                            printf(" Number ");
":="	                                                        printf(" OPPAFFECT ");
{program}														printf ("program");
{liste_declarations}											printf (" liste de declarations ")	;
{liste_expressions}												printf("liste_expression");		
{appel_methode}													printf(" appel_methode ");		
{instruction}													printf("instruction");
{iderrone}              										{fprintf(stderr,"illegal identifier \'%s\' on line :%d\n",yytext,yylineno);}
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