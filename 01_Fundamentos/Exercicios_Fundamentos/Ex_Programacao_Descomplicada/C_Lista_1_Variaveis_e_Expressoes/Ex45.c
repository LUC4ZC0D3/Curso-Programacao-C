/* 45. Fac¸a um programa para converter uma letra maiuscula em letra min ´ uscula. Use a tabela ´
ASCII para resolver o problema.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_NUMERIC, "");

    char letra;

    printf("Digite uma letra maiuscula: (Ex. A): ");
    scanf(" %c", &letra);

    letra = letra + 32;

    printf("Letra minuscula: %c", letra);

    return 0;
}