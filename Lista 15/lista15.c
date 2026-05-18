#include <stdio.h>

/* =========================================================
   EXERCÍCIO 1 - Série Harmônica Alternada
========================================================= */
void exercicio1() {

    int k, numerador = 1;
    double soma = 0;

    printf("\nDigite a quantidade de termos: ");
    scanf("%d", &k);

    for (int i = 1; i <= k; i++) {
        soma += (double)numerador / i;
        numerador *= -1;
    }

    printf("Resultado do somatorio: %lf\n", soma);
}

/* =========================================================
   EXERCÍCIO 2 - Series de Gregory-Leibniz e Nilakantha
========================================================= */
void exercicio2() {

    double numerador = 4.0, somaA = 0.0, somaB = 3.0;
    int n, sinal = 1;

    printf("\nDigite a quantidade de termos: ");
    scanf("%d", &n);

    // Gregory-Leibniz
    for (int i = 1, j = 0; j < n; i += 2, j++) {
        somaA += sinal * numerador / i;
        sinal *= -1;
    }

    sinal = 1;

    // Nilakantha
    for (int i = 0, j = 2, k = 3, l = 4; i < n; i++, j++, k++, l++) {
        somaB += sinal * (numerador / (j * k * l));
        sinal *= -1;
    }

    printf("Serie de Gregory-Leibniz: %lf\n", somaA);
    printf("Serie de Nilakantha: %lf\n", somaB);
}

/* =========================================================
   EXERCÍCIO 3 - Constante de Euler (e)
========================================================= */
void exercicio3() {

    int n;
    double e = 0.0, fat = 1.0;

    printf("\nDigite a quantidade de termos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        if (i > 0) {
            fat *= i;
        }

        e += 1.0 / fat;
    }

    printf("Valor aproximado de e: %lf\n", e);
}

/* =========================================================
   EXERCÍCIO 4 - Exponencial e^x
========================================================= */
void exercicio4() {

    int n;
    double e = 0.0, fat = 1.0, pot = 1.0, x;

    printf("\nDigite um valor para X: ");
    scanf("%lf", &x);

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        if (i > 0) {
            fat *= i;
            pot *= x;
        }

        e += pot / fat;
    }

    printf("e^%.2lf = %lf\n", x, e);
}

/* =========================================================
   EXERCÍCIO 5 - Seno
========================================================= */
void exercicio5() {

    int n, sinal = -1;
    double x, fat = 1.0, pot, seno;

    printf("\nDigite um valor para X: ");
    scanf("%lf", &x);

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    seno = x;
    pot = x;

    for (int i = 3; i <= 2 * n - 1; i += 2) {

        fat *= (i - 1) * i;
        pot *= x * x;

        seno += sinal * (pot / fat);

        sinal *= -1;
    }

    printf("Valor aproximado do seno: %lf\n", seno);
}

/* =========================================================
   EXERCÍCIO 6 - Cosseno
========================================================= */
void exercicio6() {

    int n, sinal = -1;
    double x, fat = 1.0, pot, cosseno;

    printf("\nDigite um valor para X: ");
    scanf("%lf", &x);

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    cosseno = 1.0;
    pot = 1.0;

    for (int i = 2; i <= 2 * n; i += 2) {

        fat *= (i - 1) * i;
        pot *= x * x;

        cosseno += sinal * (pot / fat);

        sinal *= -1;
    }

    printf("Valor aproximado do cosseno: %lf\n", cosseno);
}

/* =========================================================
   MENU PRINCIPAL
========================================================= */
int main() {

    int opcao;

    do {

        printf("\n=========== LISTA DE EXERCICIOS ===========\n");
        printf("1 - Serie Harmonica Alternada\n");
        printf("2 - Gregory-Leibniz e Nilakantha\n");
        printf("3 - Constante e\n");
        printf("4 - Exponencial e^x\n");
        printf("5 - Seno\n");
        printf("6 - Cosseno\n");
        printf("0 - Sair\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                exercicio1();
                break;

            case 2:
                exercicio2();
                break;

            case 3:
                exercicio3();
                break;

            case 4:
                exercicio4();
                break;

            case 5:
                exercicio5();
                break;

            case 6:
                exercicio6();
                break;

            case 0:
                printf("Encerrando programa...\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    return 0;
}