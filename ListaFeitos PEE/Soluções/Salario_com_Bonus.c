#include <stdio.h>
#include <stdlib.h>

int main() {

    char nome[20];
    scanf(" %s",nome);

    double salario;
    scanf(" %lf", &salario);

    double vendas;
    scanf(" %lf", &vendas);

    double total;
    total = salario + 0.15*vendas;

    printf("TOTAL = R$ %.2lf", total);

    return 0;
}
