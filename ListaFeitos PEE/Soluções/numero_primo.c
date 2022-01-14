#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int count = 0;
    int i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        printf("primo");
    }
    else {
        printf("nao");
    }

    return 0;
}
