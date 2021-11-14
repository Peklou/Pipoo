#include "tableau.h"
#include <stdio.h>

void* creertableau(int taille, int tailleMemoire) {
	TABLEAU t;
	t.data		= Malloc(taille * tailleMemoire);
	t.taille	= taille;
	t.tmemoire	= tailleMemoire;
	return t;
}
void  afficher(TABLEAU t) {
	void* ptr = t.data;
	for (int i = 0; i < t.taille; i++;) {
		ptr += t.tmemoire;
		printf("%d",*(int *)ptr)
	}
}