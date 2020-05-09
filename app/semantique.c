#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


// the structure of the table of symbols
typedef struct Node {
	char* name;
	int type;
	int test_init;
	int test_use;
	int num_args;
	struct Node * next;
	struct Node * branch;
} Node;

//  the structure of the element used to check each operation
typedef struct element {
	char* name;
	int test_init;
	int test_use;
}element;

// the structure of the operation
typedef struct operation {
	element* tableau[20];
	int i;
}operation;




// the global dict
Node* dict;
// the local dict
Node* local_dict;
// the dict of args
Node* args;

operation op;


char* branch = "global";
bool add_args = false;
int flag1 = 0;


void create_dict(){
	dict = NULL;
	local_dict = NULL;
	args =NULL;
	//printf("les deux dictionnaires sont crees\n");
}

void create_operation(){
	op.i = 0;
}

void set_args(){
	add_args = true;
}

// ***********insert a variable's id into the table of symbols****************** 

void add(Node* node, Node* i, int yylineno){
	Node* move = node;
	char* name = i->name;
		while((strcmp(name,move->name)!=0)&&(move->next !=NULL)){
			move = move->next;
		}
		if(strcmp(name,move->name)!=0){
			move->next = i;
			//printf("variable %s scanned correctly and added to %s  \n", name, branch);
		}
		else{
			fprintf(stderr,"semantic error %d \n", yylineno);
			fprintf(stderr,"variable %s deja declaree on line %d \n", name, yylineno);
			flag1 = 1;
		}
		
}

// insert a variable into the table of symbols
void add_var_identifier(char* name, int yylineno){
	Node* i;
	Node* move;
	if( (i = (Node*)malloc(sizeof(Node))) == NULL){
		printf("erreur d'allocation\n");
		exit(1);
	}
	i-> name  = name;
	i-> type = 0;
	i->test_init = 0;
	i->test_use = 0;
	i->num_args = -1;
	i->next = NULL;
	i->branch = NULL;
	if(dict == NULL){
		if(add_args == true){
			if(args == NULL){
				args = i;
				//printf("args %s scanned and added correctly\n", i->name);
			}
			else
				add(args, i, yylineno);
		}
		else{
			dict = i;
			//printf("variable %s scanned correctly and added to %s  \n", i->name, "global");
		}
	}
	else {
		if(add_args == true){
			if(args == NULL){
				args = i;
				//printf("args %s scanned and added correctly\n", i->name);
			}
			else
				add(args, i, yylineno);
		}
		else {
			if(branch =="global"){
				add(dict, i, yylineno);
			}
			else{
				move = local_dict;
				if(move->branch == NULL){
					move->branch = i;
					//printf("variable %s scanned correctly and added to %s  \n", i->name, branch);
				}
				else
				add(move->branch, i, yylineno);
			}
		}
	}
}



// insert a procedure into the table of symbols
void add_proc_identifier(char* name, int yylineno){
	Node* i;
	Node* move;
	if( (i = (Node*)malloc(sizeof(Node))) == NULL){
		printf("erreur d'allocation\n");
		exit(1);
	}
	char* a = "proc_";
	char* result = malloc(30*sizeof(char));
	strcpy(result,a);
	strcat(result, name);
	i-> name  = result;
	i-> type = 1;
	i->test_init = 0;
	i->test_use = 0;
	i->num_args = 0;
	i->next = NULL;
	i->branch = NULL;
	branch = name;
	//printf("modifing the branch to %s\n", branch);
	if(dict == NULL){
		dict = i;
		local_dict = i;
		add_args = false;
		dict->branch = args;
		args = NULL;
	}
	else{
		move = dict;
		while((strcmp(name,move->name)!=0)&&(move->next !=NULL)){
			move = move->next;
		}
		if(strcmp(name,move->name)!=0){
		move->next = i;
		local_dict = i;	
		//printf("procedure %s scanned correctly \n", name);
		add_args = false;
		local_dict->branch = args;
		args = NULL;
		}
		else{
			fprintf(stderr,"semantic error %d \n", yylineno);
			fprintf(stderr,"procedure %s deja declaree on line %d \n", name, yylineno);
			flag1 = 1;
		}
	}
}

void reset_branch(){
	local_dict = NULL;
	//printf("this is the end\n");
}



void add_element_to_operation(char* name, int test_init, int test_use){
	element*  i = (element*)malloc(sizeof(element));
	i->name = name;
	i->test_init = test_init;
	i->test_use = test_use;
	op.tableau[op.i] = i;
	op.i = op.i + 1;
}

void add_int_to_operation(){
	element*  i = (element*)malloc(sizeof(element));
	i->name = "int";
	i->test_init = -1;
	i->test_use = -1;
	op.tableau[op.i] = i;
	op.i = op.i + 1;
}




bool check_localy(char* name){
	if(local_dict==NULL)
		return false;
	if(local_dict->branch == NULL)
		return false;
	Node* move = local_dict->branch;
	while((strcmp(name,move->name)!=0)&&(move->next !=NULL)){
		move = move->next;
	}
	if(strcmp(name,move->name)==0){
		add_element_to_operation(move->name,move->test_init,move->test_use);
		return true;
	}
	else return false;
}

bool add_localy(char* name, int test_init,int test_use){
	if(local_dict==NULL)
		return false;
	if(local_dict->branch == NULL)
		return false;
	Node* move = local_dict->branch;
	while((strcmp(name,move->name)!=0)&&(move->next !=NULL)){
		move = move->next;
	}
	if(strcmp(name,move->name)==0){
		if(test_init ==-1){
			move->test_use = test_use;
		}
		else move->test_init = test_init;
		return true;
	}
	else return false;
}

bool check_globaly(char* name){
	if(dict ==NULL)
		return false;
	Node* move = dict;
	while((strcmp(name,move->name)!=0)&&(move->next !=NULL)){
		move = move->next;
	}
	if(strcmp(name,move->name)==0){
		add_element_to_operation(move->name,move->test_init,move->test_use);
		return true;
	}
	else return false;
}

bool add_globaly(char* name, int test_init,int test_use){
	if(dict ==NULL)
		return false;
	Node* move = dict;
	while((strcmp(name,move->name)!=0)&&(move->next !=NULL)){
		move = move->next;
	}
	if(strcmp(name,move->name)==0){
		if(test_init ==-1){
			move->test_use = test_use;
		}
		else move->test_init = test_init;
		return true;
	}
	else return false;
}

void check_identifier(char* name, int yylineno){
	if(check_localy(name)){
		//printf("l'id %s existe localement\n", name);
	}else
	if(check_globaly(name)){
		//printf("l'id %s existe globalment\n", name);
	}else{
		fprintf(stderr,"semantic error %d \n", yylineno);
		fprintf(stderr,"l'id %s n'est pas declaree on line %d \n", name, yylineno);
		flag1=1;
	}
}

void mull_add_op(int yylineno){
	if(op.i<2){
		fprintf(stderr,"semantic error %d \n", yylineno);
		fprintf(stderr,"pas assez de variables pour l'operation mul|add on line %d \n", yylineno);
		flag1 = 1;
		return;
	}
	int count = 2;
	if(strcmp(op.tableau[op.i-1]->name,"int")!=0){
		if(op.tableau[op.i-1]->test_init == 0){
			count--;
			fprintf(stderr,"semantic error %d \n", yylineno);
			fprintf(stderr,"variable %s  non initialisee on line %d \n", op.tableau[op.i-1]->name, yylineno);
			flag1=1;
		}else {
			if(! add_localy(op.tableau[op.i-1]->name,-1,1))
			add_globaly(op.tableau[op.i-1]->name,-1,1);
		}
	}
	if(strcmp(op.tableau[op.i-2]->name,"int")!=0){
		if(op.tableau[op.i-2]->test_init == 0){
			count--;
			fprintf(stderr,"semantic error %d \n", yylineno);
			fprintf(stderr,"variable %s  non initialisee on line %d \n", op.tableau[op.i-2]->name, yylineno);
			flag1=1;
		}else {
			if(! add_localy(op.tableau[op.i-2]->name,-1,1))
			add_globaly(op.tableau[op.i-2]->name,-1,1);
		}
	}
	op.i = op.i - 2;
	if(count==2){
		add_int_to_operation();
	}
		
	
}

void affectation(int yylineno){
	if(op.i<2){
		fprintf(stderr,"semantic error %d \n", yylineno);
		fprintf(stderr,"affectation impossible on line %d \n", yylineno);
		flag1=1;
		return;
	}
	if(strcmp(op.tableau[op.i-1]->name,"int")!=0){
		if(op.tableau[op.i-1]->test_init == 0){
			fprintf(stderr,"semantic error %d \n", yylineno);
			fprintf(stderr,"variable %s  non initialisee on line %d \n", op.tableau[op.i-1]->name, yylineno);
			flag1=1;
		}else {
			if(! add_localy(op.tableau[op.i-1]->name,-1,1))
			add_globaly(op.tableau[op.i-1]->name,-1,1);
		}
	}
	if(strcmp(op.tableau[op.i-2]->name,"int")==0){
		fprintf(stderr,"semantic error %d \n", yylineno);
		fprintf(stderr,"affectation pour un entier est impossible on line %d \n", yylineno);
		flag1=1;
	}else{
		if(! add_localy(op.tableau[op.i-2]->name,1,-1))
			add_globaly(op.tableau[op.i-2]->name,1,-1);
	}
	op.i = op.i - 2;
}


void print_dict(){
	Node* move = dict;
	printf("TABLE DES SYMBOLES INITIALISEE : \n");
	while(move !=NULL){
		if(move->num_args == -1){
			printf("Variable %s initialise: %d utilise: %d \n",move->name, move->test_init, move->test_use);	
		}else{
			printf("Procedure %s  \n",move->name);
		}
		if(move->branch !=NULL){
			Node* move_branch = move->branch;
			while(move_branch != NULL){
				printf("------Variable %s initialise: %d utilise: %d \n",move_branch->name, move_branch->test_init, move_branch->test_use);
				move_branch = move_branch->next;
			}
		}
		move = move->next;
	}
}

void print_operation(){
	int i;
	printf("les elements dans la pile d'operation: \n");
	for(i=0; i< op.i; i++){
		printf("%s \n",op.tableau[i]->name);
	}
}

/*
main(){
	create_dict();
	create_operation();
	add_var_identifier("a",0);
	add_var_identifier("b",0);
	add_var_identifier("c",0);
	add_proc_identifier("boh1",0);
	add_var_identifier("b",0);
	add_element_to_operation("b",0,0);
	add_int_to_operation();
	affectation(0);
	add_element_to_operation("a",0,0);
	add_element_to_operation("b",1,0);
	add_int_to_operation();
	mull_add_op(0);
	affectation(0);
	add_proc_identifier("boh2",0);
	add_var_identifier("b",0);
	print_dict();	
	//add_element_to_operation("el2",1,1);
	print_operation();
	
		
}
*/





