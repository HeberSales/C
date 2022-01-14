#include <stdio.h>

int main() {

    int a, b, c, d, e;
    int i;
    int pos = 1;
    int maior;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    maior = a;
    
    int numeros[5] = {a, b, c, d, e};

    for (i = 0; i < 5; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
            pos = i + 1;
        }
    }
    printf("%d\n", maior);
    printf("%d", pos);

    return 0;
}
