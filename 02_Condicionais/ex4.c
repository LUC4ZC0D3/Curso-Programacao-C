#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int n;

    printf("Digite um número inteiro: \n");
    scanf("%d", &n);

    if (n > 0 && n < 10)
    {
        printf("O número %d está entre 0 e 10", n);
    }
    else
    {
        printf("O número %d nao está entre 0 e 10", n);
    }

    return 0;
}
