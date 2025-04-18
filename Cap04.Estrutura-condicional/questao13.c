/* Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a seguir, o novo preço
e a classificação.

TABELA 1 — PERCENTUAL DE AUMENTO
PREÇO                        ||    %
Preço <= 50R$......................5%.........
(50R$ - 100R$].....................10%........
Preço > 100R$.......................15%.......

TABELA 2 — CLASSIFICAÇÕES
NOVO PREÇO                ||    CLASSIFICAÇÃO
Novo Preço <= 80R$..............Barato.......
(80R$ - 120R$]..................Normal........
(120R$ - 200R$].................Caro..........
Novo Preço > 200R$..............Muito caro....
*/

#include <stdio.h>

int main()
{

    float preco, novo_preco;
    printf("Prco do produto: ");
    scanf("%f", &preco);

    if (preco <= 50)
    {
        novo_preco = preco * 1.05;
    }
    else if (preco > 50 && preco <= 100)
    {
        novo_preco = preco * 1.1;
    }
    else if (preco > 100)
    {
        novo_preco = preco * 1.15;
    }


    if (novo_preco <= 80)
    {
        printf("%.2f\nBarato\n", novo_preco);
    }
    else if (novo_preco > 80 && novo_preco <= 120)
    {
        printf("%.2f\nNormal\n", novo_preco);
    }
    else if (novo_preco > 120 && novo_preco <= 200)
    {
        printf("%.2f\nCaro\n", novo_preco);
    }
    else if (novo_preco > 200)
    {
        printf("%.2f\nMuito caro\n", novo_preco);
    }

    return 0;
}