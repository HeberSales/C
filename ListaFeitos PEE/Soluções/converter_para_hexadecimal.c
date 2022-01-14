#include <stdio.h>

int main() {

    int n, i = 0;
    int resto[20];
    scanf("%d", &n);

    while (n >= 16) {
        resto[i] = n % 16;
        n = n/16;
        //printf("%d\n", resto[i]);
        i++;
    }
    if (n <= 9) {
        printf("%d", n);
    }
    else if (n == 10) {
        printf("A");
    }
    else if (n == 11) {
        printf("B");
    }
    else if (n == 12) {
        printf("C");
    }
    else if (n == 13) {
        printf("D");
    }
    else if (n == 14) {
        printf("E");
    }
    else if (n == 15) {
        printf("F");
    }

    for (i = i - 1; i >= 0; i--) {
        if (resto[i] <= 9) {
            printf("%d", resto[i]);
        }
        else if (resto[i] == 10) {
            printf("A");
        }
        else if (resto[i] == 11) {
            printf("B");
        }
        else if (resto[i] == 12) {
            printf("C");
        } 
        else if (resto[i] == 13) {
            printf("D");
        }
        else if (resto[i] == 14) {
            printf("E");
        }
        else if (resto[i] == 15) {
            printf("F");
        }
    }   

    return 0;
}
