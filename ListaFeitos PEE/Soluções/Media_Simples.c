#include <stdio.h>
#include <stdlib.h>

int main() {

    double A, B;
    scanf(" %lf %lf",&A , &B);
    double media;
    media = (3.5*A + 7.5*B)/11;

    printf("MEDIA= %.5lf",media);

    return 0;
}