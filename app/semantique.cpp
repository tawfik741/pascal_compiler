#include <stdio.h>
//les classes
typedef enum TYPE_symbole {variable,procedure,parametre} TYPE_symbole;
//la table des symboles 
typedef struct noeud {
    char * identif ; 
    int nb_parametres ; 
    TYPE_symbole classe ;
    int is_used ; 
    int is_init ; 
    struct noeud * suivant ;
    struct noeud * sous_liste ;     
}noeud;
int main () {
    
}