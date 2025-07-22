/* 1. Uma empresa deseja controlar as vendas realizadas por seus vendedores a cada mês, durante um ano inteiro.
sabe-se que nessa empresa existem quatro vendedores.

É importante que esse controle seja automatizado, porque muitas consultas devem ser respondidas
imediatamente. O gerente necessita de um meio para cadastrar as vendas de todos os vendedores e,
depois, precisa ver um menu contendo as seguintes opções:
1. Cadastrar vendedor.
2. Cadastrar venda.
3. Consultar as vendas de um funcionário em determinado mês.
4. Consultar o total das vendas de determinado vendedor.
5. Mostrar o número do vendedor que mais vendeu em determinado mês.
6. Mostrar o número do mês com mais vendas.
7. Finalizar o programa.

• Na opção 1: devem ser cadastrados vendedores, e não pode haver dois vendedores com o mesmo código.
• Na opção 2: devem ser cadastradas vendas, informado o código do vendedor e o mês das vendas, mas
  não podem existir duas vendas para o mesmo vendedor no mesmo mês.
• Na opção 3: deve ser informado o número do vendedor e o número do mês que se deseja consultar,
  para, então, descobrir e mostrar esse valor.
• Na opção 4: deve ser informado o número do vendedor desejado, calculado e mostrado o total de suas
  vendas.
• Na opção 5: deve ser informado o número do mês que se deseja pesquisar, para então descobrir e mostrar
  o número do vendedor que mais vendeu nesse mês.
• Na opção 6: deve ser descoberto e mostrado o mês com maior venda.
• Na opção 7: o programa termina.
*/

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
void vendedorMaisVendeuMes(struct Vendedores vendedor[], struct Vendas venda[], int numVendedor);
void mesComMaisVendas(struct Vendas venda[], int numVendedor);

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
        }
        else if (operacao == 4)
        {
            consultarTotalUmVendedor(vendedor, venda, quantVendedor);
        }
        else if (operacao == 5)
        {
            vendedorMaisVendeuMes(vendedor, venda, quantVendedor);
        }
        else if (operacao == 6)
        {
            mesComMaisVendas(venda, quantVendedor);
        }
        else
        {
            printf("Operacao invalida!\n");
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

    int codigo, indice;
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

void vendedorMaisVendeuMes(struct Vendedores vendedor[], struct Vendas venda[], int numVendedor)
{
    int mes;
    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &mes);
    mes--;

    if (mes < 0 || mes > 11)
    {
        printf("MES INVALIDO\n");
        return;
    }

    float maiorVenda = -1.0;
    int indiceMaior = -1;

    for (int i = 0; i < numVendedor; i++)
    {
        if (venda[i].valor[mes] > maiorVenda)
        {
            maiorVenda = venda[i].valor[mes];
            indiceMaior = i;
        }
    }

    if (indiceMaior == -1 || maiorVenda == 0)
    {
        printf("Nenhuma venda registrada neste mes.\n");
    }
    else
    {
        printf("O vendedor que mais vendeu no mes %d foi o de codigo %d com R$%.2f\n", mes + 1, vendedor[indiceMaior].codigo, maiorVenda);
    }

    printf(FIMDEOPERACAO);
}

void mesComMaisVendas(struct Vendas venda[], int numVendedor)
{
    float somaPorMes[12] = {0};

    for (int mes = 0; mes < 12; mes++)
    {
        for (int i = 0; i < numVendedor; i++)
        {
            somaPorMes[mes] += venda[i].valor[mes];
        }
    }

    float maiorSoma = -1.0;
    int mesMaior = -1;

    for (int mes = 0; mes < 12; mes++)
    {
        if (somaPorMes[mes] > maiorSoma)
        {
            maiorSoma = somaPorMes[mes];
            mesMaior = mes;
        }
    }

    if (maiorSoma == 0)
    {
        printf("Nenhuma venda registrada no ano.\n");
    }
    else
    {
        printf("O mes com maior volume de vendas foi o mes %d com R$%.2f\n", mesMaior + 1, maiorSoma);
    }

    printf(FIMDEOPERACAO);
}
