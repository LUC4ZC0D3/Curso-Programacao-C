/* 7. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A formula de convers ´ ao˜ e: ´ C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius
e F a temperatura em Fahrenheit. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float f, c;

    printf("Digite a temperatura em °F: ");
    scanf("%f", &f);

    c = 5.0 * ((f - 32.0) / 9.0);

    printf("%.2f °F equivale a: %.2f °C", f, c);

    return 0;
}