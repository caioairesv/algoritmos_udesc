#include <stdio.h>

/* Retorna o n-esimo termo da sequencia de Fibonacci modificada.
   Termos base: fibo_m(1) = 2, fibo_m(2) = 2 */
int fibo_m(int n) {
    if (n == 1 || n == 2)
        return 2;
    return fibo_m(n - 1) + fibo_m(n - 2);
}

int main() {
    int n;

    printf("=== Sequencia de Fibonacci Modificada (2, 2, 4, 6, 10, ...) ===\n\n");
    printf("Informe a quantidade de termos: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n deve ser maior ou igual a 1.\n");
        return 1;
    }

    printf("\nSequencia: ");
    for (int i = 1; i <= n; i++) {
        printf("%d", fibo_m(i));
        if (i < n)
            printf(", ");
    }
    printf("\n");

    return 0;
}