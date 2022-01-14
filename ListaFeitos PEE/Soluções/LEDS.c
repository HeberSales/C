#include <stdio.h>
#include <math.h>

int main() {

    int i, j = 0, soma = 0;
    int leds[10] = {6 , 2 , 5 , 5 , 4, 5 , 6 , 3 , 7 , 6};

    int n;
    scanf("%d", &n);

    //int pot = pow(10,100);

    char x[100];

    for (i = 0; i < n; i++) {
        scanf("%s", x);
            while (x[j] != '\0') {
               if (x[j] == '0') {
                   soma += leds[0];
               } 
               else if (x[j] == '1') {
                   soma += leds[1];
               }
               else if (x[j] == '2') {
                   soma += leds[2];
               }
               else if (x[j] == '3') {
                   soma += leds[3];
               }
               else if (x[j] == '4') {
                   soma += leds[4];
               }
               else if (x[j] == '5') {
                   soma += leds[5];
               }
               else if (x[j] == '6') {
                   soma += leds[6];
               }
               else if (x[j] == '7') {
                   soma += leds[7];
               }
               else if (x[j] == '8') {
                   soma += leds[8];
               }
               else if (x[j] == '9') {
                   soma += leds[9];
               }
                j++;
            }
            printf("%d leds\n", soma);
            j = 0;
            soma = 0;
    }

    return 0;
}
