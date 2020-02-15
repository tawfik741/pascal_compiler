%{
	

#include <stdio.h>	
 			
int yyerror(char const *msg);	
int yylex(void);
extern int yylineno;

%}

%token PROGRAM 
%token point_virgule
%token point
%token ID

 

%start programmes

%%
                                                           
programmes		     : PROGRAM ID point_virgule
                              |error ID point_virgule            {yyerror (" program attendu on line : "); }
                              |PROGRAM error point_virgule       {yyerror (" nom du programme invalide on line : "); } 
                              |PROGRAM ID error                  {yyerror (" point virgule attendu on line : "); };

%% 

int yyerror(char const *msg) {
       
	
	fprintf(stderr, "%s %d\n", msg,yylineno);
	return 0;
	
	
}

extern FILE *yyin;

main()
{
 yyparse();
 
 
}
yywrap()
{
	return(1);
}
  
                   
