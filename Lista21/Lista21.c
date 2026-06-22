#include <stdio.h>
#include <string.h>

/* ===================== Exercicio 1 ===================== */
/* Conta quantas ocorrencias de um caractere existem em uma palavra */
void exercicio1() {
    char palavra[16];
    char caractere;
    int contador = 0;
    int i;

    printf("Digite uma palavra de até 15 letras: ");
    scanf("%15s", palavra);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    for (i = 0; i < (int) strlen(palavra); i++) {
        if (palavra[i] == caractere) {
            contador++;
        }
    }

    printf("A palavra <%s> possui %d ocorrencias da letra <%c>.\n", palavra, contador, caractere);
}

/* ===================== Exercicio 2 ===================== */
/* Verifica se uma string contem apenas digitos (0-9) */
void exercicio2() {
    char str[11];
    int apenasDigitos = 1;
    int i;

    printf("Digite uma string de até 10 caracteres: ");
    scanf("%10s", str);

    for (i = 0; i < (int) strlen(str); i++) {
        if (str[i] < '0' || str[i] > '9') {
            apenasDigitos = 0;
            break;
        }
    }

    if (apenasDigitos) {
        printf("A string digitada CONTEM apenas digitos.\n");
    } else {
        printf("A string digitada NAO contem apenas digitos.\n");
    }
}

/* ===================== Exercicio 3 ===================== */
/* Valida formato DD/MM/AAAA e extrai dia, mes e ano */
int ehDigito(char c) {
    return c >= '0' && c <= '9';
}

int anoBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int diasNoMes(int mes, int ano) {
    int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mes == 2 && anoBissexto(ano)) {
        return 29;
    }
    return dias[mes - 1];
}

void exercicio3() {
    char data[20];
    int formatoCorreto = 1;
    int dia, mes, ano;

    printf("Digite uma data no formato DD/MM/AAAA: ");
    scanf("%19s", data);

    if (strlen(data) != 10) {
        formatoCorreto = 0;
    } else {
        if (data[2] != '/' || data[5] != '/') {
            formatoCorreto = 0;
        }
        if (!ehDigito(data[0]) || !ehDigito(data[1]) ||
            !ehDigito(data[3]) || !ehDigito(data[4]) ||
            !ehDigito(data[6]) || !ehDigito(data[7]) ||
            !ehDigito(data[8]) || !ehDigito(data[9])) {
            formatoCorreto = 0;
        }
    }

    if (!formatoCorreto) {
        printf("A data digitada NAO esta de acordo com o formato esperado.\n");
        return;
    }

    dia = (data[0] - '0') * 10 + (data[1] - '0');
    mes = (data[3] - '0') * 10 + (data[4] - '0');
    ano = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + (data[8] - '0') * 10 + (data[9] - '0');

    if (mes < 1 || mes > 12 || dia < 1 || dia > diasNoMes(mes, ano)) {
        printf("A data digitada esta no formato correto, mas trata-se de uma data invalida.\n");
        return;
    }

    printf("A data digitada esta no formato correto e trata-se do dia %d do mes %d do ano %d.\n", dia, mes, ano);
}

/* ===================== Menu principal ===================== */
int main() {
    int opcao;

    do {
        printf("\n===== MENU - EXERCICIOS DE FIXACAO No 21 (STRINGS) =====\n");
        printf("1 - Contar ocorrencias de um caractere em uma palavra\n");
        printf("2 - Verificar se uma string contem apenas digitos\n");
        printf("3 - Validar e extrair data no formato DD/MM/AAAA\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida!\n");
            return 1;
        }

        switch (opcao) {
            case 1:
                exercicio1();
                break;
            case 2:
                exercicio2();
                break;
            case 3:
                exercicio3();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}