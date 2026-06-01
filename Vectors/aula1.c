#include <stdio.h>

int  main () {
    int vec[10], soma=0, maior = 0;
    float media;


  for (int i = 0; i < 10; i++) {
      scanf("%d", &vec[i]);

      if (i == 0) {
          maior = vec[i];
      }else if (vec[i] > maior) {
          maior = vec[i];
      }

      soma += vec[i];
  }

    media = soma / 10;

    printf("A soma dos valores eh:%d\n", soma);
    printf("O maior valor eh:%d\n", maior);
    printf("A média dos valores eh:%f\n", media);
    printf("Segue os valores:");
    for (int i = 0; i < 10; i++) {
        printf("\n%d", vec[i]);
    }

    return 0;
}
