/*
EXERCÍCIO 2 — Operadores e controle de fluxo
Peça para o usuário digitar um número inteiro.
Use IF / ELSE para:
- informar se o número é positivo, negativo ou zero
- informar se o número é par ou ímpar
*/
#include <stdio.h>


int main()
{
    int num;
    printf("Entre com um numero inteiro:");
    scanf("%d", &num);

    if (num > 0) {
        printf("O numero eh positivo\n");
    }
    else if (num < 0) {
        printf("O numero eh negativo\n");
    }
    else {
        printf("O numero eh 0\n");
    }
    if (num % 2 == 0) {
        printf("Numero par");
    }
    else {
        printf("Numero impar");
    }

    return 0;
}
