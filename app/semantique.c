#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


/******************************************************************************************************************/
typedef struct Node {
	char* name;
	int type;
	int test_init;
	int test_use;
	int num_args;
	struct Node * next;
	struct Node * branch;
} Node;

typedef struct element {
	char* name;
	int test_init;
	int test_use;
}element;

typedef struct operation {
	element* tableau[20];
	int i;
}operation;
Node* dictionary;
Node* local_dictionary;
Node* arguments;
operation op;

char* branch = "global";
bool add_args = false;
int flag1 = 0;
/******************************************************************************************************************/
void activate_arguments(){
	add_args = true;
}

void build_operation(){
	op.i = 0;
}

void build_dictionary(){
	dictionary = NULL;
	local_dictionary = NULL;
	arguments =NULL;
}
/******************************************************************************************************************/
void insert(Node* node, Node* i, int yylineno){
	Node* move = node;
	char* name = i->name;
		while((strcmp(name,move->name)!=0)&&(move->next !=NULL)){
			move = move->next;
		}
		if(strcmp(name,move->name)!=0){
			move->next = i;
		}
		else{
			fprintf(stderr,"semantic error %d \n", yylineno);
			fprintf(stderr,"variable %s deja declaree on line %d \n", name, yylineno);
			flag1 = 1;
		}

}
/******************************************************************************************************************/
void insert_proc_identifier(char* name, int yylineno){
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
	if(dictionary == NULL){
		dictionary = i;
		local_dictionary = i;
		add_args = false;
		dictionary->branch = arguments;
		arguments = NULL;
	}
	else{
		move = dictionary;
		while((strcmp(name,move->name)!=0)&&(move->next !=NULL)){
			move = move->next;
		}
		if(strcmp(name,move->name)!=0){
		move->next = i;
		local_dictionary = i;
		//printf("procedure %s scanned correctly \n", name);
		add_args = false;
		local_dictionary->branch = arguments;
		arguments = NULL;
		}
		else{
			fprintf(stderr,"semantic error %d \n", yylineno);
			fprintf(stderr,"procedure %s deja declaree on line %d \n", name, yylineno);
			flag1 = 1;
		}
	}
}

void reset_local_dict(){
	local_dictionary = NULL;
}
/******************************************************************************************************************/
void insert_var_identifier(char* name, int yylineno){
	Node* i;
	Node* move;
	if( (i = (Node*)malloc(sizeof(Node))) == NULL){
		printf("erreur d'allocation\n");
		exit(1);
	}
	i->test_use = 0;
	i->num_args = -1;
	i->next = NULL;
	i->branch = NULL;
	i-> name  = name;
	i-> type = 0;
	i->test_init = 0;
	if(dictionary == NULL){
		if(add_args == true){
			if(arguments == NULL){
				arguments = i;
			}
			else
				insert(arguments, i, yylineno);
		}
		else{
			dictionary = i;
		}
	}
	else {
		if(add_args == true){
			if(arguments == NULL){
				arguments = i;
				//printf("arguments %s scanned and added correctly\n", i->name);
			}
			else
				insert(arguments, i, yylineno);
		}
		else {
			if(branch =="global"){
				insert(dictionary, i, yylineno);
			}
			else{
				move = local_dictionary;
				if(move->branch == NULL){
					move->branch = i;
					//printf("variable %s scanned correctly and added to %s  \n", i->name, branch);
				}
				else
				insert(move->branch, i, yylineno);
			}
		}
	}
}
/******************************************************************************************************************/
void insert_integer_to_operation(){
	element*  i = (element*)malloc(sizeof(element));
	i->name = "int";
	i->test_init = -1;
	i->test_use = -1;
	op.tableau[op.i] = i;
	op.i = op.i + 1;
}
/******************************************************************************************************************/
void insert_operand_to_operation(char* name, int test_init, int test_use){
	element*  i = (element*)malloc(sizeof(element));
	i->name = name;
	i->test_init = test_init;
	i->test_use = test_use;
	op.tableau[op.i] = i;
	op.i = op.i + 1;
}
/******************************************************************************************************************/
bool verify_in_global_dict(char* name){
	if(dictionary ==NULL)
		return false;
	Node* move = dictionary;
	while((strcmp(name,move->name)!=0)&&(move->next !=NULL)){
		move = move->next;
	}
	if(strcmp(name,move->name)==0){
		insert_operand_to_operation(move->name,move->test_init,move->test_use);
		return true;
	}
	else return false;
}
/******************************************************************************************************************/
bool insert_in_global_dict(char* name, int test_init,int test_use){
	if(dictionary ==NULL)
		return false;
	Node* move = dictionary;
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
/******************************************************************************************************************/
bool verify_in_local_dict(char* name){
	if(local_dictionary==NULL)
		return false;
	if(local_dictionary->branch == NULL)
		return false;
	Node* move = local_dictionary->branch;
	while((strcmp(name,move->name)!=0)&&(move->next !=NULL)){
		move = move->next;
	}
	if(strcmp(name,move->name)==0){
		insert_operand_to_operation(move->name,move->test_init,move->test_use);
		return true;
	}
	else return false;
}
/******************************************************************************************************************/
bool insert_in_local_dict(char* name, int test_init,int test_use){
	if(local_dictionary==NULL)
		return false;
	if(local_dictionary->branch == NULL)
		return false;
	Node* move = local_dictionary->branch;
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


/******************************************************************************************************************/
void verify_identifier_existance(char* name, int yylineno){
	if(verify_in_local_dict(name)){
	}else
	if(verify_in_global_dict(name)){
	}else{
		fprintf(stderr,"semantic error on line %d \n", yylineno);
		fprintf(stderr,"l'id %s n'est pas declaree on line %d \n", name, yylineno);
		flag1=1;
	}
}
/******************************************************************************************************************/
void display_dictionary(){
	Node* move = dictionary;
	printf("TABLE DES SYMBOLES INITIALISEE : \n");
	while(move !=NULL){
		if(move->num_args == -1){
			printf("Variable %s initialised: %d used: %d \n",move->name, move->test_init, move->test_use);
		}else{
			printf("Procedure %s  \n",move->name);
		}
		if(move->branch !=NULL){
			Node* move_branch = move->branch;
			while(move_branch != NULL){
				printf("------Variable %s initialised: %d used: %d \n",move_branch->name, move_branch->test_init, move_branch->test_use);
				move_branch = move_branch->next;
			}
		}
		move = move->next;
	}
}

void display_operation(){
	int i;
	printf("elements in operation: \n");
	for(i=0; i< op.i; i++){
		printf("%s \n",op.tableau[i]->name);
	}
}
/******************************************************************************************************************/
void add_mult_operation(int yylineno){
	if(op.i<2){
		fprintf(stderr,"semantic error on line %d \n", yylineno);
		fprintf(stderr,"your multiplication|add operation needs more operands on line %d \n", yylineno);
		flag1 = 1;
		return;
	}
	int count = 2;
	if(strcmp(op.tableau[op.i-1]->name,"int")!=0){
		if(op.tableau[op.i-1]->test_init == 0){
			count--;
			fprintf(stderr,"semantic error %d \n", yylineno);
			fprintf(stderr,"variable %s  not initialised on line %d \n", op.tableau[op.i-1]->name, yylineno);
			flag1=1;
		}else {
			if(! insert_in_local_dict(op.tableau[op.i-1]->name,-1,1))
			insert_in_global_dict(op.tableau[op.i-1]->name,-1,1);
		}
	}
	if(strcmp(op.tableau[op.i-2]->name,"int")!=0){
		if(op.tableau[op.i-2]->test_init == 0){
			count--;
			fprintf(stderr,"semantic error %d \n", yylineno);
			fprintf(stderr,"variable %s  not initialised on line %d \n", op.tableau[op.i-2]->name, yylineno);
			flag1=1;
		}else {
			if(! insert_in_local_dict(op.tableau[op.i-2]->name,-1,1))
			insert_in_global_dict(op.tableau[op.i-2]->name,-1,1);
		}
	}
	op.i = op.i - 2;
	if(count==2){
		insert_integer_to_operation();
	}


}
/******************************************************************************************************************/
void affect_operation(int yylineno){
	if(op.i<2){
		fprintf(stderr,"semantic error %d \n", yylineno);
		fprintf(stderr,"affectation impossible on line %d \n", yylineno);
		flag1=1;
		return;
	}
	if(strcmp(op.tableau[op.i-1]->name,"int")!=0){
		if(op.tableau[op.i-1]->test_init == 0){
			fprintf(stderr,"semantic error %d \n", yylineno);
			fprintf(stderr,"variable %s  not initialised on line %d \n", op.tableau[op.i-1]->name, yylineno);
			flag1=1;
		}else {
			if(! insert_in_local_dict(op.tableau[op.i-1]->name,-1,1))
			insert_in_global_dict(op.tableau[op.i-1]->name,-1,1);
		}
	}
	if(strcmp(op.tableau[op.i-2]->name,"int")==0){
		fprintf(stderr,"semantic error %d \n", yylineno);
		fprintf(stderr,"incompatible types affectation impossible on line %d \n", yylineno);
		flag1=1;
	}else{
		if(! insert_in_local_dict(op.tableau[op.i-2]->name,1,-1))
			insert_in_global_dict(op.tableau[op.i-2]->name,1,-1);
	}
	op.i = op.i - 2;
}






