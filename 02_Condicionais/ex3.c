#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("O número %d é par!", n);
    }
    else
    {
        printf("O número %d é impar!", n);
    }

    return 0;
}