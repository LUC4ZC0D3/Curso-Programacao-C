// 3. Pec¸a ao usuario para digitar tr ´ es valores inteiros e imprima a soma deles.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int n1, n2, n3, soma;

    printf("Digite 3 valores:");
    scanf("%d %d %d", &n1, &n2, &n3);

    soma = n1 + n2 + n3;

    printf("A soma de %d + %d + %d é: %d", n1, n2, n3, soma);
}