#include <stdio.h>

int main() {

    int quant_alunos;
    scanf("%d", &quant_alunos);

    int nota[100];
    int nota_temp;
    int quant_notas[100] = { 0 };

    int i;
    for (i = 0; i < quant_alunos; i++) {
        scanf("%d", &nota_temp);
        if (nota_temp >= 0 && nota_temp <= 10) {
            nota[i] = nota_temp;
            quant_notas[nota[i]]++;
        }
    }

    for (i = 0; i <= 10; i++) {
        printf("%d ", quant_notas[i]);
    }

    return 0;
}
