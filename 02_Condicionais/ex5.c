#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int x, y, soma;

    printf("Digite dois numeros inteiros: ");
    scanf(" %d %d", &x, &y);

    soma = x + y;

    if ((soma > 0 && soma < 10) || (soma % 2 == 0))
    {
        printf("Soma está entre 0 e 10 ou é par");
    }
    else
    {
        printf("Soma nao esta entre 0 e 10 ou nao é par");
    }
    return 0;
}