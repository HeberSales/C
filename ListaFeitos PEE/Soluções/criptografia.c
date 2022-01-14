#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int count = 0;
    while(count <= n) {

        int i = 0;
        char texto[1000];

        fgets(texto,1000,stdin);    

        int len;
        for (len = 0; texto[len] != '\0'; len++) {
            //descubro o lenght do texto
        }

        while (texto[i] != '\0') {
            if (texto[i] >= 'A' && texto[i] <= 'z') {
                texto[i] += 3;
            }
            i++;
        }

        i = 0;
        int inicio = 0, fim = len - 1, temp;

        while (fim > inicio) {
            temp = texto[inicio];
            texto[inicio] = texto[fim];
            texto[fim] = temp;
            inicio++;
            fim--;
        }
        if (len % 2 == 0) {
            for (i = len/2; i < len; i++) {
                texto[i] -= 1;
            }
        }
        else {
            for (i = len/2 + 1; i < len; i++) {
                texto[i] -= 1;
            }
        }
        printf("%s", texto);
        count++;
    }

    return 0;
}
