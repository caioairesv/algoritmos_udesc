#include <stdio.h>

int main() {
    int x;
    float y;
    char z;
    char k[10];
    printf("Digite um numero: ");
    scanf("%i", &x);

    if (x == 0 ) {
        printf("O numero é zero -x = %i",x);
    }else {
        printf("Não é zero-x = %i",x);
    }
    return 0;
}