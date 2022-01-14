#include <stdio.h>

int main() {

    int i = 1;
    char palavra[50];

    scanf("%s", palavra);

    if (palavra[0] > 'a' && palavra[0] < 'z') {
         palavra[0] = palavra[0] - ('a' - 'A');
    }

    while (palavra[i] != '\0'){
        if (palavra[i] > 'A' && palavra[i] <'Z'){
            palavra[i] = palavra[i] + 'a' - 'A';
        }
        i++;
    }

    printf("%s", palavra);

    return 0;
}