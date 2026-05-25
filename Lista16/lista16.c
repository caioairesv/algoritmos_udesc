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
// funcão auxiliar para o execício 2.

// Exercício 1 - Maior lado dos triãngulos.
void exe1() {
    int a, b, c;
    printf("Digite as medidas dos lados de um triãngulo: \n");

    printf("Primeiro lado: \n");
    scanf("%d", &a);

    printf("Segundo lado: \n");
    scanf("%d", &b);

    printf("Terceiro lado: \n");
    scanf("%d", &c);

    printf("O maior lado é: %d\n",maior(a,b,c));

}
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
void exe2() {
    int a, b, c;
    printf("Digite as medidas dos lados de um triãngulo: \n");

    printf("Primeiro lado: \n");
    scanf("%d", &a);

    printf("Segundo lado: \n");
    scanf("%d", &b);

    printf("Terceiro lado: \n");
    scanf("%d", &c);

    maior2(a,b,c);
}

void exe3() {
    printf("Digite ");

}
// Menu principal
void menu() {
    int choose;
    do {

        printf("============================================\n");
        printf("MENU DE OPÇÕES:\n");
        printf("(1) Exercício 1,\n");
        printf("(2) Exercício 2.\n");
        printf("(3) Exercício 3.\n");
        printf("============================================\n");

        printf("Digite a opção desejada: \n");
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

                default:
                    printf("Opção inválida.\n");





            }
        }
    while(choose != 0);

}
int main() {
    menu();
}

