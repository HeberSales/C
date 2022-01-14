#include <stdio.h>

int main() {

    char N[32];
    char M[32];
    int K;

    scanf("%s", N);
    scanf("%s", M);
    scanf("%d", &K);

    int i;
    for (i = 0; M[i] != '\0'; i++) {}

    int count = 0;
    char k_ultimos_digitos[K];      

    for (i = i; count <= K; i--) {
        k_ultimos_digitos[count] = M[i];       //pega os K últimos dígitos, porém, invertidos;
        count++;
    }

    int j = 0;
    char inverso[K];

    for (i = K ; i >= 0; i--) {
        inverso[j] = k_ultimos_digitos[i];      //inverte os K últimos dígitos para o certo;
        j++;
    } 

    i = 0;
    int resp, count1 = 0;

    while (N[count1] != '\0') {                 //conta o tamanho de N[];
        count1++;
    }

    for (i = 0; i <= count1 - K; i++) {     //verifica se os K últimos dígitos de M[]
        for (j = i; j < i + K; j++) {       //estão dentro de N[];

            resp = 1;
            if (N[j] != inverso[j - i]) {

                resp = 0;
                break;
            }
        }
        if (resp == 1) {
            break;
        }
    }

    printf("%d", resp);
    return 0;
}