#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int id_adm = 1234, senha_mestra = 9999, senha;

    printf("Digite o ID do seu cracha ou sua senha: ");
    scanf("%d", &senha);

    if (senha == id_adm || senha == senha_mestra)
    {
        printf("Acesso Liberado! Bem-vindo.");
    }
    else
    {
        printf("Acesso Negado! Alarme acionado.");
    }
    return 0;
}