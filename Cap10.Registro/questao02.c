/*
2. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre salário, 
idade e número de filhos. Faça um programa que leia esses dados de 20 pessoas, calcule e mostre: 
• A média de salário da população; 
• A média do número de filhos; 
• O maior salário; 
• O percentual de mulheres com salário superior a R$ 1.000,00.
*/

#include <stdio.h>

#define COUNT 20

typedef struct {
    float salario;
    int idade;
    int filhos;
    char sexo; // 'M' para masculino, 'F' para feminino
} Habitante;

int main(){

    Habitante habitantes[COUNT];
    float somaSalario = 0.0, maiorSalario = 0.0;
    int somaFilhos = 0, contMulheres = 0, contMulheresSalarioAlto = 0;

    for (int i = 0; i < COUNT; i++)
    {
        printf("Digite o salario do habitante %d: ", i + 1);
        scanf("%f", &habitantes[i].salario);
        printf("Digite a idade do habitante %d: ", i + 1);
        scanf("%d", &habitantes[i].idade);
        printf("Digite o numero de filhos do habitante %d: ", i + 1);
        scanf("%d", &habitantes[i].filhos);
        printf("Digite o sexo do habitante %d (M/F): ", i + 1);
        scanf(" %c", &habitantes[i].sexo);

        somaSalario += habitantes[i].salario;
        somaFilhos += habitantes[i].filhos;

        if (habitantes[i].salario > maiorSalario) {
            maiorSalario = habitantes[i].salario;
        }

        if (habitantes[i].sexo == 'F' && habitantes[i].salario > 1000.0) {
            contMulheresSalarioAlto++;
        }

        if (habitantes[i].sexo == 'F') {
            contMulheres++;
        }
    }

    float mediaSalario = somaSalario / COUNT;
    float mediaFilhos = (float)somaFilhos / COUNT;
    float percentualMulheresSalarioAlto = (contMulheresSalarioAlto / (float)contMulheres) * 100.0;


    printf("Media de salario: R$%.2f\n", mediaSalario);
    printf("Media de numero de filhos: %.2f\n", mediaFilhos);
    printf("Maior salario: R$%.2f\n", maiorSalario);
    printf("Percentual de mulheres com salario superior a R$1.000,00: %.2f%%\n", percentualMulheresSalarioAlto);

    return 0;
}