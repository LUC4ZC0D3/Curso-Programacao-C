#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade <= 17)
    {
        printf("Menor de idade!");
    }
    else if (idade == 18)
    {
        printf("Precisa se alistar!");
    }
    else
    {
        printf("Já é maior de idade!");
    }

    return 0;
}