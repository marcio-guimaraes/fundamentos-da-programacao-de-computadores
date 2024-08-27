/*Faça um programa que preencha três vetores com dez posições cada um: o primeiro vetor, com os nomes de
dez produtos; o segundo vetor, com os códigos dos dez produtos; e o terceiro vetor, com os preços dos produtos. 
Mostre um relatório apenas com o nome, o código, o preço e o novo preço dos produtos que sofrerão aumento.

Sabe-se que os produtos que sofrerão aumento são aqueles que possuem código par ou preço superior a
R$ 1.000,00. Sabe-se ainda que, para os produtos que satisfazem as duas condições anteriores, código e
preço, o aumento será de 20%; para aqueles que satisfazem apenas a condição de código, o aumento será
de 15%; e para aqueles que satisfazem apenas a condição de preço, o aumento será de 10%.*/

#include <stdio.h>

int main()
{

    int count = 10, codigo[count];
    char nome[count][30];
    float preco[count];

    for (int i = 0; i < count; i++)
    {
        printf("Nome do produto %d: ", i + 1);
        scanf("%s", nome[i]);
        printf("Codigo do produto %d: ", i + 1);
        scanf("%d", &codigo[i]);
        printf("Preco do produto %d: ", i + 1);
        scanf("%f", &preco[i]);
    }

    for (int i = 0; i < count; i++)
    {
        printf("\nNome = %s\tCodigo =%d\nPreco = %.2f\t", nome[i], codigo[i], preco[i]);

        if (preco[i] > 1000)
        {
            if (codigo[i] % 2 == 0)
                preco[i] = preco[i] * 1.2;
            else
                preco[i] = preco[i] * 1.1;
        }
        else if (codigo[i] % 2 == 0)
        {
            preco[i] = preco[i] * 1.15;
        }
        printf("Novo preco = %.2f\n", preco[i]);
    }

    return 0;
}