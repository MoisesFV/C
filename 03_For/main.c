/*
EXERCÍCIO 3 — FOR
Utilizando o laço FOR:
Inicie uma variável em 1.
Mostre na tela todos os números de 1 até 20.
Mostre apenas os números pares.
*/
#include <stdio.h>

int main() {
    for(int i = 1; i<=20; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}
