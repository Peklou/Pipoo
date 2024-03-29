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
void afficher_structure(void * ptr) {
    printf( "a = %ld , b = %ld , c = %ld" ,(*ptr).a)
}

/* Crée une variable de type struct test en mémoire.
 * Cette fonction doit ensuite être utilisée dans la fonction aleatoire()
 * pour générer un tableau contenant des éléments de type struct test
 */
void aleatoire_structure(void * ptr,int taille) {
    /* A COMPLETER */
}

void detruire_struct(/* A COMPLETER */) {
    /* A COMPLETER */
}

void afficher_int(/* A COMPLETER */) {
    /* A COMPLETER */
}

void aleatoire_int(void *ptr) {
    *ptr = rand();
}

void detruire_int(/* A COMPLETER */) {
    /* A COMPLETER */
}

int main() {

    srand(time(NULL));
    T tableau = aleatoire(3,sizeof(int),*aleatoire_int); // tableau de int
    T tableau_1 = aleatoire(3,sizeof(test),*aleatoire_structure); // tableau de struct test

    afficher(tableau, *afficher_int); // affichage de tableau
    afficher(tableau_1, *afficher_structure); // affichage de tableau_1

    trier(tableau,); // tri de tableau
    afficher(tableau,*afficher_int); // affichage de tableau

    detruire_tout(tableau); // destruction de tableau
    detruire_tout(tableau_1); // destruction de tableau_1

    return EXIT_SUCCESS;
}
