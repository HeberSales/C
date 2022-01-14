#include <stdio.h>

int main() {

    int n, i, j;
    scanf("%d", &n);

    int vetor[n+1];
    vetor[0] = -1;

    for (i = 1; i < n + 1; i++) {
        scanf("%d", &vetor[i]);
        for (j = 0; j < i; j++) {
            if (vetor[i] == vetor[j]) {
                while (vetor[i] == vetor[j]) {
                    scanf("%d", &vetor[i]);
                    j = 0;
                }
            }
        }
    }

    for (i = 1; i < n + 1; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
