/*
Faça um programa que leia o código, a descrição, o valor unitário e a quantidade em estoque dos 50 produtos
comercializados por uma papelaria. Essas informações devem ser armazenadas em um registro do tipo vetor
em ordem crescente de código. Depois da leitura, o programa deverá:

• Realizar uma rotina que permita alterar a descrição, o valor unitário e a quantidade em estoque de
  determinado produto, que deverá ser localizado por meio da informação de seu código;

• Realizar uma rotina que mostre todos os produtos cuja descrição comece com determinada letra
  (informada pelo usuário);

• Mostrar todos os produtos com quantidade em estoque inferior a cinco unidades.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define COUNT 50

typedef struct
{
    int codigo;
    char descricao[100];
    float valor;
    int quantidade;
} Produto;

void bubbleSort(Produto produtos[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (produtos[j].codigo > produtos[j + 1].codigo)
            {
                Produto aux = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = aux;
            }
        }
    }
}

void alterarProduto(Produto produtos[], int n)
{
    int codigo, encontrado = 0;
    printf("Digite o codigo do produto que deseja alterar: ");
    scanf("%d", &codigo);

    for (int i = 0; i < n; i++)
    {
        if (produtos[i].codigo == codigo)
        {
            printf("Descricao atual: %s\n", produtos[i].descricao);
            printf("Nova descricao: ");
            scanf(" %[^\n]", produtos[i].descricao);

            printf("Valor atual: %.2f\n", produtos[i].valor);
            printf("Novo valor: ");
            scanf("%f", &produtos[i].valor);

            printf("Quantidade atual: %d\n", produtos[i].quantidade);
            printf("Nova quantidade: ");
            scanf("%d", &produtos[i].quantidade);

            encontrado = 1;
            printf("Produto atualizado com sucesso!\n");
            break;
        }
    }

    if (!encontrado)
    {
        printf("Produto com codigo %d nao encontrado.\n", codigo);
    }
}

void mostrarProdutosPorLetra(Produto produtos[], int n, char letra)
{
    letra = toupper(letra);
    printf("\nProdutos que comecam com a letra '%c':\n", letra);
    int encontrou = 0;

    for (int i = 0; i < n; i++)
    {
        if (toupper(produtos[i].descricao[0]) == letra)
        {
            printf("Codigo: %d | Descricao: %s | Valor: %.2f | Quantidade: %d\n",
                   produtos[i].codigo, produtos[i].descricao, produtos[i].valor, produtos[i].quantidade);
            encontrou = 1;
        }
    }

    if (!encontrou)
        printf("Nenhum produto encontrado com essa letra.\n");
}

void mostrarProdutosComPoucoEstoque(Produto produtos[], int n)
{
    printf("\nProdutos com estoque inferior a 5 unidades:\n");
    int encontrou = 0;

    for (int i = 0; i < n; i++)
    {
        if (produtos[i].quantidade < 5)
        {
            printf("Codigo: %d | Descricao: %s | Valor: %.2f | Quantidade: %d\n",
                   produtos[i].codigo, produtos[i].descricao, produtos[i].valor, produtos[i].quantidade);
            encontrou = 1;
        }
    }

    if (!encontrou)
        printf("Nenhum produto com estoque baixo encontrado.\n");
}

int main()
{
    Produto produtos[COUNT];
    int opcao;

    // Leitura dos produtos
    printf("Cadastro de Produtos:\n");
    for (int i = 0; i < COUNT; i++)
    {
        int codigoValido;
        do
        {
            codigoValido = 1;
            printf("\nProduto %d\n", i + 1);
            printf("Codigo: ");
            scanf("%d", &produtos[i].codigo);

            // Verifica duplicidade de código
            for (int j = 0; j < i; j++)
            {
                if (produtos[i].codigo == produtos[j].codigo)
                {
                    printf("Codigo ja cadastrado! Digite outro.\n");
                    codigoValido = 0;
                    break;
                }
            }
        } while (!codigoValido);

        printf("Descricao: ");
        scanf(" %[^\n]", produtos[i].descricao);

        printf("Valor: ");
        scanf("%f", &produtos[i].valor);

        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
    }

    // Ordena os produtos por código
    bubbleSort(produtos, COUNT);

    // Menu
    do
    {
        printf("\n==== MENU ====\n");
        printf("1. Alterar produto\n");
        printf("2. Mostrar produtos por letra\n");
        printf("3. Mostrar produtos com pouco estoque\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            alterarProduto(produtos, COUNT);
            break;
        case 2:
        {
            char letra;
            printf("Digite a letra: ");
            scanf(" %c", &letra);
            mostrarProdutosPorLetra(produtos, COUNT, letra);
            break;
        }
        case 3:
            mostrarProdutosComPoucoEstoque(produtos, COUNT);
            break;
        case 4:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
