#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int n1, n2, soma;

    printf("Digite 2 números inteiros: ");
    scanf("%d %d", &n1, &n2);

    soma = n1 + n2;

    if (soma >= 10)
    {
        printf("A soma de %d e %d é: Maior ou igual a 10!", n1, n2);
    }
    else
    {
        printf("A soma de %d e %d é: Menor que 10!", n1, n2);
    }

    printf("\nProva real: %d + %d = %d", n1, n2, soma);

    return 0;
}