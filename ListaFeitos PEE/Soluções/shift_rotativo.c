#include <stdio.h>

int main() {

    int n, i;
    scanf("%d", &n);

    int vetor[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    int temp, prim;
    prim = vetor[n-1];
    for (i = n - 1; i > 0; i--) {
        vetor[i] = vetor[i- 1];
    }
    vetor[0] = prim;

    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}