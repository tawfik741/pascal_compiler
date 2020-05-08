#include <stdlib.h>
#include <stdio.h>
#include <string.h>


 enum Class { variable,procedure,parametre };


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


void creerDico(void) {
    maxDico = TAILLE_INITIALE_DICO;
    dico = malloc(maxDico * sizeof(ENTREE_DICO));
    if (dico == NULL)
        erreurFatale("Erreur interne (pas assez de mémoire)");
    sommet = base = 0;
}

void agrandirDico(void) {
    maxDico = maxDico + INCREMENT_TAILLE_DICO;
    dico = realloc(dico, maxDico);
    if (dico == NULL)
        erreurFatale("Erreur interne (pas assez de mémoire)");
}

void erreurFatale(char * message) {
    fprintf(stderr, "%s\n", message);
    exit(-1);
}


void ajouterSymbole(char * identif, char * type) {
    if (sommet >= maxDico)
        agrandirDico();

    dico[sommet].identif = malloc(strlen(identif) + 1);
    if (dico[sommet].identif == NULL)
        erreurFatale("Erreur interne (pas assez de mémoire)");
    strcpy(dico[sommet].identif, identif);
    dico[sommet].type = type;
    sommet++;
}


int main(){
    creerDico();
    ajouterSymbole("tawfik","entier");
    printf(dico[0].identif);

}
