/*
EXERCÍCIO 5 — DO WHILE + SWITCH CASE
Crie um menu utilizando DO WHILE.
O menu deve ter as opções:
1 - Linguagem C
2 - Inglês
3 - Linux
4 - Sair

Utilize SWITCH CASE para tratar as opções.
O programa deve continuar exibindo o menu
até o usuário escolher a opção "Sair".
*/
#include <stdio.h>

int main(){
    int numMenu;
    do {
        printf("Escolha uma opcao do Menu:\n");
        printf("1 - Linguagem C\n");
        printf("2 - Ingles\n");
        printf("3 - Linux\n");
        printf("4 - Sair\n");
        scanf("%d", &numMenu);
        switch(numMenu) {
            case 1:
                printf("Linguagem C\n");
                break;
            case 2:
                printf("Ingles\n");
                break;
            case 3:
                printf("Linux\n");
                break;
            case 4:
                printf("Saindo...");
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }

    } while(numMenu != 4);
    return 0;
}
