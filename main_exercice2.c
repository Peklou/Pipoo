#include "exercice2.h"

struct test {
    long long int a;
    long long int b;
    long long int c;
};

void afficher_structure(/* A COMPLETER */) {
    /* A COMPLETER */
}

/* A COMPLETER */ aleatoire_structure(/* A COMPLETER */) {
    /* A COMPLETER */
}

void detruire_struct(/* A COMPLETER */) {
    /* A COMPLETER */
}

void afficher_int(/* A COMPLETER */) {
    /* A COMPLETER */
}

/* A COMPLETER */ aleatoire_int(/* A COMPLETER */) {
    /* A COMPLETER */
}

void detruire_int(/* A COMPLETER */) {
    /* A COMPLETER */
}
int main() {

    T_var tableau = aleatoire_var(/* A COMPLETER */); // tableau de int
    T_var tableau_1 = aleatoire_var(/* A COMPLETER */); // tableau de struct test

    afficher_var(tableau, /* A COMPLETER */); // affichage de tableau
    afficher_var(tableau_1, /* A COMPLETER */); // affichage de tableau_1

    int a = 8473843;
    push(tableau, /* A COMPLETER */); 
    
    afficher_var(tableau, /* A COMPLETER */); // affichage de tableau

    void *popped = pop(tableau); // suppression du dernier élément de tableau
    free(popped);
    popped = pop(tableau); // suppression du dernier élément de tableau
    free(popped);

    afficher_var(tableau, /* A COMPLETER */); // affichage de tableau

    popped = pop(tableau_1); // suppression du dernier élément de tableau_1
    free(popped);
    popped = pop(tableau_1); // suppression du dernier élément de tableau_1
    free(popped);

    afficher_var(tableau_1, /* A COMPLETER */); // affichage de tableau_1

    detruire_tout(/* A COMPLETER */); // destruction de tableau
    detruire_tout(/* A COMPLETER */); // destruction de tableau_1

    return EXIT_SUCCESS;

}
