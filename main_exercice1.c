#include "exercice1.h"

struct test {
    long long int a;
    long long int b;
    long long int c;
};
typedef struct tableau* T;
/* Affiche une variable de type struct test
 * Cette fonction doit ensuite être utilisée dans la fonction afficher()
 * pour afficher tous les éléments du tableau générique
 */
void afficher_structure(/* A COMPLETER */) {
    /* A COMPLETER */
}

/* Crée une variable de type struct test en mémoire.
 * Cette fonction doit ensuite être utilisée dans la fonction aleatoire()
 * pour générer un tableau contenant des éléments de type struct test
 */
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

    srand(time(NULL));
    T tableau = aleatoire(/* A COMPLETER */); // tableau de int
    T tableau_1 = aleatoire(/* A COMPLETER */); // tableau de struct test

    afficher(tableau, /* A COMPLETER */); // affichage de tableau
    afficher(tableau_1, /* A COMPLETER */); // affichage de tableau_1

    trier(tableau, /* A COMPLETER */); // tri de tableau
    afficher(tableau, /* A COMPLETER */); // affichage de tableau

    detruire_tout(/* A COMPLETER */); // destruction de tableau
    detruire_tout(/* A COMPLETER */); // destruction de tableau_1

    return EXIT_SUCCESS;
}
