#include <stdio.h>

int main() {

    int i;
    char numero[4];

    scanf("%s", numero);

    for ( i = 0; numero[i] != '\0'; i++) {
    }

    if (numero[i-3] == '1') {
        printf("C");
    }
    else if (numero[i-3] == '2') {
        printf("CC");
    }
        else if (numero[i-3] == '3') {
        printf("CCC");
    }
        else if (numero[i-3] == '4') {
        printf("CD");
    }
        else if (numero[i-3] == '5') {
        printf("D");
    }
        else if (numero[i-3] == '6') {
        printf("DC");
    }
        else if (numero[i-3] == '7') {
        printf("DCC");
    }
        else if (numero[i-3] == '8') {
        printf("DCCC");
    }
        else if (numero[i-3] == '9') {
        printf("CM");
    }

    if (numero[i-2] == '1') {
        printf("X");
    }
    else if (numero[i-2] =='2') {
        printf("XX");
    }
    else if (numero[i-2] == '3') {
        printf("XXX");
    }
    else if (numero[i-2] == '4') {
        printf("XL");
    }
    else if (numero[i-2] == '5') {
        printf("L");
    }
    else if (numero[i-2] == '6') {
        printf("LX");
    }
    else if (numero[i-2] == '7') {
        printf("LXX");
    }
    else if (numero[i-2] == '8') {
        printf("LXXX");
    }
    else if (numero[i-2] == '9') {
        printf("XC");
    }

    if (numero[i-1] == '1') {
        printf("I");
    }
    else if (numero[i-1] == '2') {
        printf("II");
    }
    else if (numero[i-1] == '3') {
        printf("III");
    }
    else if (numero[i-1] == '4') {
        printf("IV");
    }
    else if (numero[i-1] == '5') {
        printf("V");
    }
    else if (numero[i-1] == '6') {
        printf("VI");
    }
    else if (numero[i-1] == '7') {
        printf("VII");
    }
    else if (numero[i-1] == '8') {
        printf("VIII");
    }
    else if (numero[i-1] == '9') {
        printf("IX");
    }
    
    return 0;
}
