#include "exercice1.h"
#include <stdio.h>
#include <stdlib.h>

tableau creertableau(int taille, int tailleMemoire) {
	tableau t;
	t.data		= Malloc(taille * tailleMemoire);
	t.taille	= taille;
	t.tmemoire	= tailleMemoire;
	return t;
}
void  afficher(tableau t,void(*p)(void *)) {
	void* ptr = t.data;
	for (int i = 0; i < t.taille; i++) {
		ptr += t.tmemoire;
		(*p)(ptr);
	}
}
 
tableau aleatoire(int taille, int tailleMemoire,void (*p)(void *)) {
	tableau t = creertableau(taille,tailleMemoire);
	void* ptr = t.data;
	for (int i = 0; i < t.taille; i++) {
		ptr += t.tmemoire;
		(*p)(ptr) ;
	}
}


void detruire_tout(tableau t){
    free(t.data);
}
void trier(tableau t,int (*compare)){
qsort(t.data,t.taille,t.tmemoire,&compare);

}
