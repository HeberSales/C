#include <stdio.h>
#include <stdlib.h>


int main() {

    int idade;
    scanf(" %d", &idade);

    int anos;
    anos = idade/360;

    int resto;
    resto = idade - 365 * anos;

    int meses;
    meses = resto/30;

    resto = resto - 30*meses;

    int dias;
    dias = resto;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)", dias);

    return 0;
}
