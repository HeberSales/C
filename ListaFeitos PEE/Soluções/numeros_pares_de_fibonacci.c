#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    unsigned int a = 1, b = 2;
    unsigned int c;
    unsigned int total = 0;

    while (a < n) {
        if (a % 2 == 0) {
            total += a;
        }
        c = a + b;
        a = b;
        b = c;

    }
    printf("%d\n", total);
    return 0;
}
