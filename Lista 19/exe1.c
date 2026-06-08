#include <stdio.h>

int main() {
    float A[10], B[10];
    int i;

    printf("=== Exercicio 1: Vetores A e B ===\n\n");

    printf("Digite os 10 elementos do vetor A:\n");
    for (i = 0; i < 10; i++) {
        printf("A[%d]: ", i);
        scanf("%f", &A[i]);
    }

    for (i = 0; i < 10; i++) {
        if (i % 2 == 0)
            B[i] = A[i] / 2.0;
        else
            B[i] = A[i] * 3.0;
    }

    printf("\nVETOR A: ");
    for (i = 0; i < 10; i++)
        printf("%6.1f ", A[i]);

    printf("\nVETOR B: ");
    for (i = 0; i < 10; i++)
        printf("%6.1f ", B[i]);

    printf("\n");
    return 0;
}