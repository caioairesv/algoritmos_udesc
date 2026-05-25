#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portugues");

    double numerador = 4.0, soma = 0.0, somaB = 3.0;
    int n, sinal = 1;

    printf("Digite a quantidade de termos para as séries: ");
    scanf("%d", &n);

    // Série de Gregory-Leibniz
    for (int i = 1, j = 0; j < n; i += 2, j++) {
        soma += sinal * (numerador / i);
        sinal *= -1;
    }

    sinal = 1;

    // Série de Nilakantha
    for (int i = 2, j = 0; j < n; i += 2, j++) {
        somaB += sinal * (numerador / (i * (i + 1) * (i + 2)));
        sinal *= -1;
    }

    printf("Série de Gregory-Leibniz: %.15lf\n", soma);
    printf("Série de Nilakantha: %.15lf\n", somaB);

    return 0;
}