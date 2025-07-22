/*
Foi realizada uma pesquisa sobre algumas características físicas de 50 habitantes de certa região. De cada
habitante foram coletados os seguintes dados: sexo, altura, idade e cor dos olhos (A – azuis; V – verdes; ou
C – castanhos).

Faça um programa que leia esses dados, armazene-os em um registro do tipo vetor e determine:
• A média de idade das pessoas com olhos castanhos e altura superior a 1,60 m;
• A maior idade entre os habitantes;
• A quantidade de indivíduos do sexo feminino com idade entre 20 e 45 anos (inclusive) ou que tenham
  olhos verdes e altura inferior a 1,70 m;
• O percentual de homens.
*/

#include <stdio.h>

#define QUANTIDADE 50

typedef struct
{
    char sexo;
    float altura;
    int idade;
    char corOlhos;
} Pessoa;

int main()
{
    Pessoa habitantes[COUNT];
    int maiorIdade = 0;
    int countHomens = 0;
    int countCastanhosAltos = 0;
    int somaIdadeCastanhosAltos = 0;
    int mulheresEntre20e45_ouVerdesBaixas = 0;

    for (int i = 0; i < COUNT; i++)
    {
        printf("Sexo (M/F): ");
        scanf(" %c", &habitantes[i].sexo);

        printf("Altura (em metros, ex: 1.75): ");
        scanf("%f", &habitantes[i].altura);

        printf("Idade: ");
        scanf("%d", &habitantes[i].idade);

        printf("Cor dos olhos (A/V/C): ");
        scanf(" %c", &habitantes[i].corOlhos);

        // Atualiza maior idade
        if (habitantes[i].idade > maiorIdade)
        {
            maiorIdade = habitantes[i].idade;
        }

        // Conta homens
        if (habitantes[i].sexo == 'M' || habitantes[i].sexo == 'm')
        {
            countHomens++;
        }

        // Olhos castanhos e altura > 1.60
        if ((habitantes[i].corOlhos == 'C' || habitantes[i].corOlhos == 'c') && habitantes[i].altura > 1.60)
        {
            somaIdadeCastanhosAltos += habitantes[i].idade;
            countCastanhosAltos++;
        }

        // Mulheres entre 20 e 45 ou olhos verdes e altura < 1.70
        if ((habitantes[i].sexo == 'F' || habitantes[i].sexo == 'f') &&
            (habitantes[i].idade >= 20 && habitantes[i].idade <= 45))
        {
            mulheresEntre20e45_ouVerdesBaixas++;
        }
        else if ((habitantes[i].corOlhos == 'V' || habitantes[i].corOlhos == 'v') && habitantes[i].altura < 1.70)
        {
            mulheresEntre20e45_ouVerdesBaixas++;
        }
    }

    if (countCastanhosAltos > 0)
    {
        printf("Media de idade (olhos castanhos e altura > 1.60m): %.2f\n",
               (float)somaIdadeCastanhosAltos / countCastanhosAltos);
    }
    else
    {
        printf("Nenhum habitante com olhos castanhos e altura > 1.60m.\n");
    }

    printf("Maior idade entre os habitantes: %d\n", maiorIdade);
    printf("Quantidade de mulheres entre 20 e 45 anos ou com olhos verdes e altura < 1.70m: %d\n", mulheresEntre20e45_ouVerdesBaixas);
    printf("Percentual de homens: %.2f%%\n", ((float)countHomens / COUNT) * 100);

    return 0;
}
