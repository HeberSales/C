#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    char identificador[51];

    int i;
    for (i = 0; i < n; i++) {
        scanf("%s", identificador);
        if ((identificador[0] >= 'A' && identificador[0] <= 'Z')    //restringe à letras maiúsculas,

            || (identificador[0] >= 'a' && identificador[0] <= 'z') //OU minúsculas

            || (identificador[0] == '_')) {                         //OU underline;

            printf("VALIDO\n");
        }
        else {
            printf("NAO VALIDO\n");
        }
    }

    return 0;
}
