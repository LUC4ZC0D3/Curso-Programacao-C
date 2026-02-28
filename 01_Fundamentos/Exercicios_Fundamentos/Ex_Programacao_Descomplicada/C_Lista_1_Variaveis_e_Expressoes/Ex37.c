/* 37. Fac¸a um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de 12% */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_NUMERIC, "");

    float valor_produto, desconto = 12, valor_descontado, total;

    printf("\nDigite o valor do produto (Ex. 9,99): ");
    scanf("%f", &valor_produto);

    valor_descontado = valor_produto * (desconto / 100);
    total = valor_produto - valor_descontado;

    printf("\n\nDesconto aplicado: %.0f%%", desconto);
    printf("\nValor descontado: R$%.2f", valor_descontado);
    printf("\nTotal a pagar: R$%.2f\n\n", total);

    return 0;
}