#include <stdio.h>
int main () {
    int n;
    double e = 0.0, fat =1.0,pot = 1.0, x;

    printf("Digite um valor para (X): ");
    scanf("%lf", &x);
    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            fat *= i;
            pot *= x;
        }
        e += pot/fat;
    }
    printf("e^%.2lf = %lf\n", x, e);
    return 0;
}