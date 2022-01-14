#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int binario[9];

    int i;
    for (i = 0 ;n >= 2 ;i++) {      //pega os restos das divisões por 2;
        binario[i] = n % 2;
        n = n/2;
    }

    binario[i] = n;     //utiliza o ultimo i incrementado pelo "for" anterior para definir o último resto;

    for (i = i; i >= 0; i--) {     //escreve o vetor de trás pra frente,
        printf("%d", binario[i]);  //começando do vetor ultimo (i), até o vetor 0;
    }

    return 0;
}