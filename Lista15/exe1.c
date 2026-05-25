//
// Created by csk on 5/13/26.
//
#include <stdio.h>

int main () {
    int k, numerador = 1;
    double soma = 0;

    printf ("Digite a quantidade de termos para a séria harmônica: ");
    scanf ("%d", &k);

    for (int i = 1; i <=    k;i++) {
        soma += (double)numerador/i;
        numerador *= -1;
    }
    printf("Resultado do somátorio %1f\n",soma);
    return 0;
}
