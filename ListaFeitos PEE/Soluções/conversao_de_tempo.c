#include <stdio.h>
#include <stdlib.h>

int main() {

    int tempo;
    scanf("%d", &tempo);

    int horas;
    horas = tempo/3600;

    int resto;
    resto = tempo - 3600*horas;

    int minutos;
    minutos = resto/60;

    resto = resto - 60*minutos;

    int segundos;
    segundos = resto;

    printf("%d:%d:%d", horas, minutos, segundos);

    return 0;
}
