#include <stdio.h>
#include <stdlib.h>

int main() {

    int M;
    scanf("%d", &M);

    int A,B;
    scanf("%d %d", &A, &B);

    int C;
    C = M - A - B;

    int maior;
    maior = A;

    if (B > maior){
        maior = B;
    }
    if (C > maior){
        maior = C;
    }

    printf("%d",maior);

   return 0;
}
