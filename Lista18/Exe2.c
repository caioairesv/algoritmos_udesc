
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
Ex02 soma n · C
#include <stdio.h>

/* Calcula recursivamente 1 + 2 + 3 + ... + n */
int soma_n(int n) {
    if (n == 1)
        return 1;
    return n + soma_n(n - 1);
}

int main() {
    int n;

    printf("=== Soma dos inteiros de 1 ate n ===\n\n");
    printf("Informe n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n deve ser maior ou igual a 1.\n");
        return 1;
    }

    printf("\nS = %d\n", soma_n(n));

    return 0;
}

