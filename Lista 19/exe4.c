#include <stdio.h>

int main() {
    float M[5][4], somaLinhas[5], somaColunas[4];
    int i, j;

    printf("=== Exercicio 4: Matriz 5x4 com Somas ===\n\n");

    printf("Digite os valores da matriz 5x4:\n");
    for (i = 0; i < 5; i++)
        for (j = 0; j < 4; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%f", &M[i][j]);
        }

    for (i = 0; i < 5; i++) {
        somaLinhas[i] = 0;
        for (j = 0; j < 4; j++)
            somaLinhas[i] += M[i][j];
    }

    for (j = 0; j < 4; j++) {
        somaColunas[j] = 0;
        for (i = 0; i < 5; i++)
            somaColunas[j] += M[i][j];
    }

    printf("\nMATRIZ:\n");
    printf("         Col0    Col1    Col2    Col3  | SomaLinha\n");
    for (i = 0; i < 5; i++) {
        printf("Linha%d: ", i);
        for (j = 0; j < 4; j++)
            printf("%6.1f  ", M[i][j]);
        printf("| %.1f\n", somaLinhas[i]);
    }

    printf("\nSOMA DAS COLUNAS: ");
    for (j = 0; j < 4; j++)
        printf("%6.1f  ", somaColunas[j]);

    printf("\n\nSOMA DAS LINHAS:\n");
    for (i = 0; i < 5; i++)
        printf("Linha %d: %.1f\n", i, somaLinhas[i]);

    return 0;
}