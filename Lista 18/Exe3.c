#include <stdio.h>

/* Calcula recursivamente a serie harmonica: 1 + 1/2 + 1/3 + ... + 1/n */
double serie_harmonica(int n) {
    if (n == 1)
        return 1.0;
    return (1.0 / n) + serie_harmonica(n - 1);
}

int main() {
    int n;

    printf("=== Serie Harmonica: S = 1 + 1/2 + 1/3 + ... + 1/n ===\n\n");
    printf("Informe n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n deve ser maior ou igual a 1.\n");
        return 1;
    }

    printf("\nS = %.6lf\n", serie_harmonica(n));

    return 0;
}