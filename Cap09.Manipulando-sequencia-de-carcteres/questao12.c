/*Faça um programa que receba uma data no formato DD/MM/AAAA e a mostre com o mês por extenso:
DD/mês por extenso/AAAA*/

#include <stdio.h>

int main()
{

    int dia, mes, ano;
    char *meses[] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    printf("Data(DD/MM/AAAA): ");

    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("%d/%s/%d\n", dia, meses[mes - 1], ano);

    return 0;
}