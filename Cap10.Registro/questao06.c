/*
 leia as informações a seguir: 

 +----------------------+-----------------------------+
|        Cliente       |      Conta Bancária        |
+----------------------+-----------------------------+
| Número do cliente    | Número da conta             |
| Nome                 | Número do cliente (titular) |
| Telefone             | Saldo                       |
| Endereço             |                             |
+----------------------+-----------------------------+

Crie um programa que faça o cadastramento de contas, verificando se o número do cliente
titular da conta já foi previamente cadastrado. Se existir, deverá permitir a inclusão.
Caso contrário, deverá mostrar a mensagem "Cliente não cadastrado" e abrir uma tela que
permita o cadastramento. O programa deverá mostrar, ao final, todas as contas cadastradas.
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char numeroCliente[10];
    char nome[50];
    char telefone[20];
    char endereco[100];
} Cliente;

typedef struct
{
    char numeroConta[10];
    char numeroCliente[10];
    float saldo;
} Conta;

void cadastrarCliente(Cliente clientes[], int *countCliente);
void cadastrarConta(Conta contas[], Cliente clientes[], int *countConta, int *countCliente);
void listarContas(Conta contas[], int countConta);

int main()
{
    int opcao, countCliente = 0, countConta = 0;
    Cliente clientes[50];
    Conta contas[50];

    do
    {
        printf("\n1 - Cadastrar cliente\n"
               "2 - Cadastrar conta\n"
               "3 - Listar contas cadastradas\n"
               "0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            cadastrarCliente(clientes, &countCliente);
        }
        else if (opcao == 2)
        {
            cadastrarConta(contas, clientes, &countConta, &countCliente);
        }
        else if (opcao == 3)
        {
            listarContas(contas, countConta);
        }

    } while (opcao != 0);

    return 0;
}

void cadastrarCliente(Cliente clientes[], int *countCliente)
{
    printf("Numero do cliente: ");
    scanf(" %s", clientes[*countCliente].numeroCliente);

    printf("Nome: ");
    scanf(" %[^\n]", clientes[*countCliente].nome);

    printf("Telefone: ");
    scanf(" %s", clientes[*countCliente].telefone);

    printf("Endereco: ");
    scanf(" %[^\n]", clientes[*countCliente].endereco);

    (*countCliente)++;
}

void cadastrarConta(Conta contas[], Cliente clientes[], int *countConta, int *countCliente)
{
    int encontrou = 0;
    printf("Numero do cliente: ");
    scanf(" %s", contas[*countConta].numeroCliente);

    for (int i = 0; i < *countCliente; i++)
    {
        if (strcmp(contas[*countConta].numeroCliente, clientes[i].numeroCliente) == 0)
        {
            encontrou = 1;
            break;
        }
    }

    if (encontrou == 1)
    {
        printf("Numero da conta: ");
        scanf(" %s", contas[*countConta].numeroConta);
        printf("Saldo: ");
        scanf("%f", &contas[*countConta].saldo);
        (*countConta)++;
    }
    else
    {
        printf("CLIENTE NAO CADASTRADO\n");
        cadastrarCliente(clientes, countCliente);
        // Depois de cadastrar, tenta novamente cadastrar a conta:
        cadastrarConta(contas, clientes, countConta, countCliente);
    }
}

void listarContas(Conta contas[], int countConta)
{
    printf("\n--- Contas Cadastradas ---\n");
    for (int i = 0; i < countConta; i++)
    {
        printf("Conta: %s | Cliente: %s | Saldo: %.2f\n",
               contas[i].numeroConta,
               contas[i].numeroCliente,
               contas[i].saldo);
    }
}
