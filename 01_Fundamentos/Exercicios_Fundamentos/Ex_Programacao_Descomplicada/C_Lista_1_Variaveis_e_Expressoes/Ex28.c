/* 28. Fac¸a a leitura de tres valores e apresente como resultado a soma dos quadrados dos ˆ
tres valores lidos. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float x, y, z, result_square;

    printf("Digite 3 números: ");
    scanf("%f %f %f", &x, &y, &z);

    result_square = (x * x) + (y * y) + (z * z);

    printf("A Soma dos quadrados dos números %.1f, %.1f e %.1f é:\n\n\t%.1f^2 + %.1f^2 + %.1f^2 = %.1f", x, y, z, x, y, z, result_square);

    printf("\n\n\t%.1f^2 + %.1f^2 + %.1f^2", x, y, z);
    printf("\n\t%.1f + %.1f + %.1f", pow(x, 2), pow(y, 2), pow(z, 2));
    printf("\n\t= %.1f", result_square);

    return 0;
}