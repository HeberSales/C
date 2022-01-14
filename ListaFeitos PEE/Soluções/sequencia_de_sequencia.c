#include <stdio.h>

void seq();

int main() {
    int n, k;
    scanf("%d", &n);

    for (k = 0; k < n; k++) {
        printf("Caso %d: ", k+1);
        seq();
    }

    return 0;
}

void seq() {
    int numero;

    scanf("%d", &numero);

    int i, j, count = 0;
    
   
    for (i = 1; i <= numero; i++) {
        for (j = 1; j <= i; j++){
            count++;
        }
    }
    if (count == 0) {
        printf("1 numero\n");
    }
    else {
        printf("%d numeros\n", count + 1);
    }

    count = 0;

    printf("%d ", 0);
    for (i = 1; i <= numero; i++) {
        for (j = 1; j <= i; j++){
            printf("%d ", i);
            count++;
        }
    }

}