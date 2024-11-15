#include <stdio.h>

#define FIMDEOPERACAO "OPERACAO FINALIZADA\n\n"

struct Vendedores
{
    char nome[30];
    int codigo;
};

struct Vendas
{
    int codigo[12];
    float valor[12];
};

int buscarIndiceVendedor(struct Vendedores vendedor[], int numVendedor, int codigo);
int cadastrarVendedores(struct Vendedores vendedor[], int numVendedor);
int cadastrarVendas(struct Vendedores vendedor[], struct Vendas venda[], int numVendedor);
void consultarVendas(struct Vendedores vendedor[], struct Vendas venda[], int numVendedor);
void consultarTotalUmVendedor(struct Vendedores vendedor[], struct Vendas venda[], int numVendedor);

int main()
{
    int quantVendedor = 0, operacao;
    struct Vendedores vendedor[4];
    struct Vendas venda[4] = {0};

    while (1)
    {
        printf("\n1. Cadastrar vendedor.\n"
               "2. Cadastrar venda.\n"
               "3. Consultar as vendas de um funcionario em determinado mes.\n"
               "4. Consultar o total das vendas de determinado vendedor.\n"
               "5. Mostrar o numero do vendedor que mais vendeu em determinado mes.\n"
               "6. Mostrar o numero do mes com mais vendas.\n"
               "7. Finalizar o programa.\n"
               "Operacao desejada: ");
        scanf("%d", &operacao);

        if (operacao == 7)
        {
            break;
        }
        else if (operacao == 1)
        {
            quantVendedor = cadastrarVendedores(vendedor, quantVendedor);
        }
        else if (operacao == 2)
        {
            cadastrarVendas(vendedor, venda, quantVendedor);
        }
        else if (operacao == 3)
        {
            consultarVendas(vendedor, venda, quantVendedor);
        } else if (operacao == 4)
        {
            consultarTotalUmVendedor(vendedor, venda, quantVendedor);
        }
        
    }

    return 0;
}

int buscarIndiceVendedor(struct Vendedores vendedor[], int numVendedor, int codigo)
{
    for (int i = 0; i < numVendedor; i++)
    {
        if (vendedor[i].codigo == codigo)
        {
            return i;
        }
    }
    return -1; // Retorna -1 se o vendedor não foi encontrado
}

int cadastrarVendedores(struct Vendedores vendedor[], int numVendedor)
{
    int a;
    printf("Nome do vendedor: ");
    scanf("%s", vendedor[numVendedor].nome);
    printf("Codigo do vendedor: ");
    scanf("%d", &vendedor[numVendedor].codigo);

    if (buscarIndiceVendedor(vendedor, numVendedor, vendedor[numVendedor].codigo) != -1)
    {
        printf("CODIGO JA EM USO!!! Insira qualquer numero para voltar\n");
        scanf("%d", &a);
        return numVendedor;
    }

    printf(FIMDEOPERACAO);
    numVendedor++;
    return numVendedor;
}

int cadastrarVendas(struct Vendedores vendedor[], struct Vendas venda[], int numVendedor)
{
    int codigo, indice;
    printf("Codigo do vendedor: ");
    scanf("%d", &codigo);

    indice = buscarIndiceVendedor(vendedor, numVendedor, codigo);
    if (indice == -1)
    {
        printf("VENDEDOR NAO ENCONTRADO\n");
        return 0;
    }

    int mes;
    printf("Mes da venda: ");
    scanf("%d", &mes);
    mes--;

    if (venda[indice].valor[mes] == 0)
    {
        printf("Codigo da venda: ");
        scanf("%d", &venda[indice].codigo[mes]);
        printf("Valor da venda: ");
        scanf("%f", &venda[indice].valor[mes]);
    }
    else
    {
        printf("VENDA JA CADASTRADA PARA ESTE MES\n");
    }

    printf(FIMDEOPERACAO);
    return 0;
}

void consultarVendas(struct Vendedores vendedor[], struct Vendas venda[], int numVendedor)
{
    int codigo, mes, indice;
    printf("Codigo do vendedor: ");
    scanf("%d", &codigo);

    indice = buscarIndiceVendedor(vendedor, numVendedor, codigo);
    if (indice == -1)
    {
        printf("VENDEDOR NAO ENCONTRADO\n");
        return;
    }

    printf("Mes: ");
    scanf("%d", &mes);
    mes--;

    printf("O valor das vendas foi de R$%.2f\n", venda[indice].valor[mes]);
    printf(FIMDEOPERACAO);
}

void consultarTotalUmVendedor(struct Vendedores vendedor[], struct Vendas venda[], int numVendedor)
{

    int codigo, mes, indice, total;
    float total = 0;
    printf("Codigo do vendedor: ");
    scanf("%d", &codigo);

    indice = buscarIndiceVendedor(vendedor, numVendedor, codigo);
    if (indice == -1)
    {
        printf("VENDEDOR NAO ENCONTRADO\n");
        return;
    }

    for (int i = 0; i < 12; i++)
    {
        total += venda[indice].valor[i];
    }

    printf("O valor total foi de R$%.2f\n", total);

    return;
}
