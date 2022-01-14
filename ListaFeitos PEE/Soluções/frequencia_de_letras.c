#include <stdio.h>

void F();

int main() {

    int i, quant;
    scanf("%d", &quant);
    setbuf (stdin,NULL);

    for (i = 0; i < quant; i++) {
        F();
    }

    return 0;
}

void F() {

    int histograma[26] = { 0 };

    char texto[201];
    fgets(texto, 201, stdin);

    int i;
    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            histograma[texto[i] - 'a']++;
        }
        else if (texto[i] >= 'A' && texto[i] <= 'Z') {
            histograma[texto[i] - 'A']++;
        }
    }

    int maior = 0, kount = 0;
    char letra_maior[26] = { NULL };
    for (i = 0; i < 26; i++) {
        if (histograma[i] > maior) {
            maior = histograma[i];;
        }
    }

    for (i = 0; i < 26; i++) {
        if (histograma[i] == maior) {
            letra_maior[kount] = i + 'a';
            kount++;
        }
    }

    /*for (i = 0; i < 26; i++) {
        printf(" %c : %d\n",i + 'a', histograma[i]);
    }*/

    for (i = 0; letra_maior[i] != '\0'; i++) {
        printf("%c", letra_maior[i]);
    }
    printf("\n");
}