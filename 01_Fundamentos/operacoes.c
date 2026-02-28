#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    // Iniciar variaveis
    int a, b;

    // Permite acentos
    SetConsoleOutputCP(CP_UTF8);

    // Solicita ao usuario valores para A e B
    printf("\n\nDigite o valor de A: ");
    scanf("%d", &a);

    printf("\n");

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("\n\nOs valores de A e B são: %d e %d", a, b);

    // Operações
    printf("\n\nA soma de %d e %d é: %d", a, b, a + b);

    printf("\n\nA subtração de %d e %d é: %d", a, b, a - b);

    printf("\n\nA multiplicação de %d e %d é: %d", a, b, a * b);

    printf("\n\nA divisão de %d e %d é: %d\n\n", a, b, a / b);
}
