#include <stdio.h>

int main() {

    int fator;
    unsigned long long int n = 600851475143;

    fator = 2;
    while (n > 1) {
        while (n % fator == 0) {
            n = n/fator;
        }
        fator++;
    }
    printf("%d", fator - 1);
    return 0;
}
