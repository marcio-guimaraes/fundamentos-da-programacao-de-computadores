/*Faça um programa que receba o nome de oito clientes e armazene-os em um vetor. Em um segundo vetor,
armazene a quantidade de DVDs locados em 2011 por cada um dos oito clientes. Sabe-se que, para cada
dez locações, o cliente tem direito a uma locação grátis. Faça um programa que mostre o nome de todos
os clientes, com a quantidade de locações grátis a que ele tem direito.*/

#include <stdio.h>

int main()
{

    char nome_clientes[8][30];
    int dvd[8];

    for (int i = 0; i < 8; i++)
    {
        printf("Nome: ");
        scanf("%s", nome_clientes[i]);
        printf("Quantidade de dvd's locados: ");
        scanf("%d", &dvd[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%s - Locacoes gratis = %d\n", nome_clientes[i], dvd[i] / 10);
    }

    return 0;
}