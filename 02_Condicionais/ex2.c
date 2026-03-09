#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("O primeiro número é maior que o segundo: %d > %d", n1, n2);
    }
    else if (n1 < n2)
    {
        printf("O segundo número é maior que o primeiro: %d < %d", n1, n2);
    }
    else
    {
        printf("Os números são iguais: %d = %d", n1, n2);
    }

    return 0;
}