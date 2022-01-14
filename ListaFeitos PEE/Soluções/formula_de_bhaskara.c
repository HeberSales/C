#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double a,b,c;
    scanf(" %lf %lf %lf",&a,&b,&c);
    float delta = b*b - 4*a*c;
    float x1, x2;
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    if(delta < 0 || a == 0){
        printf("Impossivel calcular");
    }
    else{
    printf("R1 = %.5f\nR2 = %.5f\n",x1,x2);
    }
       return 0;
}
