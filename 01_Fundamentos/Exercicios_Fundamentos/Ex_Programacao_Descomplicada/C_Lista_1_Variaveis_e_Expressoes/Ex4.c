// 4. Leia um numero real e imprima o resultado do quadrado desse n ´ umero.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float n, n_square;

    printf("Digite uma número real: ");
    scanf("%f", &n);

    n_square = pow(n, 2);

    printf("O quadrado do numero %f é: %f", n, n_square);
}