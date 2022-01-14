#include<stdlib.h>

typedef struct
{
    int *lista;
    int size;
} VETOR;

VETOR * intercala(VETOR *a, VETOR *b) {

    VETOR *vetor;
    vetor = (VETOR *) malloc(sizeof(VETOR));

    int menor;
    if (a->size > b->size) {
        menor = b->size;
    }
    else {
        menor = a->size;
    }

    vetor->lista = (int *) malloc(2*menor*sizeof(int));

    vetor->size = 2*menor;
    int i, j;
    for (i = 0, j = 0; i < 2*menor; i+= 2, j++) {
        vetor->lista[i] = a->lista[j];
    }
    for (i = 1, j = 0; i < 2*menor; i+= 2, j++) {
        vetor->lista[i] = b->lista[j]; 
    }

    return vetor;
}