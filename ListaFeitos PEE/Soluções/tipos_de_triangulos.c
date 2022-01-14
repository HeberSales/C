#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double maior = a;
    double menor1 = b;
    double menor2 = c;

    if (b > maior) {
        maior = b;
        menor1 = a;
        menor2 = c;
    }
    if (c > maior) {
        maior = c;
        menor1 = a;
        menor2 = b;
    }

    if (maior >= menor1 + menor2) {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (pow(maior,2) == pow(menor1,2) + pow(menor2,2)) {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (pow(maior,2) > pow(menor1,2) + pow(menor2,2)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (pow(maior,2) < pow(menor1,2) + pow(menor2,2)) {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if (a == b && b == c) {
        printf("TRIANGULO EQUILATERO");
    }
    else if (a == b || a == c || b == c) {
        printf("TRIANGULO ISOSCELES");
    }
    return 0;
}
