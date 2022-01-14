int fat(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    
    return n*fat(n - 1);
}

float expo(float base, int exp) {

  float temp;
    if( exp == 0)
       return 1;
    temp = expo(base, exp/2);       
    if (exp % 2 == 0)
        return temp*temp;
    else
    {
        if(exp > 0)
            return base*temp*temp;
        else
            return (temp*temp)/base;
    }
}

float magico(float x, int n) {

    if (n == 0) {
        return (expo(-1.0, n)*expo(x , 2*n + 1))/fat(n + 1);
    }

    return (expo(-1.0, n)*expo(x , 2*n + 1))/fat(n + 1) + magico(x , n-1);

    return 0;
}