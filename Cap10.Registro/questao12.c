/*
Observe os registros a seguir:

╔══════════════════════╗╔══════════════════════╗
║       Médicos        ║║      Pacientes       ║
╠══════════════════════╣╠══════════════════════╣
║ Cod_cli              ║║ Num_doc              ║
║ Nome                 ║║ Valor_doc            ║
║ Endereco             ║║ Data_emissao         ║
║ Fone                 ║║ Data_vencimento      ║
║                      ║║ Cod_cli              ║
╚══════════════════════╝╚══════════════════════╝

Faça um programa que:
a) inclua recebimentos (o programa deve verificar se o cliente já se encontra cadastrado);
b) altere o cadastro de clientes (o usuário deve informar o código do cliente que será alterado);
c) mostre todos os recebimentos com data de vencimento dentro de um período qualquer. Não esqueça de mos
trar também o nome do cliente e o total de dias em atraso (quando não houver atraso, o programa deverá
mostrar zero);
d) considere que poderão ser cadastrados no máximo três recebimentos para cada cliente.
*/

#include <stdio.h>
#include <string.h>

#define MAX_CLIENTES 50
#define MAX_RECEBIMENTOS 3

typedef struct
{
    int numDoc;
    float valorDoc;
    char dataEmissao[11];
    char dataVencimento[11];
} Recebimento;

typedef struct
{
    int codCli;
    char nome[50];
    char endereco[100];
    char fone[20];
    Recebimento recebimentos[MAX_RECEBIMENTOS];
    int qtdReceb;
} Cliente;

int main()
{
    Cliente clientes[MAX_CLIENTES];
    int totalClientes = 0, op;

    while (1)
    {
        scanf("%d", &op);

        if (op == 1)
        {
            if (totalClientes < MAX_CLIENTES)
            {
                scanf("%d", &clientes[totalClientes].codCli);
                scanf(" %[^\n]", clientes[totalClientes].nome);
                scanf(" %[^\n]", clientes[totalClientes].endereco);
                scanf(" %[^\n]", clientes[totalClientes].fone);
                clientes[totalClientes].qtdReceb = 0;
                totalClientes++;
            }
        }

        else if (op == 2)
        {
            int cod, i;
            scanf("%d", &cod);
            for (i = 0; i < totalClientes; i++)
            {
                if (clientes[i].codCli == cod)
                    break;
            }
            if (i < totalClientes && clientes[i].qtdReceb < MAX_RECEBIMENTOS)
            {
                int pos = clientes[i].qtdReceb;
                scanf("%d", &clientes[i].recebimentos[pos].numDoc);
                scanf("%f", &clientes[i].recebimentos[pos].valorDoc);
                scanf(" %[^\n]", clientes[i].recebimentos[pos].dataEmissao);
                scanf(" %[^\n]", clientes[i].recebimentos[pos].dataVencimento);
                clientes[i].qtdReceb++;
            }
        }

        else if (op == 3)
        {
            int cod, i;
            scanf("%d", &cod);
            for (i = 0; i < totalClientes; i++)
            {
                if (clientes[i].codCli == cod)
                    break;
            }
            if (i < totalClientes)
            {
                scanf(" %49[^\n]", clientes[i].nome);
                scanf(" %99[^\n]", clientes[i].endereco);
                scanf(" %19[^\n]", clientes[i].fone);
            }
        }

        else if (op == 4)
        {
            char inicio[11], fim[11];
            scanf(" %10[^\n]", inicio);
            scanf(" %10[^\n]", fim);

            for (int i = 0; i < totalClientes; i++)
            {
                for (int j = 0; j < clientes[i].qtdReceb; j++)
                {
                    if (strcmp(clientes[i].recebimentos[j].dataVencimento, inicio) >= 0 &&
                        strcmp(clientes[i].recebimentos[j].dataVencimento, fim) <= 0)
                    {
                        printf("%s %d %.2f %s %s 0\n", clientes[i].nome,
                               clientes[i].recebimentos[j].numDoc,
                               clientes[i].recebimentos[j].valorDoc,
                               clientes[i].recebimentos[j].dataEmissao,
                               clientes[i].recebimentos[j].dataVencimento);
                    }
                }
            }
        }

        else if (op == 0)
            break;
    }

    return 0;
}
