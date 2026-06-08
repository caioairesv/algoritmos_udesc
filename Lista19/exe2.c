#include <stdio.h>

int main() {
    int V[10], auxiliar, i;

    printf("=== Exercicio 2: Inversao de Vetor ===\n\n");

    printf("Digite os 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("V[%d]: ", i);
        scanf("%d", &V[i]);
    }

    printf("\nVETOR ORIGINAL: ");
    for (i = 0; i < 10; i++)
        printf("%4d ", V[i]);

    for (i = 0; i < 5; i++) {
        auxiliar = V[i];
        V[i] = V[9 - i];
        V[9 - i] = auxiliar;
    }

    printf("\nVETOR ALTERADO: ");
    for (i = 0; i < 10; i++)
        printf("%4d ", V[i]);

    printf("\n");
    return 0;
}