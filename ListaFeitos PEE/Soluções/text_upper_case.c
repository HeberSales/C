#include <stdio.h>

int main() {

    int i = 1;
    char texto[50];

    fgets(texto,50,stdin);

    if (texto[0] >='a' && texto[0] <= 'z') {
        texto[0] = texto[0] -('a' - 'A');
    }

    while (texto[i] != '\0') {
        if (texto[i] >= 'A' && texto[i] <= 'Z' && texto[i-1] != ' ') {
            texto[i] = texto[i] + ('a' - 'A');
        }
        else if (texto[i] == ' ') {
            if (texto[i + 1] > 'a' && texto[i + 1] < 'z') {
                texto[i + 1] = texto[i + 1] -( 'a' - 'A');
            }
        }
       i++;
    }

    printf("%s", texto);

    return 0;
}