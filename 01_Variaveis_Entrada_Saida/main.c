#include <stdio.h>
/*
EXERCÍCIO 1 — Variáveis, entrada e saída
Declare duas variáveis inteiras.
Peça para o usuário digitar dois números.
Mostre:
- a soma
- a subtração
- a multiplicação
- a divisão (use float para o resultado)
*/
int main() {
    int num1;
    int num2;

    printf("Entre com um numero:");
    scanf("%d", &num1);
    printf("\nEntre com outro numero:");
    scanf("%d", &num2);

    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int mult = num1 * num2;

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", mult);

    if (num2 != 0) {
        float div = (float)num1 / num2;
        printf("Divisao: %.2f\n", div);
    } else {
        printf("Divisao por 0 impossivel\n");
    }

    return 0;

}

