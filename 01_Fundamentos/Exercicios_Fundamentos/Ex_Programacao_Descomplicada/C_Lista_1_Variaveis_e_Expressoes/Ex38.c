/* 38. Leia o salario de um funcion ´ ario. Calcule e imprima o valor do novo sal ´ ario, sabendo que ´
ele recebeu um aumento de 25%. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_NUMERIC, "");

    float salario_atual, salario_novo, aumento = 25;

    printf("\n\nDigite o seu salário (Ex. 9999,99): ");
    scanf("%f", &salario_atual);

    salario_novo = salario_atual + (salario_atual * (aumento / 100));

    printf("\nAumento de %.1f%%", aumento);
    printf("\nValor do aumento: R$%.2f", salario_atual * (aumento / 100));
    printf("\nNovo salário: R$%.2f\n\n", salario_novo);

    return 0;
}