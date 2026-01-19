/*
EXERCÍCIO 4 — WHILE
Declare duas variáveis:
- uma para controle do while (valor == 1)
- outra como contador

Enquanto o controle for igual a 1:
- mostre o valor do contador
- incremente o contador

Quando o contador atingir 100:
- o loop deve ser encerrado
*/
#include <stdio.h>

int main()
{
    int contador = 1;
    int controle = 1;

    while(controle == 1){
        if(contador == 100){
            controle = 0;
        }
        printf("Valor do contador:%d\n", contador);
        contador++;
    }

    return 0;
}
