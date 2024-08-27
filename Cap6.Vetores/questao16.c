/*6. Faça um programa que receba o nome de cinco produtos e seus respectivos preços. Calcule e mostre:
■■ a quantidade de produtos com preço inferior a R$ 50,00;
■■ o nome dos produtos com preço entre R$ 50,00 e R$ 100,00;
■■ a média dos preços dos produtos com preço superior a R$ 100,00. */

#include <stdio.h>

int main()
{

    char nome[5][15];
    float preco[5], soma_superior100 = 0, quantidade_superior100 = 0;
    int inferior50 = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Nome: ");
        scanf("%s", nome[i]);
        printf("Preco: ");
        scanf("%f", &preco[i]);
        if (preco[i] < 50)
        {
            inferior50++;
        }
        else if (preco[i] > 100)
        {
            soma_superior100 += preco[i];
            quantidade_superior100++;
        }
    }

    printf("\nProdutos com preco inferior a 50 = %d\n", inferior50);
    for (int i = 0; i < 5; i++)
    {
        if (preco[i] >= 50 && preco[i] <= 100)
        {
            printf("%s\n", nome[i]);
        }
    }
    printf("Media dos produtos com preco superior a 100 = %.2f\n", (float)soma_superior100 / quantidade_superior100);

    return 0;
}