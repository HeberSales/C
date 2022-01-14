#include <stdio.h>

int main() {

    int n, i;
    int total = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        if ( i % 3 == 0 || i % 5 == 0) {
            total += i;
        }
    }
    printf("%d\n",total);
    return 0;
}
