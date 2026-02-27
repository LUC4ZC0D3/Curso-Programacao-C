#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
        // Configura os acentos usando o padrão do windows
    SetConsoleOutputCP(CP_UTF8);

    // Inicializo a variavel "a" como inteiro e faço ela receber o valor "5"
    int a = 5;

    // Inprimo o valor da variavel "a" | %d diz para adicionar o valor de "a"
    printf("Olá!\nA variavel 'a' recebe o valor: %d\n", a);

    // Escaneie um valor inteiro ("%d") para a minha variavel "a"
    scanf("%d", &a);

    printf("O novo valor de 'a' é: %d", a);
}