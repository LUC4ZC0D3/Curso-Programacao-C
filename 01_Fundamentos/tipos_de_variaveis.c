#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    int a = 24;
    float b = 1.78;
    char c[] = "Lucas Lima da Silva Mello";

    printf("------------------- Tipos de variáveis -------------------");
    printf("\n");
    printf("\tValor da variavel 'a': %d | Inteiro\n", a);
    printf("\tValor da variavel 'b': %.2f | Flutuante\n", b);
    printf("\tValor da variavel 'c': %s | Caracteres\n", c);
}