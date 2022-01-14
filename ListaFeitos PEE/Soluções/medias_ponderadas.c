#include <stdio.h>

int main() {

    int n, i;
    float a, b, c;
    float media[3];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%f %f %f", &a, &b, &c);
        media[i] = (2*a + 3*b + 5*c)/10.0;
    
    }
    printf("%.1f\n", media[0]);
    printf("%.1f\n", media[1]);
    printf("%.1f\n", media[2]);

    return 0;
}
