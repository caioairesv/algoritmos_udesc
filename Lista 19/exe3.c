#include <stdio.h>

int main() {
    int dias[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *meses[] = {"", "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
                     "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    int n, mes, dia, soma, i;

    printf("=== Exercicio 3: Dias do Ano para Data ===\n\n");

    do {
        printf("Digite o numero de dias desde o inicio de 2026 (1 a 365): ");
        scanf("%d", &n);
        if (n <= 0 || n > 365)
            printf("Numero invalido! Tente novamente.\n");
    } while (n <= 0 || n > 365);

    soma = 0;
    mes = 0;
    for (i = 1; i <= 12; i++) {
        if (n <= soma + dias[i]) {
            mes = i;
            dia = n - soma;
            break;
        }
        soma += dias[i];
    }

    printf("\n%d dias desde 01/01/2026 corresponde a: dia %d de %s de 2026\n",
           n, dia, meses[mes]);

    return 0;
}