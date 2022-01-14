#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    double A[n];
    double B[n];

    int i;
    for (i = 0; i < n; i++) {       //armazena os valores de A em um vetor;
        scanf("%lf", &A[i]);
    }
    for (i = 0; i < n; i++) {       //armazena os valores de B em um vetor;
        scanf("%lf", &B[i]);
    }
    
    double soma = 0;
    for (i = 0; i < n; i ++) {      //faz o somatorio dos valores de An*Bn;
        soma += A[i]*B[i];
    }

    printf("%lf", soma);
    return 0;
}