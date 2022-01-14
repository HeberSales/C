#include <stdio.h>

int main() {

    int ch;
    char nome[200];
    scanf( "%s", nome);

    for (ch = 0; nome[ch] != '\0'; ch++){
        if (nome[ch] >= 'a' && nome[ch] <= 'z') {
            printf("%c", nome[ch]);
        } else if (nome[ch] >= 'A' && nome[ch] <= 'Z') {
            printf("%c", nome[ch] + 'a' - 'A');
        } else {
            printf("%c", nome[ch]);
        }
    }

    return 0;
}
