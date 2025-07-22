/*
Foi feita uma estatística em 15 estados brasileiros para coletar dados sobre acidentes de trânsito. Em cada
estado foram observados os seguintes aspectos:
• nome do estado;
• número de veículos que circularam nesse estado (em 2012);
• número de acidentes de trânsito (em 2012).

Crie um programa que permita conhecer:
• o maior e o menor índice de acidentes de trânsito e o nome dos estados em que eles ocorreram;
• o percentual de veículos em cada estado;
• a média de acidentes em cada um dos estados.
*/

#include <stdio.h>

int main()
{
    int idade[5];
    float peso[5], altura[5];
    int somaIdade = 0, countAltura = 0, countIdadeAlta = 0;
    float maiorPeso = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &idade[i]);
        scanf("%f", &peso[i]);
        scanf("%f", &altura[i]);

        somaIdade += idade[i];

        if (peso[i] > maiorPeso)
            maiorPeso = peso[i];
        if (altura[i] < 1.5)
            countAltura++;
        if (idade[i] > 90)
            countIdadeAlta++;
    }

    printf("Media idade: %.2f\n", somaIdade / 5.0);
    printf("Maior peso: %.2f\n", maiorPeso);
    printf("Altura < 1.5m: %d\n", countAltura);
    printf("Idade > 90: %d\n", countIdadeAlta);

    return 0;
}
