#include <stdio.h>

int main() {
    float A[3][4], B[4][5], P[3][5];
    int i, j, k;

    printf("=== Exercicio 5: Multiplicacao de Matrizes ===\n\n");

    printf("Digite os valores da matriz A (3x4):\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }

    printf("\nDigite os valores da matriz B (4x5):\n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 5; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%f", &B[i][j]);
        }

    /* Calcula o produto P = A x B */
    for (i = 0; i < 3; i++)
        for (j = 0; j < 5; j++) {
            P[i][j] = 0;
            for (k = 0; k < 4; k++)
                P[i][j] += A[i][k] * B[k][j];
        }

    printf("\nMATRIZ A (3x4):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++)
            printf("%6.1f ", A[i][j]);
        printf("\n");
    }

    printf("\nMATRIZ B (4x5):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++)
            printf("%6.1f ", B[i][j]);
        printf("\n");
    }

    printf("\nMATRIZ PRODUTO P = A x B (3x5):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++)
            printf("%8.1f ", P[i][j]);
        printf("\n");
    }

    return 0;
}