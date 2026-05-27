#include <stdio.h>

/* Função que retorna o n-ésimo termo de Fibonacci */
int fibo(int n) {

    if (n <= 0) return 0;

    if (n == 1 || n == 2) return 1;

    int a = 1, b = 1, c;

    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {

    int n;

    printf("Digite n: ");
    scanf("%d", &n);

    printf("\nOs %d primeiros termos de Fibonacci:\n", n);

    for (int i = 1; i <= n; i++) {

        printf("%d", fibo(i));

        if (i < n) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}