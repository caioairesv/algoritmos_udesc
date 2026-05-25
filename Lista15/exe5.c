#include <stdio.h>
int main () {
    int n, sinal = -1;
    double x, fat = 1.0, pot, seno;

    printf("Digite um valor para (X): ");
    scanf("%lf", &x);
    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    seno = x;
    pot = x;

    for(int i = 3; i <= 2*n-1; i+=2){
            fat *= (i-1) * i;
            pot *= x * x;

            seno += sinal *(pot/fat);
            sinal *= -1;
    }

    printf("O valor da seno e: %lf\n", seno);
    return 0;



}