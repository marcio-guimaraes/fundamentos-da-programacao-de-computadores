/*Faça um programa que altere o cadastro de clientes do Exercício 1. O usuário deve informar o código do
cliente que será alterado. */

#include <stdio.h>
#include <string.h>

int alterarCliente(int cod)
{
    FILE *fc = fopen("clientes.txt", "r");
    FILE *ftc = fopen("clientes_temp.txt", "w");
    if (!fc || !ftc)
        return 0;
    int c, achou = 0;
    char nome[101], end[1001], fone[21];
    while (fscanf(fc, "%d\n%100[^\n]\n%1000[^\n]\n%20[^\n]\n", &c, nome, end, fone) == 4)
    {
        if (c == cod)
        {
            achou = 1;
            printf("Novo nome: ");
            getchar();
            fgets(nome, 101, stdin);
            nome[strcspn(nome, "\n")] = 0;
            printf("Novo endereco: ");
            fgets(end, 1001, stdin);
            end[strcspn(end, "\n")] = 0;
            printf("Novo fone: ");
            fgets(fone, 21, stdin);
            fone[strcspn(fone, "\n")] = 0;
        }
        fprintf(ftc, "%d\n%s\n%s\n%s\n", c, nome, end, fone);
    }
    fclose(fc);
    fclose(ftc);
    if (!achou)
    {
        remove("clientes_temp.txt");
        return 0;
    }
    remove("clientes.txt");
    rename("clientes_temp.txt", "clientes.txt");
    return 1;
}

int main()
{
    int cod;
    printf("Cod cliente para alterar: ");
    scanf("%d", &cod);
    if (!alterarCliente(cod))
        printf("Cliente nao encontrado\n");
    else
        printf("Cliente alterado com sucesso\n");
    return 0;
}
