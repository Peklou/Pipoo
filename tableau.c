#include "tableau.h"
#include <stdio.h>
#include <stdlib.h>

T creertableau(int taille, int tailleMemoire) {
	T t;
	t.data		= Malloc(taille * tailleMemoire);
	t.taille	= taille;
	t.tmemoire	= tailleMemoire;
	return t;
}
void  afficher(T t,int (*p)(void *)) {
	void* ptr = t.data;
	for (int i = 0; i < t.taille; i++) {
		ptr += t.tmemoire;
		(*p)(ptr));
	}
<<<<<<< HEAD
}
 
void  alleatoire(T t,void (*p)(void *)) {
	void* ptr = t.data;
	for (int i = 0; i < t.taille; i++) {
		ptr += t.tmemoire;
		(*p)(ptr) ;
	}
}


=======

}
>>>>>>> f842f0128921ede2445e69028e4b921ed9c0cf0a
void detruire_tout(TABLEAU t){
    free(t.data);
}
void trier(TABLEAU T,int (*compare)){
qsort(t.data,t.taille,t.tmemoire,&compare);

}
