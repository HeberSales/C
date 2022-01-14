#include <stdio.h>
#include <stdlib.h>


int main() {

    double tempo;
    scanf(" %lf", &tempo);

    double velocidade;
    scanf(" %lf", &velocidade);

    double distancia;
    distancia = tempo * velocidade;

    double combustivel;
    combustivel = distancia/12;

    printf("%.3lf",combustivel);

    return 0;
}
