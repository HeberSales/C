#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double n;
    scanf(" %lf", &n);
    if (n < 0){
        printf("Fora de intervalo");
    }
    else if (n > 100){
        printf("Fora de intervalo");
    }
    else if (0<= n && n <= 25){
        printf("Intervalo [0,25]");
    }

    else if(25 < n && n <=50){
        printf("Intervalo (25,50]");
    }

    else if (50< n && n <= 75){
        printf("Intervalo (50,75]");
    }
    else if (75 < n && n <=100){
        printf("Intervalo (75,100]");
    }
}
