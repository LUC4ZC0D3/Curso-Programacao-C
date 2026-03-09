#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float nota, freq;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    printf("Digite sua frequencia: ");
    scanf("%f", &freq);

    if (nota >= 7.0 && freq >= 75)
    {
        printf("Aprovado!!");
    }
    else
    {
        if (nota < 7.0 && freq >= 75)
        {
            printf("Reprovado por nota!!");
        }
        else if (nota >= 7.0 && freq < 75)
        {
            printf("Reprovado por frequencia!!");
        }
        else
        {
            printf("Reprovado por nota e frequencia!!");
        }
    }

    return 0;
}