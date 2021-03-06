#include <stdio.h>

int main() {

    int i, j;
    int prod, resto, inverso = 0, original;
    int maior = 0;

    for (i = 999; i >= 900; i--) {
        for (j = 999; j >= 900; j--) {
            prod = i*j;
            original = prod;

            inverso = 0;

            while (prod != 0) {
                resto = prod % 10;
                inverso = inverso*10 + resto;
                prod = prod/10;
            }

            if (inverso == original) {
                if (inverso > maior) {
                    maior = inverso;
                }
            }
        }

    }
    printf("%d", maior);
    return 0;
}
