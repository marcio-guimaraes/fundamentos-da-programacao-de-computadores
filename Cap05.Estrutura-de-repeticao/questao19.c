/*Faça um programa que receba o tipo da ação, ou seja, uma letra a ser comercializada na bolsa de valores,
o preço de compra e o preço de venda de cada ação e que calcule e mostre:

■ o lucro de cada ação comercializada;
■ a quantidade de ações com lucro superior a R$ 1.000,00;
■ a quantidade de ações com lucro inferior a R$ 200,00;
■ o lucro total da empresa.
Finalize com o tipo de ação ‘F’.*/

#include <stdio.h>

int main()
{

    char acao;
    float valorCompra, valorVenda, lucro_total = 0;
    int s1000 = 0, i200 = 0;

    while (1)
    {
        printf("Acao: ");
        scanf(" %c", &acao);
        if (acao == 'f' || 'F')
        {
            break;
        }
        printf("Valor da compra: ");
        scanf("%f", &valorCompra);
        printf("Valor da venda: ");
        scanf("%f", &valorVenda);

        if (valorVenda - valorCompra > 1000)
        {
            s1000++;
        }
        else if (valorVenda - valorCompra < 200)
        {
            i200++;
        }

        printf("Lucro da acao %c =  %.2f\n", acao, valorVenda - valorCompra);
        lucro_total = lucro_total + (valorVenda - valorCompra);
    }

    printf("Quantidade de acoes com lucro superior a 1000 = %d\n", s1000);
    printf("Quantiade de acoes com lucro inferior a 200 = %d\n", i200);
    printf("Lucro total = %.2f", lucro_total);
    return 0;
}