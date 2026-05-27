#include <stdio.h>

int soma_especial(int n, int k, int x) {

    int inicio = x;

    if (inicio % k != 0) {
        inicio += k - (inicio % k);
    }

    int soma = 0;

    for (int i = 0; i < n; i++) {
        soma += inicio;
        inicio += k;
    }

    return soma;
}

int main() {

    int n, k, x;

    printf("Digite n (quantidade de termos): ");
    scanf("%d", &n);

    printf("Digite k (multiplo): ");
    scanf("%d", &k);

    printf("Digite x (valor inicial): ");
    scanf("%d", &x);

    int resultado = soma_especial(n, k, x);

    printf("\nSomatorio especial = %d\n", resultado);

    return 0;
}