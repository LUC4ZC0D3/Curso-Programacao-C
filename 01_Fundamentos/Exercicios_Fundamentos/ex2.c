#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    float n1, n2, sub;

    printf("Nota 1: ");
    scanf("%f", &n1);

    printf("Nota 2: ");
    scanf("%f", &n2);

    sub = n1 - n2;

    printf("O valor absoluto da subtração entre %.2f e %.2f é: %d", n1, n2, abs(sub));
    printf("\n\n%.2f\n\n", sub);
}