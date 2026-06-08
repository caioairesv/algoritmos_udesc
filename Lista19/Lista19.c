#include <stdio.h>

/* ===================== EXERCICIO 1 ===================== */
void exercicio1() {
    float A[10], B[10];
    int i;

    printf("\n=== Exercicio 1: Vetores A e B ===\n\n");

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
}

/* ===================== EXERCICIO 2 ===================== */
void exercicio2() {
    int V[10], auxiliar, i;

    printf("\n=== Exercicio 2: Inversao de Vetor ===\n\n");

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
}

/* ===================== EXERCICIO 3 ===================== */
void exercicio3() {
    int dias[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *meses[] = {"", "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
                     "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    int n, mes, dia, soma, i;

    printf("\n=== Exercicio 3: Dias do Ano para Data ===\n\n");

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
}

/* ===================== EXERCICIO 4 ===================== */
void exercicio4() {
    float M[5][4], somaLinhas[5], somaColunas[4];
    int i, j;

    printf("\n=== Exercicio 4: Matriz 5x4 com Somas ===\n\n");

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
}

/* ===================== EXERCICIO 5 ===================== */
void exercicio5() {
    float A[3][4], B[4][5], P[3][5];
    int i, j, k;

    printf("\n=== Exercicio 5: Multiplicacao de Matrizes ===\n\n");

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
}

/* ===================== MAIN / MENU ===================== */
int main() {
    int opcao;

    do {
        printf("\n========================================\n");
        printf("   EXERCICIOS 19 - Vetores e Matrizes   \n");
        printf("========================================\n");
        printf("  1. Vetor A -> Vetor B (par/impar)     \n");
        printf("  2. Inversao de vetor                  \n");
        printf("  3. Dias do ano para data              \n");
        printf("  4. Matriz 5x4 com somas               \n");
        printf("  5. Multiplicacao de matrizes          \n");
        printf("  0. Sair                               \n");
        printf("========================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: exercicio1(); break;
            case 2: exercicio2(); break;
            case 3: exercicio3(); break;
            case 4: exercicio4(); break;
            case 5: exercicio5(); break;
            case 0: printf("\nEncerrando... Ate mais!\n"); break;
            default: printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}