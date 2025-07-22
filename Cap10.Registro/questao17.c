/*
Um banco está informatizando seus controles de clientes e contas. sobre cada cliente dispõe-se dos se
guintes dados: nome, idade, endereço, número de suas contas (15 no máximo) e CPF_CNPJ. As contas 
válidas têm número diferente de zero. Cada conta possui um só cliente. As informações das contas são as 
seguintes: número da conta, cliente e saldo atual. (se existem 12 clientes com quatro contas no máximo, 
então devem existir 48 contas.)

 Crie um programa que:
a) cadastre os clientes e suas contas; 
b) mostre todas as contas cadastradas; 
c) mostre todas as contas de determinado cliente (identificadas pelo código); 
d) mostre o somatório das contas de determinado cliente; 
e) mostre todas as contas com saldo negativo; 
f) mostre o ativo bancário (soma de todos os saldos). 
*/

#include <stdio.h>
#include <string.h>

#define MAX_CLIENTES 12
#define MAX_CONTAS 15

typedef struct
{
    int numero;
    float saldo;
    int codCliente;
} Conta;

typedef struct
{
    char nome[50];
    int idade;
    char endereco[100];
    char cpf[15];
    int qtdContas;
    int contas[MAX_CONTAS];
} Cliente;

int main()
{
    Cliente clientes[MAX_CLIENTES];
    Conta contas[MAX_CLIENTES * MAX_CONTAS];
    int qtdClientes = 0, qtdContas = 0;
    int op;

    while (1)
    {
        scanf("%d", &op);

        if (op == 1)
        {
            Cliente c;
            scanf(" %[^\n]", c.nome);
            scanf("%d", &c.idade);
            scanf(" %[^\n]", c.endereco);
            scanf(" %[^\n]", c.cpf);
            scanf("%d", &c.qtdContas);
            for (int i = 0; i < c.qtdContas; i++)
            {
                scanf("%d", &contas[qtdContas].numero);
                scanf("%f", &contas[qtdContas].saldo);
                contas[qtdContas].codCliente = qtdClientes;
                c.contas[i] = contas[qtdContas].numero;
                qtdContas++;
            }
            clientes[qtdClientes++] = c;
        }

        else if (op == 2)
        {
            for (int i = 0; i < qtdContas; i++)
                printf("%d %.2f\n", contas[i].numero, contas[i].saldo);
        }

        else if (op == 3)
        {
            int cod;
            scanf("%d", &cod);
            for (int i = 0; i < qtdContas; i++)
                if (contas[i].codCliente == cod)
                    printf("%d %.2f\n", contas[i].numero, contas[i].saldo);
        }

        else if (op == 4)
        {
            int cod;
            scanf("%d", &cod);
            float total = 0;
            for (int i = 0; i < qtdContas; i++)
                if (contas[i].codCliente == cod)
                    total += contas[i].saldo;
            printf("%.2f\n", total);
        }

        else if (op == 5)
        {
            for (int i = 0; i < qtdContas; i++)
                if (contas[i].saldo < 0)
                    printf("%d %.2f\n", contas[i].numero, contas[i].saldo);
        }

        else if (op == 6)
        {
            float total = 0;
            for (int i = 0; i < qtdContas; i++)
                total += contas[i].saldo;
            printf("%.2f\n", total);
        }

        else if (op == 0)
            break;
    }

    return 0;
}
