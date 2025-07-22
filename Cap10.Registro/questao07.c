/*Considere que exista um registro com os seguintes atributos: codigo_cliente e nome_cliente e outro 
registro com os seguintes atributos: N°_conta, valor_compra, codigo_cliente. Faça um programa 
que: 

• Inclua clientes, não permitindo que dois clientes possuam o mesmo código; 

• Inclua contas, verificando se o código do cliente informado já está cadastrado. Caso não esteja, não 
deverá permitir a inclusão;

• Remova determinado cliente. Antes de executar a remoção, deverá verificar se ele não está vinculado 
a alguma conta. se possuir, deverá mostrar a mensagem Exclusão não permitida. Caso contrário, 
deverá proceder à exclusão. */

#include <stdio.h>
#include <string.h>

#define COUNT 50

typedef struct
{
    int codigoCliente;
    char nomeCliente[100];
} Cliente;

typedef struct
{
    int numConta;
    float valorCompra;
    int codigoCliente;
} Conta;

void adicionarCliente(Cliente clientes[], int *contadorCliente)
{
    if (*contadorCliente >= COUNT)
    {
        printf("Limite de clientes atingido.\n");
        return;
    }

    int codigo;
    printf("Digite o codigo do cliente: ");
    scanf("%d", &codigo);

    // Verifica se o código já existe
    for (int i = 0; i < *contadorCliente; i++)
    {
        if (clientes[i].codigoCliente == codigo)
        {
            printf("Codigo ja cadastrado. Cliente nao adicionado.\n");
            return;
        }
    }

    clientes[*contadorCliente].codigoCliente = codigo;
    printf("Digite o nome do cliente: ");
    scanf(" %[^\n]", clientes[*contadorCliente].nomeCliente);

    (*contadorCliente)++;
    printf("Cliente adicionado com sucesso!\n");
}

void adicionarConta(Conta contas[], int *contadorConta, Cliente clientes[], int contadorCliente)
{
    if (*contadorConta >= COUNT)
    {
        printf("Limite de contas atingido.\n");
        return;
    }

    int codigoCliente;
    printf("Digite o codigo do cliente para a conta: ");
    scanf("%d", &codigoCliente);

    // Verifica se o cliente existe
    int clienteExiste = 0;
    for (int i = 0; i < contadorCliente; i++)
    {
        if (clientes[i].codigoCliente == codigoCliente)
        {
            clienteExiste = 1;
            break;
        }
    }

    if (!clienteExiste)
    {
        printf("Cliente nao encontrado. Conta nao adicionada.\n");
        return;
    }

    contas[*contadorConta].codigoCliente = codigoCliente;
    printf("Digite o numero da conta: ");
    scanf("%d", &contas[*contadorConta].numConta);
    printf("Digite o valor da compra: ");
    scanf("%f", &contas[*contadorConta].valorCompra);

    (*contadorConta)++;
    printf("Conta adicionada com sucesso!\n");
}

void excluirCliente(Cliente clientes[], int *contadorCliente, Conta contas[], int contadorConta)
{
    int codigo;
    printf("Digite o codigo do cliente que deseja excluir: ");
    scanf("%d", &codigo);

    // Verifica se o cliente possui contas vinculadas
    for (int i = 0; i < contadorConta; i++)
    {
        if (contas[i].codigoCliente == codigo)
        {
            printf("Exclusao nao permitida. Cliente possui contas vinculadas.\n");
            return;
        }
    }

    // Procura o cliente e o remove
    for (int i = 0; i < *contadorCliente; i++)
    {
        if (clientes[i].codigoCliente == codigo)
        {
            for (int j = i; j < *contadorCliente - 1; j++)
            {
                clientes[j] = clientes[j + 1];
            }
            (*contadorCliente)--;
            printf("Cliente excluido com sucesso!\n");
            return;
        }
    }

    printf("Cliente nao encontrado.\n");
}

int main()
{
    Cliente clientes[COUNT];
    Conta contas[COUNT];
    int contadorCliente = 0, contadorConta = 0;
    int opcao;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1 - Adicionar cliente\n");
        printf("2 - Adicionar conta\n");
        printf("3 - Excluir cliente\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0)
        {
            printf("Fim do programa\n");
            break;
        }
        else if (opcao == 1)
        {
            adicionarCliente(clientes, &contadorCliente);
        }
        else if (opcao == 2)
        {
            adicionarConta(contas, &contadorConta, clientes, contadorCliente);
        }
        else if (opcao == 3)
        {
            excluirCliente(clientes, &contadorCliente, contas, contadorConta);
        }
        else
        {
            printf("Opcao invalida.\n");
        }
    }

    return 0;
}
