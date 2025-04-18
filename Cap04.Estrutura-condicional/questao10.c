/*O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a
seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.

CUSTO DE FRABICA || % DO DISTRIBUIDOR || % DOS IMPOSTOS
Custo <= 12000..............5%..............isento.....
[12000 - 25000]............10%................15%......
Custo > 25000..............15%................20%......*/

#include <stdio.h>

int main()
{

    float custo_fab;
    
    printf("Custo de fabrica: ");
    scanf("%f", &custo_fab);

    if (custo_fab < 12000)
    {
        printf("Custo total: %.2f\n", custo_fab * 1.05);
    }
    else if (custo_fab >= 12000 && custo_fab <= 25000)
    {
        printf("Custo total: %.2f\n", custo_fab * 1.25);
    }
    else if (custo_fab > 25000)
    {
        printf("Custo total: %.2f\n", custo_fab * 1.35);
    }

    return 0;
}