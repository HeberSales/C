#include <stdio.h>

int main() {

    int n, i;
    scanf("%d", &n);

    int menor, pos;
    int vetor[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
        if ( i == 0) {
            menor = vetor[i];
            pos = i;
        } else if ( vetor[i] < menor) {
            menor = vetor[i];
            pos = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d", menor, pos);
    return 0;
}
