#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int opcao;
    float a, b, soma, subt, div, mult;

    printf("\n------------ Calculadora ------------\n\n");
    printf("\t1 - SOMA\n");
    printf("\t2 - SUBTRACAO\n");
    printf("\t3 - MULTIPLICACAO\n");
    printf("\t4 - DIVISAO\n");
    printf("\nDigite 2 numero: \n");
    scanf(" %f %f", &a, &b);
    printf("\nSelecione a operacao:");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        soma = a + b;

        printf("Soma de %f + %f = %f", a, b, soma);

        break;
    case 2:
        subt = a - b;

        printf("Subtracao de %f - %f = %f", a, b, subt);
        break;
    case 3:
        mult = a * b;

        printf("Multiplicacao de %f * %f = %f", a, b, mult);
        break;
    case 4:
        div = a / b;

        printf("Divisao de %f / %f = %f", a, b, div);
        break;

    default:
        printf("Opcao invalida!");
        break;
    }

    return 0;
}