/*Crie um programa que:

■■ receba o preço de dez produtos e armazene-os em um vetor;
■■ receba a quantidade estocada de cada um desses produtos, em cinco armazéns diferentes, utilizando
uma matriz 5 x 10.

O programa deverá calcular e mostrar:

■■ a quantidade de produtos estocados em cada um dos armazéns;
■■ a quantidade de cada um dos produtos estocados, em todos os armazéns juntos;
■■ o preço do produto que possui maior estoque em um único armazém;
■■ o menor estoque armazenado;
■■ o custo de cada armazém. */

#include <stdio.h>

#define produtos 10
#define armazem 5

int main()
{
    double preco[produtos];
    int quantidade[armazem][produtos];
    int maiorEstoque = 0, menorEstoque = 0, i_maior = 0, i_menor[2] = {0};

    // RECEBENDO PRECOS
    printf("Digite o preco de cada produto:\n");
    for (int i = 0; i < produtos; i++)
    {
        scanf("%lf", &preco[i]);
    }

    // RECEBENDO OS ESTOQUES
    printf("Digite a quantidade estocada de cada produto em cada armazem:\n");
    for (int i = 0; i < armazem; i++)
    {
        for (int j = 0; j < produtos; j++)
        {
            scanf("%d", &quantidade[i][j]);
            // VERIFICANDO QUAIS O MAIOR E MENOR ESTOQUE
            if (i == 0 && j == 0)
            {
                maiorEstoque = quantidade[i][j];
                i_maior = j; // INDICE DO PRODUTO
                menorEstoque = quantidade[i][j];
                i_menor[0] = i; // INDICE DO ARMAZEM
                i_menor[1] = j; // INDICE DO PRODUTO
            }
            else
            {
                if (maiorEstoque < quantidade[i][j])
                {
                    maiorEstoque = quantidade[i][j];
                    i_maior = j;
                }
                if (quantidade[i][j] < menorEstoque)
                {
                    menorEstoque = quantidade[i][j];
                    i_menor[0] = i;
                    i_menor[1] = j;
                }
            }
        }
    }

    // IMPRIMINDO A QUANTIDADE EM CADA ARMAZEM E O TOTAL
    for (int i = 0; i < armazem; i++)
    {
        int estocados = 0;
        printf("\nQuantidade dos produtos no armazem %d:\n", i + 1);
        for (int j = 0; j < produtos; j++)
        {
            printf("Produto %d: %d\n", j + 1, quantidade[i][j]);
            estocados += quantidade[i][j];
        }
        printf("Total de produtos no armazem %d = %d\n", i + 1, estocados);
    }

    // QUANTIDADE TOTAL DE CADA PRODUTO EM TODOS OS ARMAZENS
    for (int j = 0; j < produtos; j++)
    {
        int totalProduto = 0;
        for (int i = 0; i < armazem; i++)
        {
            totalProduto += quantidade[i][j];
        }
        printf("\nQuantidade total do produto %d em todos os armazens = %d\n", j + 1, totalProduto);
    }

    // MAIOR E MENOR ESTOQUE
    printf("\nPreco do produto com maior estoque em um armazem = %.2lf\n", preco[i_maior]);
    printf("Menor estoque armazenado: %d\n\n", quantidade[i_menor[0]][i_menor[1]]);
    
    // CUSTO DE CADA ARMAZEM
    printf("\nCusto de cada armazem:\n");
    for (int i = 0; i < armazem; i++)
    {
        double custo_armazem = 0;
        for (int j = 0; j < produtos; j++)
        {
            custo_armazem += quantidade[i][j] * preco[j];
        }
        printf("Armazem %d: %.2lf\n", i + 1, custo_armazem);
    }

    return 0;
}
