
Claude finished the response
AGT_2026_1_Exercicios_18_Funcoes_Recursivas.pdf
faça para mim cada exercício como um arquivo individual e um como um menu de opções

10:28 AM

Check skills available
Check skills available
Vou criar os 5 exercícios individualmente em C + um arquivo com menu de opções!


Created 6 files
Created 6 files
Vou compilar e testar tudo para garantir que funciona:


Ran 2 commands
Ran 2 commands
Tudo compilando e funcionando corretamente! Todos os resultados batem com o esperado.


Presented 6 files
Presented 6 files
Todos os 6 arquivos prontos e testados! Aqui está o resumo do que foi feito:

Arquivos individuais:

ex01_soma_especial.c — Somatório dos n múltiplos de k a partir de x (testado: n=3, k=4, x=18 → 72 ✓)
ex02_soma_n.c — Soma 1+2+...+n (testado: n=5 → 15 ✓)
ex03_serie_harmonica.c — Série harmônica 1 + 1/2 + ... + 1/n (testado: n=4 → 2.083333 ✓)
ex04_constante_e.c — Aproximação de e via 1/0! + 1/1! + ... + 1/n! (testado: n=10 → 2.7182818011 ✓)
ex05_fibonacci_modificada.c — Fibonacci modificada com base 2,2 (testado: n=5 → 2, 2, 4, 6, 10 ✓)
Arquivo com menu:

menu_exercicios.c — Todos os 5 exercícios integrados num menu interativo com do-while + switch
Pontos importantes das implementações:

Ex1: a função auxiliar proximo_multiplo garante que o ponto de partida já seja múltiplo de k, conforme o exemplo da questão (x=18 → começa em 20)
Ex4: usa duas funções recursivas encadeadas (fatorial + constante_e)
Ex5: casos base n==1 e n==2 retornam 2, reproduzindo a sequência modificada

Menu exercicios
C

Ex01 soma especial
C

Ex02 soma n
C

Ex03 serie harmonica
C

Ex04 constante e
C

Ex05 fibonacci modificada
C

Want to be notified when Claude responds?




Claude is AI and can make mistakes. Please double-check responses.
Ex01 soma especial · C
#include <stdio.h>

/* Retorna o proximo multiplo de k >= x */
int proximo_multiplo(int k, int x) {
    if (x % k == 0)
        return x;
    return x + (k - x % k);
}

/* Calcula o somatorio dos n termos multiplos de k a partir de x */
int soma_especial(int n, int k, int x) {
    int primeiro = proximo_multiplo(k, x);
    if (n == 1)
        return primeiro;
    return primeiro + soma_especial(n - 1, k, primeiro + k);
}

int main() {
    int n, k, x;

    printf("=== Somatorio de multiplos de k a partir de x ===\n\n");
    printf("Informe n (quantidade de termos): ");
    scanf("%d", &n);
    printf("Informe k (multiplo base): ");
    scanf("%d", &k);
    printf("Informe x (valor inicial): ");
    scanf("%d", &x);

    int resultado = soma_especial(n, k, x);
    printf("\nResultado: %d\n", resultado);

    return 0;
}

