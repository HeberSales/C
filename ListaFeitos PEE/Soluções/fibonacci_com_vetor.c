#include <stdio.h>

int main() {

    int i;
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < 60; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    } 
    
    int n, x;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        printf("Fib(%d) = %d\n", x, fib[x]);
    }

    return 0;
}
