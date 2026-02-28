// 2. Fac¸a um programa que leia um numero real e o imprima.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float r;

    printf("Digite um número Real: ");
    scanf("%f", &r);

    printf("O número real digitado foi: %f", r);
}