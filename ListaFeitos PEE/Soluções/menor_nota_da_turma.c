#include <stdio.h>

int main() {

    int n;
    int nota, i;
    int menor = 10;

    scanf("%d", &n);

    for (i = 0; i < n ; i++) {
        scanf("%d", &nota);
        if (nota < 0 || nota > 10){
            continue;
        }
        else{
            if (nota < menor){
                menor = nota;
            }
        }

    }
    printf("%d",menor);
    return 0;
}
