#include <stdio.h>

/* ---------- EX 1: Somatorio de multiplos de k a partir de x ---------- */
int proximo_multiplo(int k, int x) {
    if (x % k == 0)
        return x;
    return x + (k - x % k);
}

int soma_especial(int n, int k, int x) {
    int primeiro = proximo_multiplo(k, x);
    if (n == 1)
        return primeiro;
    return primeiro + soma_especial(n - 1, k, primeiro + k);
}

/* ---------- EX 2: Soma 1 + 2 + ... + n -------------------------------- */
int soma_n(int n) {
    if (n == 1)
        return 1;
    return n + soma_n(n - 1);
}

/* ---------- EX 3: Serie harmonica ------------------------------------- */
double serie_harmonica(int n) {
    if (n == 1)
        return 1.0;
    return (1.0 / n) + serie_harmonica(n - 1);
}

/* ---------- EX 4: Constante e ----------------------------------------- */
double fatorial(int n) {
    if (n == 0)
        return 1.0;
    return n * fatorial(n - 1);
}

double constante_e(int n) {
    if (n == 0)
        return 1.0;
    return (1.0 / fatorial(n)) + constante_e(n - 1);
}

/* ---------- EX 5: Fibonacci modificada -------------------------------- */
int fibo_m(int n) {
    if (n == 1 || n == 2)
        return 2;
    return fibo_m(n - 1) + fibo_m(n - 2);
}

/* ===================================================================== */

void exercicio1() {
    int n, k, x;
    printf("\n--- Exercicio 1: Somatorio de multiplos de k a partir de x ---\n");
    printf("Informe n (quantidade de termos): ");
    scanf("%d", &n);
    printf("Informe k (multiplo base): ");
    scanf("%d", &k);
    printf("Informe x (valor inicial): ");
    scanf("%d", &x);
    printf("Resultado: %d\n", soma_especial(n, k, x));
}

void exercicio2() {
    int n;
    printf("\n--- Exercicio 2: Soma de 1 ate n ---\n");
    printf("Informe n: ");
    scanf("%d", &n);
    if (n < 1) { printf("n deve ser >= 1.\n"); return; }
    printf("S = %d\n", soma_n(n));
}

void exercicio3() {
    int n;
    printf("\n--- Exercicio 3: Serie Harmonica ---\n");
    printf("Informe n: ");
    scanf("%d", &n);
    if (n < 1) { printf("n deve ser >= 1.\n"); return; }
    printf("S = %.6lf\n", serie_harmonica(n));
}

void exercicio4() {
    int n;
    printf("\n--- Exercicio 4: Aproximacao da constante e ---\n");
    printf("Informe n: ");
    scanf("%d", &n);
    if (n < 0) { printf("n deve ser >= 0.\n"); return; }
    printf("e ≈ %.10lf\n", constante_e(n));
}

void exercicio5() {
    int n;
    printf("\n--- Exercicio 5: Fibonacci Modificada ---\n");
    printf("Informe a quantidade de termos: ");
    scanf("%d", &n);
    if (n < 1) { printf("n deve ser >= 1.\n"); return; }
    printf("Sequencia: ");
    for (int i = 1; i <= n; i++) {
        printf("%d", fibo_m(i));
        if (i < n) printf(", ");
    }
    printf("\n");
}

int main() {
    int opcao;

    do {
        printf("\n╔══════════════════════════════════════════╗\n");
        printf("║   FUNCOES RECURSIVAS - Lista 18 - UDESC  ║\n");
        printf("╠══════════════════════════════════════════╣\n");
        printf("║  1. Somatorio de multiplos de k           ║\n");
        printf("║  2. Soma de 1 ate n                       ║\n");
        printf("║  3. Serie harmonica                       ║\n");
        printf("║  4. Aproximacao da constante e            ║\n");
        printf("║  5. Fibonacci modificada                  ║\n");
        printf("║  0. Sair                                  ║\n");
        printf("╚══════════════════════════════════════════╝\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: exercicio1(); break;
            case 2: exercicio2(); break;
            case 3: exercicio3(); break;
            case 4: exercicio4(); break;
            case 5: exercicio5(); break;
            case 0: printf("\nAte logo!\n"); break;
            default: printf("\nOpcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}