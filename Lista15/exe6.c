#include<stdio.h>


int main () {
    int n, sinal = -1;
    double x, fat = 1.0, pot, cosseno;

    printf("Digite um valor para (X): ");
    scanf("%lf", &x);
    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    cosseno = 1.0;
    pot = 1.0;

    for(int i = 2; i <= 2*n; i+=2){
        fat *= (i-1) * i;
        pot *= x * x;

        cosseno += sinal *(pot/fat);
        sinal *= -1;
    }

    printf("O valor da cosseno e: %lf\n", cosseno);
    return 0;



}