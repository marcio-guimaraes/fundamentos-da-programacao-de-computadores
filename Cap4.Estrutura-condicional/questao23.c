/* Faça um programa que receba:
   ■ o código do produto comprado; e
   ■ a quantidade comprada do produto.
   Calcule e mostre:
   ■ o preço unitário do produto comprado, seguindo a Tabela I;
   ■ o preço total da nota;
   ■ o valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
   ■ o preço final da nota depois do desconto.

TABELA I
CÓDIGO                          ||    PREÇO
1 a 10................................R$ 10,00..........
11 a 20...............................R$ 15,00..........
21 a 30...............................R$ 20,00..........
31 a 40...............................R$ 30,00..........

TABELA II
PREÇO TOTAL DA NOTA         ||    % DE DESCONTO
Até R$ 250,00.....................5%...........
Entre R$ 250,00 e R$ 500,00.......10%..........
Acima de R$ 500,00................15%..........
*/

#include <stdio.h>

int main()
{

    int codigo, quant_comprada;
    float preco_unit, preco_nota, desconto;

    printf("Codigo do produto: ");
    scanf("%d", &codigo);
    printf("Quantidade comprada: ");
    scanf("%d", &quant_comprada);

    if (codigo > 0 && codigo <= 10)
    {
        preco_unit = 10;
        preco_nota = quant_comprada * preco_unit;
    }
    else if (codigo >= 11 && codigo <= 20)
    {
        preco_unit = 15;
        preco_nota = quant_comprada * preco_unit;
    }
    else if (codigo >= 21 && codigo <= 30)
    {
        preco_unit = 20;
        preco_nota = quant_comprada * preco_unit;
    }
    else if (codigo >= 21 && codigo <= 30)
    {
        preco_unit = 30;
        preco_nota = quant_comprada * preco_unit;
    }
    else
    {
        printf("Invalido");
    }

    if (preco_nota < 250)
    {
        desconto = preco_nota * 0.95;
    }
    else if (preco_nota > 250 && preco_nota <= 500)
    {
        desconto = preco_nota * 0.90;
    }
    else if (preco_nota > 500)
    {
        desconto = preco_nota * 0.85;
    }

    printf("Preco unitario = %.2f\nPreco da nota = %.2f\nDesconto = %.2f\nValor final = %.2f\n", preco_unit, preco_nota, desconto, preco_nota - desconto);
    return 0;
}