#include<stdio.h>

int main(void) {
    
    char nome_arquivo[100];
    scanf("%s", nome_arquivo);

    FILE *arquivo = fopen(nome_arquivo, "r");

    if (arquivo == NULL) {
        printf("Arquivo nao pôde ser aberto!");
    }
    int n;
    fscanf(arquivo,"%d",&n);

    double matriz[n][n];
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            fscanf(arquivo,"%lf", &matriz[i][j]);
        }
    }
    
    double total[1000] = { 0 }, maior = matriz[0][0];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            total[i] = total[i] + matriz[i][j];
            if (total[i] > maior) {
                maior = total[i];
            }
        }
    }

    printf("%lf\n", maior);

    double total2[1000] = { 0 };
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            total2[i] = total2[i] + matriz[i][j];
        }
        if (total2[i] == maior) {
            printf("%d\n", i);
        }
    }

    return 0;
}