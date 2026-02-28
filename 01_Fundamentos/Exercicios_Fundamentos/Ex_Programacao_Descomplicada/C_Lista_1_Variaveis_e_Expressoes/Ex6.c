/* 6. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A formula de convers ´ ao˜ e: ´ F = C∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celsius.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float temp_C, temp_F;

    printf("Digite a temperatura em °C: ");
    scanf("%f", &temp_C);

    temp_F = (temp_C * (9.0 / 5.0)) + 32.0;

    printf("%.2f °C equivale a: %.2f °F.", temp_C, temp_F);

    return 0;
}