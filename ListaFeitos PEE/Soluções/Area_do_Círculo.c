#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main() {

    double R;
    scanf(" %lf", &R);
    double A;
    A = PI*R*R;
    printf("A= %.4lf\n", A);

    return 0;
}
