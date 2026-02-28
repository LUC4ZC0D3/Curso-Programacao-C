// Crie um algoritimo que leia 2 notas e retorne a média entre elas:

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    float nota1, nota2, media;

    SetConsoleOutputCP(CP_UTF8);

    printf("\n--------------- CALCULAR MÉDIA ---------------");

    printf("\n\nDigite a primeira nota: ");
    scanf("%f", &nota1);

    printf("\n\nDigite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("\n\nA média ente %.2f e %.2f é: %.2f\n\n", nota1, nota2, media);

    printf("--------------- FIM ---------------\n\n");
}
