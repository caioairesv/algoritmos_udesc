#include <stdio.h>
int main () {

    double numerador = 4.0,soma = 0.0, somaB= 3.0;
    int n, sinal = 1, pi = 3;

    printf("Digite a quantidade de termos para as séries: ");
    scanf("%d",&n);

    // Série de Gregory-Leibniz
    for (int i = 1, j = 0; j < n; i+=2, j++) {
        soma += sinal * numerador/i;
        sinal *= -1;
    }
    sinal = 1;
    // Série de Nilakantha
    for (int i = 0, j =2, k = 3, l = 4; i < n; i++, j +=1, k += 1, l += 1) {
        somaB += sinal * (numerador/(j*k*l));
         sinal *= -1;
    }

    printf("Série de Gregory-Leibniz: %lf \n",soma);
    printf("Série de Nilakantha: %lf \n",somaB);
    return 0;
}