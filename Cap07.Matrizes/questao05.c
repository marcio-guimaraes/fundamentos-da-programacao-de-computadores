/*Elabore um programa que preencha uma matriz 12 x 4 com os valores das vendas de uma loja, em que cada
linha representa um mês do ano e cada coluna representa uma semana do mês. O programa deverá calcular
e mostrar:

■■ o total vendido em cada mês do ano, mostrando o nome do mês por extenso;
■■ o total vendido em cada semana durante todo o ano;
■■ o total vendido pela loja no ano.*/

#include <stdio.h>

#define LINHA 12
#define COLUNA 4

int main()
{
    int vendas[LINHA][COLUNA];
    int total_mes[LINHA] = {0};
    int total_semana[COLUNA] = {0};
    int total_ano = 0;


    const char *nomes[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    // Leitura das vendas e cálculo dos totais por mês e por semana
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            printf("Digite as vendas do mês %d, semana %d: ", i + 1, j + 1);
            scanf("%d", &vendas[i][j]);
            total_mes[i] += vendas[i][j];
            total_semana[j] += vendas[i][j];
        }
        total_ano += total_mes[i];
    }

    // Exibindo o total vendido em cada mês
    for (int i = 0; i < LINHA; i++)
    {
        printf("%s - Vendas: %d\n", nomes[i], total_mes[i]);
    }

    // Exibindo o total vendido em cada semana durante o ano
    for (int j = 0; j < COLUNA; j++)
    {
        printf("Semana %d - Total vendido: %d\n", j + 1, total_semana[j]);
    }

    // Exibindo o total vendido no ano
    printf("Total vendido no ano: %d\n", total_ano);

    return 0;
}
