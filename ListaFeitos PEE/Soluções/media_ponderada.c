#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    double valores[100];
    double pesos[100];

    int i;
    for (i = 0; i < n; i++) {
        scanf("%lf %lf", &pesos[i], &valores[i]);  //pega os valores e pesos e colocam em vetor;
    }

    double soma_valores = 0;
    double soma_pesos = 0;

    for (i = 0; i < n; i++) {
        soma_valores += pesos[i]*valores[i];  //calcula a soma dos valores multiplicados pelos seus pesos
        soma_pesos += pesos[i];     //calcula a soma dos pesos
    }
    double media = soma_valores/soma_pesos;     //calcula a média ponderada

    printf("%f", media);

    return 0;
}