#include <stdio.h>


int main() {

    int x,y;
    int i;
    int total = 0;

    scanf("%d %d", &x, &y);

    int maior = x, menor = y;
    if (y > x) {
        maior = y;
        menor = x;
    }
    menor += 1;
    for (i = menor;i < maior; i++) {
        if (i % 2 != 0){
            total += i;
        }
    }
    printf("Total: %d",total);

    return 0;
}
