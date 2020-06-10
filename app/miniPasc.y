%{
	

#include <stdio.h>
#include <stdlib.h>
#include "semantique.c"
 			
int yyerror(char const *msg);	
int yylex(void);
extern int yylineno;
int flag = 0;

%}

%token program 
%token semicolon

%union  {
  char * string;
}
%token < string > identifier

%token keyword_var
%token keyword_array
%token keyword_of
%token type_integer
%token type_string
%token procedure
%token keyword_begin
%token keyword_end
%token affectop
%token keyword_if
%token keyword_then
%token keyword_else
%token keyword_while 
%token keyword_do
%token keyword_write
%token keyword_read
%token opening_parenthesis
%token closing_parenthesis
%token opening_brackets
%token closing_brackets
%left mulop
%left addop
%left compop
%token an_integer
%token two_points
%token comma
%token colon

 

%start programmes

%%
                                                           
programmes:   program identifier semicolon
			  |program identifier semicolon instruction_composee 
			  |program identifier semicolon keyword_var liste_declarations 
			  |program identifier semicolon declaration_methodes
			  |program identifier semicolon keyword_var liste_declarations instruction_composee
			  |program identifier semicolon declaration_methode instruction_composee
			  |program identifier semicolon keyword_var liste_declarations declaration_methodes instruction_composee
			  |error identifier semicolon            {yyerror (" program attendu on line : "); }
	      	  |program identifier semicolon error liste_declarations instruction_composee		{yyerror ("keyword var attendu on line : "); }
	      	  |program identifier semicolon error liste_declarations declaration_methodes instruction_composee  {yyerror ("keyword var attendu on line : "); }
              |program error semicolon               {yyerror (" identifier attendu on line : "); } 
              |program identifier error              {yyerror (" point virgule attendu on line : "); }
              |program identifier semicolon error    {yyerror (" instruction composee attendu on line");};
			  
liste_declarations : declaration liste_declarations  
					 |declaration 
					 


declaration: declaration_corps semicolon
			|declaration_corps error 	{yyerror ("[declaration]semicolon attendu on line : "); };	

declaration_corps: liste_identificateurs colon type 
				   |liste_identificateurs error type 		{yyerror ("colon attendu on line : "); };


liste_identificateurs: liste_identificateurs comma identifier		{	//set_args();
																		add_var_identifier($3, yylineno);}
					   |identifier									{	//printf("test value : %s \n",$1);
						   												//set_args();
					   													add_var_identifier((char*)$1, yylineno);}
					   |error comma identifier 						{yyerror ("identifier attendu on line : "); }
					   |liste_identificateurs error identifier 		{yyerror ("comma attendu on line : "); }
					   |liste_identificateurs comma error 			{yyerror ("identifier attendu on line : "); };


type:standard_type
	 |keyword_array opening_brackets an_integer two_points an_integer closing_brackets keyword_of standard_type
	 |error opening_brackets an_integer two_points an_integer closing_brackets keyword_of standard_type 	{yyerror ("keyword array attendu on line : ");}
	 |keyword_array error an_integer two_points an_integer closing_brackets keyword_of standard_type 		{yyerror ("opening brackets attendu on line : ");}
	 |keyword_array opening_brackets error two_points an_integer closing_brackets keyword_of standard_type 	{yyerror ("an integer attendu on line : ");}
	 |keyword_array opening_brackets an_integer error an_integer closing_brackets keyword_of standard_type 	{yyerror ("two points attendu on line : ");}
	 |keyword_array opening_brackets an_integer two_points error closing_brackets keyword_of standard_type 	{yyerror ("an integer attendu on line : ");}
	 |keyword_array opening_brackets an_integer two_points an_integer error keyword_of standard_type 		{yyerror ("closing brackets attendu on line : ");}
	 |keyword_array opening_brackets an_integer two_points an_integer error standard_type 	{yyerror ("keyword of attendu on line : ");};


standard_type: type_integer
				|type_string
		        |error 		{yyerror ("type attendu on line : "); };


declaration_methodes : declaration_methode declaration_methodes 
					   |declaration_methode 
					   |error declaration_methodes 				{yyerror ("declaration methode attendu on line : "); }
					   

declaration_methode: entete_methode semicolon instruction_composee
					 |entete_methode semicolon keyword_var liste_declarations  instruction_composee  
					 |entete_methode semicolon keyword_var  liste_declarations
					 |entete_methode semicolon

entete_methode: procedure identifier {add_proc_identifier($2, yylineno);}
				|procedure identifier arguments {add_proc_identifier($2, yylineno);}
				|error identifier  		{yyerror ("procedure attendu on line : "); }
				|procedure error  			{yyerror ("identifier attendu on line : "); }
				

arguments: opening_parenthesis liste_parametres closing_parenthesis
		   |opening_parenthesis liste_parametres error 		{yyerror ("closing_parenthesis attendu on line : "); };


liste_parametres: liste_parametres comma declaration_corps
			   	  |declaration_corps
			   	  |error comma declaration_corps 		{yyerror ("parametre attendu on line : "); }
			   	  |liste_parametres error declaration_corps 	{yyerror ("[parametres]semicolon attendu on line : "); };


instruction_composee	: keyword_begin keyword_end		{reset_branch();}
						  |keyword_begin liste_instructions keyword_end		{reset_branch();}
						  |error keyword_end 		{yyerror ("keyword_end attendu on line : ");};


liste_instructions: instruction semicolon liste_instructions
					|instruction semicolon 
					|error semicolon instruction 				{yyerror ("instruction attendu on line : ");}
					|instruction error liste_instructions  		{yyerror ("[instructions]semicolon attendu on line : ");};
					

instruction: lvalue affectop expression		{	
												affectation(yylineno);
												}
			 |lvalue error expression 		{yyerror ("affect op attendu on line : ");}		
			 | appel_methode				{printf("method call\n");}
			 |instruction_composee
			 |keyword_if expression keyword_then instruction
			 |keyword_if expression keyword_then instruction keyword_else instruction
			 |error expression keyword_then instruction keyword_else instruction   {yyerror ("keyword_if attendu on line : ");}
			 |keyword_if expression error instruction keyword_else instruction 	   {yyerror ("keyword_then attendu on line : ");}
			 |keyword_if expression keyword_then instruction error instruction 	   {yyerror ("keyword_else attendu on line : ");}
			 |error expression keyword_then instruction							   {yyerror ("keyword_if attendu on line : ");}
			 |keyword_if expression error instruction							   {yyerror ("keyword_then attendu on line : ");}
			 |keyword_while expression keyword_do instruction
			 |error expression keyword_do instruction 		{yyerror ("keyword_while attendu on line : ");}
			 |keyword_while expression error instruction 	{yyerror ("keyword_do attendu on line : ");}
			 |keyword_write opening_parenthesis closing_parenthesis
			 |keyword_write opening_parenthesis liste_expressions closing_parenthesis
			 |keyword_write error liste_expressions closing_parenthesis 	{yyerror ("opening_parenthesis attendu on line : ");}
			 |keyword_write opening_parenthesis liste_expressions error 	{yyerror ("closing_parenthesis attendu on line : ");}
			 |keyword_read opening_parenthesis closing_parenthesis
			 |keyword_read opening_parenthesis liste_expressions closing_parenthesis
			 |keyword_read error liste_expressions closing_parenthesis 	{yyerror ("opening_parenthesis attendu on line : ");}
			 |keyword_read opening_parenthesis liste_expressions error 	{yyerror ("closing_parenthesis attendu on line : ");};


lvalue: identifier{								printf("affect op %s \n",$1);
												add_element_to_operation($1,0,0);
												print_operation();
												}
		|identifier opening_brackets expression closing_brackets;


appel_methode: identifier opening_parenthesis closing_parenthesis {check_identifier($1, yylineno);}
               |identifier opening_parenthesis liste_expressions closing_parenthesis {check_identifier($1, yylineno);}
               |error opening_parenthesis closing_parenthesis 		{yyerror ("identifier attendu on line : ");};


liste_expressions: liste_expressions comma expression
				   |expression  
				   |error comma expression 				{yyerror ("lexpression attendu on line : ");}
				   |liste_expressions error expression  {yyerror ("comma attendu on line : ");} ;


expression: facteur
			|facteur addop facteur	{mull_add_op(yylineno);}
			|facteur mulop facteur	{mull_add_op(yylineno);}
			|facteur compop facteur	{mull_add_op(yylineno);}


facteur: identifier {check_identifier($1, yylineno);}
		 |identifier opening_brackets expression closing_brackets {check_identifier($1, yylineno);}
		 |identifier opening_brackets expression error 		{yyerror ("closing_brackets attendu on line : ");}
		 |opening_parenthesis expression closing_parenthesis
		 |opening_parenthesis expression error 		{yyerror ("closing_parenthesis attendu on line : ");};
		 |an_integer	{add_int_to_operation();}
		 


%% 

int yyerror(char const *msg) {
       
	
	fprintf(stderr, "%s %d\n", msg,yylineno);
	flag = 1;
	return 0;
		
}

extern FILE *yyin;

int main(int argc, char *argv[])
{
 printf("\n STARTING ANALYSIS\n");
 argc--, argv++;	/* ignorer le 1er paramétre: le nom du fichier C actuel */
	if(argc > 0) {
		yyin = fopen(argv[0], "r");
	} else {
		printf("fichier introuvable !");
		return 0;
	}
 	create_dict();
 	create_operation();
 	print_dict();
	print_args();
 yyparse();
 if((flag == 0)&&(flag1 ==0)) printf("\nCODE CORRECT");
 else printf("\n CODE INCORRECT");
 
 return 0 ;
}
yywrap()
{
	return(1);
}
