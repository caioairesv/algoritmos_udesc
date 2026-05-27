#include <stdio.h>

int pot(int n, int e) {

    if (e == 0) {
        return 1;
    }

    return n * pot(n, e - 1);
}

int main() {

    int n, e;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Digite a potencia que voce deseja: ");
    scanf("%d", &e);

    printf("Resultado: %d\n", pot(n, e));

    return 0;
}