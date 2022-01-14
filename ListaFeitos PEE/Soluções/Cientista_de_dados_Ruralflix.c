#include<stdio.h>

int main(void) {
    
    char nome_arquivo[15];
    scanf("%s", nome_arquivo);

    FILE *arquivo = fopen(nome_arquivo, "r");

    if (arquivo == NULL) {
        printf("Arquivo nao pode ser aberto!");
        return 1;
    }
    int quant_usuarios, quant_videos, quant_avaliacoes;

    fscanf(arquivo, "%d", &quant_usuarios);
    fscanf(arquivo, "%d", &quant_videos);
    fscanf(arquivo, "%d", &quant_avaliacoes);

    int i, user, video, nota;
    int popularidade[1000] = { 0 };

    for (i = 0; i < quant_avaliacoes; i++) {
        user = 0;
        video = 0;
        nota = 0;
        fscanf(arquivo, "%d", &user);
        fscanf(arquivo, "%d", &video);
        popularidade[video]++;
        fscanf(arquivo, "%d", &nota);
    }

    int maior = 0, filme_popular = 0;
    for (i = 1; i < quant_videos; i++) {
        if (popularidade[i] > maior) {
            maior = popularidade[i];
            filme_popular = i;
        }
    }
    
    for (i = 1; i < quant_videos; i++) {
        if (popularidade[i] == maior) {
            if (i < filme_popular) {
                filme_popular = i;
            }
        }
    }

    printf("%d", filme_popular);

    return 0;
}