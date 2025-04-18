/*Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em um vetor. O
programa deverá calcular e mostrar a maior e a menor temperatura do ano, junto com o mês em que elas
ocorreram (o mês deverá ser mostrado por extenso: 1 = janeiro; 2 = fevereiro; ...)*/

#include <stdio.h>

void temperatura(float temp[], int *a, int *b);

int main()
{

    float temp[12];
    char *mes[] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    int maior = 0, menor = 0;

    temperatura(temp, &maior, &menor);

    printf("Maior temperatura do ano: %.2f grau C em %s\n", temp[maior], mes[maior]);
    printf("Menor temperatura do ano: %.2f graus C em %s\n", temp[menor], mes[menor]);

    return 0;
}

void temperatura(float temp[], int *a, int *b)
{

    for (int i = 0; i < 12; i++)
    {
        printf("Temperatura: ");
        scanf("%f", &temp[i]);
    }
    float maior = temp[0], menor = temp[0];

    for (int i = 1; i < 12; i++)
    {
        if (temp[i] > maior)
        {
            maior = temp[i];
            *a = i;
        }
        if (temp[i] < menor)
        {
            menor = temp[i];
            *b = i;
        }
    }
}