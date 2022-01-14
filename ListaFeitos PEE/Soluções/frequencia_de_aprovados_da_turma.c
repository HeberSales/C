#include <stdio.h>

int main() {

    int n, i,nota , total = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d",&nota);
        if (nota < 0 || nota > 10){
            continue;
        }
        else if (nota >= 5) {
            total +=1;
        }
    }
    printf("%d",total);
    return 0;
}
