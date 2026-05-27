#include <stdio.h>
#include <math.h>

/* ===== PROTÓTIPOS ===== */
int eh_primo(int x);
int fibo(int n);
int soma_ate_n(int n);
int soma_especial(int n, int k, int x);
float soma_harmonica(int n);

/* ===== FUNÇÕES ===== */

/* Exercício 1 – verifica se x é primo */
int eh_primo(int x) {
    if (x < 2) return 0;
    for (int i = 2; i <= (int)sqrt((double)x); i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

/* Exercício 2 – retorna o n-ésimo termo de Fibonacci (iterativo) */
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

/* Exercício 3 – soma 1 + 2 + ... + n */
int soma_ate_n(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) soma += i;
    return soma;
}

/* Exercício 4 – soma n múltiplos de k a partir de x */
int soma_especial(int n, int k, int x) {
    /* encontra o primeiro múltiplo de k >= x */
    int inicio = x;
    if (inicio % k != 0) inicio += k - (inicio % k);

    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += inicio;
        inicio += k;
    }
    return soma;
}

/* Exercício 5 – soma harmônica S = 1 + 1/2 + ... + 1/n */
float soma_harmonica(int n) {
    float soma = 0.0f;
    for (int i = 1; i <= n; i++) soma += 1.0f / i;
    return soma;
}

/* ===== MENU AUXILIAR ===== */
void linha() {
    printf("--------------------------------------------------\n");
}

/* ===== MAIN ===== */
int main(void) {
    int opcao;

    do {
        printf("\n");
        linha();
        printf("  EXERCICIOS DE FIXACAO No 17 – Funcoes em C\n");
        linha();
        printf("  1. N primeiros primos acima de k\n");
        printf("  2. N primeiros termos de Fibonacci\n");
        printf("  3. Soma 1 + 2 + ... + n\n");
        printf("  4. Somatorio especial de multiplos\n");
        printf("  5. Soma harmonica\n");
        printf("  0. Sair\n");
        linha();
        printf("  Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            /* ---- Exercício 1 ---- */
            case 1: {
                int k, n;
                printf("\nDigite k (base): ");
                scanf("%d", &k);
                printf("Digite n (quantidade de primos): ");
                scanf("%d", &n);

                printf("\nOs %d primeiros primos acima de %d:\n", n, k);
                int encontrados = 0, num = k + 1;
                while (encontrados < n) {
                    if (eh_primo(num)) {
                        printf("%d ", num);
                        encontrados++;
                    }
                    num++;
                }
                printf("\n");
                break;
            }

            /* ---- Exercício 2 ---- */
            case 2: {
                int n;
                printf("\nDigite n: ");
                scanf("%d", &n);

                printf("\nOs %d primeiros termos de Fibonacci:\n", n);
                for (int i = 1; i <= n; i++) {
                    printf("%d", fibo(i));
                    if (i < n) printf(", ");
                }
                printf("\n");
                break;
            }

            /* ---- Exercício 3 ---- */
            case 3: {
                int n;
                printf("\nDigite n: ");
                scanf("%d", &n);

                int resultado = soma_ate_n(n);
                printf("\nSoma de 1 ate %d = %d\n", n, resultado);
                break;
            }

            /* ---- Exercício 4 ---- */
            case 4: {
                int n, k, x;
                printf("\nDigite n (quantidade de termos): ");
                scanf("%d", &n);
                printf("Digite k (multiplo): ");
                scanf("%d", &k);
                printf("Digite x (valor inicial): ");
                scanf("%d", &x);

                int resultado = soma_especial(n, k, x);
                printf("\nSomatorio especial = %d\n", resultado);
                break;
            }

            /* ---- Exercício 5 ---- */
            case 5: {
                int n;
                printf("\nDigite n: ");
                scanf("%d", &n);

                float resultado = soma_harmonica(n);
                printf("\nSoma harmonica S = %.4f\n", resultado);
                break;
            }

            case 0:
                printf("\nEncerrando o programa. Ate mais!\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}