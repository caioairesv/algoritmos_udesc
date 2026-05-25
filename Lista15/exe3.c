#include <stdio.h>
int main () {
    int n;
    double e = 0.0, fat =1.0;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            fat = 1.0;
        }else {
            fat *= i;
        }

        e += 1.0/fat;
    }
    printf("O valor da constante (e) é: %lf\n", e);
    return 0;
}