#include <stdio.h>

int main() {

    int n, i;

    scanf("%d", &n);

    int notas[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &notas[i]);
        if ( notas[i] < 0 || notas[i] > 10) {
            notas[i] = 11;
        }
    }

    int j, temp;
    //Organizando vetor;
    for (i = 0; i < n; i++) {
        for (j = i +1; j < n; j++){
            if (notas[i] > notas[j]) {

                temp = notas[i];
                notas[i] = notas[j];
                notas[j] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++) {
        if (notas[i] == notas[i + 1]) {
            continue;
        }
       else {
            break;
        }
    }
    printf("%d\n", notas[i + 1]);
    return 0;
}
