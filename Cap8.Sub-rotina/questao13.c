/*Foi realizada uma pesquisa entre 15 habitantes de uma região. Os dados coletados de cada habitante
foram: idade, sexo, salário e número de filhos.

Faça uma sub-rotina que leia esses dados armazenando-os em vetores. Depois, crie sub-rotinas que
recebam esses vetores como parâmetro e retornem a média de salário entre os habitantes, a menor e a
maior idade do grupo e a quantidade de mulheres com três filhos que recebem até R$ 500,00 (utilize
uma sub-rotina para cada cálculo)*/

#include <stdio.h>

#define HABITANTES 15

void armazenar(int idade[], int numFilhos[], char sexo[], float salario[]);
float calcular_salarios(float salario[]);
void calcular_idade(int idade[], int *maior, int *menor);
int quant_mulheres_3filhos(float salario[], int numFilhos[],char sexo[]);

int main()
{

    int idade[HABITANTES], numFilhos[HABITANTES];
    char sexo[HABITANTES];
    float salario[HABITANTES];

    armazenar(idade, numFilhos, sexo, salario);

    float media_salarios = calcular_salarios(salario);
    printf("Media de salarios = %.2f\n", media_salarios);

    int menor, maior;
    calcular_idade(idade, &maior, &menor);
    printf("Menor idade = %d\nMaior idade = %d\n", menor, maior);

    int quantidade = quant_mulheres_3filhos(salario, numFilhos, sexo);
    printf("Quantidade de mulheres com 3 filhos e renda ate 500R$ = %d\n", quantidade);

    return 0;
}

void armazenar(int idade[], int numFilhos[], char sexo[], float salario[])
{

    for (int i = 0; i < HABITANTES; i++)
    {
        printf("Idade da pessoa %d: ", i + 1);
        scanf("%d", &idade[i]);
        printf("Sexo da pessoa %d: ", i + 1);
        scanf(" %c", &sexo[i]);
        printf("Salario da pessoa %d: ", i + 1);
        scanf("%f", &salario[i]);
        printf("Numero de filhos da pessoa %d: ", i + 1);
        scanf("%d", &numFilhos[i]);
    }
}

float calcular_salarios(float salario[])
{
    float media = 0;

    for (int i = 0; i < HABITANTES; i++)
    {
        media += salario[i];
    }

    media /= HABITANTES;

    return media;
}

void calcular_idade(int idade[], int *maior, int *menor)
{
    *maior = idade[0];
    *menor = idade[0];

    for (int i = 0; i < HABITANTES; i++)
    {
        if (*maior < idade[i])
        {
            *maior = idade[i];
        }
        if (*menor > idade[i])
        {
            *menor = idade[i];
        }
    }
}

int quant_mulheres_3filhos(float salario[], int numFilhos[], char sexo[])
{

    int quantidade = 0;

    for (int i = 0; i < HABITANTES; i++)
    {
        if (sexo[i] == 'f' && salario[i] <= 500 && numFilhos[i] == 3)
        {
            quantidade++;
        }
    }

    return quantidade;
}