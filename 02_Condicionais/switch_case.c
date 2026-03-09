#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int opcao;

    printf("Selecione sua bebida:\n");
    printf("1 - Café\n");
    printf("2 - Chá\n");
    printf("3 - Água\n");
    printf("4 - Refrigerante\n");
    printf("0 - Sair\n");

    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Café escolhido");
        break;
    case 2:
        printf("Chá escolhido");
        break;
    case 3:
        printf("Água escolhido");
        break;
    case 4:
        printf("Refrigerante escolhido");
        break;
    case 0:
        printf("Voce saiu!");
        break;

    default:
        break;
    }

    return 0;
}