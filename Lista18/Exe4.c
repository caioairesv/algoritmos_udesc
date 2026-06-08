#include <stdio.h>

/* Calcula recursivamente n! */
double fatorial(int n) {
    if (n == 0)
        return 1.0;
    return n * fatorial(n - 1);
}

/* Calcula recursivamente 1/0! + 1/1! + ... + 1/n! */
double constante_e(int n) {
    if (n == 0)
        return 1.0; /* 1/0! = 1 */
    return (1.0 / fatorial(n)) + constante_e(n - 1);
}

int main() {
    int n;

    printf("=== Aproximacao da constante e = 1/0! + 1/1! + ... + 1/n! ===\n\n");
    printf("Informe n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("n deve ser maior ou igual a 0.\n");
        return 1;
    }

    printf("\ne ≈ %.10lf\n", constante_e(n));

    return 0;
}