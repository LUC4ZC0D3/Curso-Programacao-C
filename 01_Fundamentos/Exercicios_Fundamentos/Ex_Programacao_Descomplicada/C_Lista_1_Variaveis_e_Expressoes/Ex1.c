// 1. Fac¸a um programa que leia um numero inteiro e o imprima.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    printf("O número digitado foi: %d", n);
}