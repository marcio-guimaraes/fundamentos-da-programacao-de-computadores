/* Foi realizada uma pesquisa entre 20 habitantes de uma cidade. De cada habitante foram coletados estes dados:
idade, sexo, renda familiar e número de filhos. Faça um programa que leia esses dados, armazenando-os em
um vetor, calcule e mostre a média de salário entre os habitantes, a menor e a maior idade do grupo e a quan
tidade de mulheres com mais de dois filhos e com renda familiar inferior a R$ 600,00. */

#include <stdio.h>

#define COUNT 20

typedef struct
{
    int idade;
    char sexo;
    float rendaFamiliar;
    int numFilhos;
} Habitante;

int main()
{
    Habitante habitantes[COUNT];

    float somaSalarios = 0;
    int menorIdade = 10000, maiorIdade = 0, mulheresMais2filhos = 0;

    for (int i = 0; i < COUNT; i++)
    {
        printf("Idade: ");
        scanf("%d", &habitantes[i].idade);
        if (habitantes[i].idade > maiorIdade)
        {
            maiorIdade = habitantes[i].idade;
        }

        if (habitantes[i].idade < menorIdade)
        {
            menorIdade = habitantes[i].idade;
        }

        printf("Sexo (M/F): ");
        scanf(" %c", &habitantes[i].sexo);

        printf("Renda familiar: ");
        scanf("%f", &habitantes[i].rendaFamiliar);
        somaSalarios += habitantes[i].rendaFamiliar;

        printf("Numero de filhos: ");
        scanf("%d", &habitantes[i].numFilhos);

        if (habitantes[i].sexo == 'F' && habitantes[i].numFilhos > 2 && habitantes[i].rendaFamiliar < 600)
        {
            mulheresMais2filhos++;
        }
    }

    printf("Media salarial dos habitantes = %.2f\n", somaSalarios / COUNT);
    printf("Menor idade = %d\n", menorIdade);
    printf("Maior idade = %d\n", maiorIdade);
    printf("Mulheres com mais de 2 filhos e renda inferior a R$ 600 = %d\n", mulheresMais2filhos);

    return 0;
}
