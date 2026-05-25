#include <stdio.h>

// funcao auxiliar para o exercício 1.
int maior(int a, int b, int c) {

    if (a >= b && a >= c) {
        return a;
    }

    if (b >= c) {
        return b;
    }

    return c;
}

// funcao auxiliar para o exercício 2.
void maior2(int a, int b, int c) {

    if (a >= b && a >= c) {
        printf("Maior: %d\n", a);
    }

    else if (b >= c) {
        printf("Maior: %d\n", b);
    }

    else {
        printf("Maior: %d\n", c);
    }
}

// Exercício 1
void exe1() {

    int a, b, c;

    printf("Digite as medidas dos lados de um triangulo:\n");

    printf("Primeiro lado:\n");
    scanf("%d", &a);

    printf("Segundo lado:\n");
    scanf("%d", &b);

    printf("Terceiro lado:\n");
    scanf("%d", &c);

    printf("O maior lado eh: %d\n", maior(a,b,c));
}

// Exercício 2
void exe2() {

    int a, b, c;

    printf("Digite as medidas dos lados de um triangulo:\n");

    printf("Primeiro lado:\n");
    scanf("%d", &a);

    printf("Segundo lado:\n");
    scanf("%d", &b);

    printf("Terceiro lado:\n");
    scanf("%d", &c);

    maior2(a,b,c);
}

// funcao auxiliar para o exercício 3.
int somaImpares(int x , int y ) {

    int inicio, fim;
    int soma = 0;

    if (x < y) {
        inicio = x;
        fim = y;
    }

    else {
        inicio = y;
        fim = x;
    }

    for (int i = inicio + 1; i < fim; i++) {

        if (i % 2 != 0) {
            soma += i;
        }
    }

    return soma;
}

// Exercício 3
void exe3() {

    int x, y;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &x);

    printf("Digite o segundo numero:\n");
    scanf("%d", &y);

    printf("A soma dos impares eh: %d\n", somaImpares(x,y));
}

// Menu principal
void menu() {

    int choose;

    do {

        printf("============================================\n");
        printf("MENU DE OPCOES:\n");
        printf("(1) Exercício 1\n");
        printf("(2) Exercício 2\n");
        printf("(3) Exercício 3\n");
        printf("(0) Sair\n");
        printf("============================================\n");

        printf("Digite a opcao desejada:\n");
        scanf("%d", &choose);

        switch(choose) {

            case 1:
                exe1();
                break;

            case 2:
                exe2();
                break;

            case 3:
                exe3();
                break;

            case 0:
                printf("Encerrando programa...\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }

    } while(choose != 0);
}

int main() {

    menu();

    return 0;
}