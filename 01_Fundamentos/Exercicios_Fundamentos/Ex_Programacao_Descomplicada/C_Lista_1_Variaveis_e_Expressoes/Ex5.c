// 5. Leia um numero real e imprima a quinta parte deste n ´ umero.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float n, n_5;

    printf("Digite uma número real: ");
    scanf("%f", &n);

    n_5 = n / 5;

    printf("A quinta parte do número %f é: %f", n, n_5);
}