#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef enum Class { variable,procedure,parametre } Class;


typedef
struct {
    char * identif ;
    char * type;
    enum Class classe;
    int nb_parametres ;
    int is_used ;
    int is_init ;
} ENTREE_DICO;


#define TAILLE_INITIALE_DICO 50
#define INCREMENT_TAILLE_DICO 25

ENTREE_DICO *dico;
int maxDico, sommet, base;

void erreurFatale(char * message) {
    fprintf(stderr, "%s\n", message);
    exit(-1);
}

void creerDico(void) {
    maxDico = TAILLE_INITIALE_DICO;
    dico = malloc(maxDico * sizeof(ENTREE_DICO));
    if (dico == NULL)
        erreurFatale("Erreur interne (pas assez de m�moire)");
    sommet = base = 0;
}

void agrandirDico(void) {
    maxDico = maxDico + INCREMENT_TAILLE_DICO;
    dico = realloc(dico, maxDico);
    if (dico == NULL)
        erreurFatale("Erreur interne (pas assez de m�moire)");
}

int read_file(char* file_name){
    FILE *fp;
    char ch ;
    printf("Enter name of a file you wish to see\n");
    fp = fopen(file_name, "r"); // read mode

    if (fp == NULL)
    {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }

    printf("The contents of %s file are:\n", file_name);

    while((ch = fgetc(fp)) != EOF)
       printf("%c", ch);

    fclose(fp);
    return 0;
}

void ajouterSymbole(char * identif, char * type , Class  c , int nb_parametres , int is_used , int is_init ) {
    if (sommet >= maxDico)
        agrandirDico();
    //id
    dico[sommet].identif = malloc(strlen(identif) + 1);
    if (dico[sommet].identif == NULL)
        erreurFatale("Erreur interne (pas assez de m�moire)");
    strcpy(dico[sommet].identif, identif);
    //type
    if (dico[sommet].type == NULL)
        erreurFatale("Erreur interne (pas assez de m�moire)");
    strcpy(dico[sommet].type, type);
    //classe
    dico[sommet].classe = c ;
    //nb_parametres
    dico[sommet].nb_parametres = nb_parametres ;
    //is_used
    dico[sommet].is_used = is_used ;
    //is_init
    dico[sommet].is_init = is_init ;
    
    
    sommet++ ;
}
check

int main(){
    creerDico();
    printf("debug\n");
    
    ajouterSymbole("tawfik","entier",procedure,4,0,0);
    printf("%d\n",dico[0].nb_parametres);
    printf("%d\n",dico[0].is_init);
    //read_file("hello.txt");
}
