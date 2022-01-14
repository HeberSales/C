#include <stdio.h>

int main() {

    int quant_alunos;
    scanf("%d", &quant_alunos);

    int x;
    scanf("%d", &x);

    int nota[quant_alunos];
    int nota_temp;

    //Pegando as notas
    int i, j;
    for (i = 0; i < quant_alunos; i++) {
        scanf("%d", &nota_temp);
        if (nota_temp >= 0 ) {
            nota[i] = nota_temp;
        }
    }
    //Organizando vetor;
    for (i = 0; i < quant_alunos; i++) {
        for (j = i + 1; j < quant_alunos; j++) {
            if (nota[i] > nota[j]) {
                nota_temp = nota[i];
                nota[i] = nota[j];
                nota[j] = nota_temp;
            }
        }
    }
    //Seleciona e printa a quinta nota;
    int count = 0;
    for (i = 0; i < quant_alunos; i++) {
        if (nota[i] == nota[i + 1]) {
            continue;
        }
        else {
            count++;
        }
        if (count == x) {
            printf("%d", nota[i]);
        }
    }

    return 0;
}