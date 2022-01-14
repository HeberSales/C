#include <stdio.h>

int main() {

    int n, divisor;
    double nota;
    int aluno_atual = 1;
    double total = 0;

    scanf("%d", &n);
    divisor = n;

    while (aluno_atual <= n){
        scanf("%lf", &nota);
        aluno_atual++;
        if (nota < 0 || nota > 10){
            divisor--;
            continue;
        }
        else {
            total += nota;
        }
    }
    double media;
    media = total/ (double) divisor;
    printf("%.1f", media);

    return 0;
}
