#include <stdio.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d", &N);

    int cem;
    cem = N/100;

    int resto;
    resto = N - cem*100;

    int cinquenta;
    cinquenta = resto/50;

    resto = resto - cinquenta*50;

    int vinte;
    vinte = resto/20;

    resto = resto - vinte*20;

    int dez;
    dez = resto/10;

    resto = resto - dez*10;

    int cinco;
    cinco = resto/5;

    resto = resto - cinco*5;

    int dois;
    dois = resto/2;

    resto = resto - dois*2;

    int um;
    um = resto;

    printf("%d\n",N);
    printf("%d nota(s) de R$ 100,00\n",cem);
    printf("%d nota(s) de R$ 50,00\n",cinquenta);
    printf("%d nota(s) de R$ 20,00\n",vinte);
    printf("%d nota(s) de R$ 10,00\n",dez);
    printf("%d nota(s) de R$ 5,00\n",cinco);
    printf("%d nota(s) de R$ 2,00\n",dois);
    printf("%d nota(s) de R$ 1,00",um);

    return 0;
}
