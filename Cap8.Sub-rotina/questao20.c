/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e o
número de filhos. Faça uma sub-rotina que leia esses dados para um número não determinado de pessoas
e retorne a média de salário da população, a média do número de filhos, o maior salário e o percentual
de pessoas com salário inferior a R$ 380,00.*/

#include <stdio.h>

void calculo();

int main()
{

    calculo();

    return 0;
}

void calculo()
{
    float salario, somaSalario = 0, maiorSalario = 0;
    int numFilhos, somaFilhos = 0, countFilhos = 0, countSalario = 0, salarioInferior380 = 0;

    printf("Para encerrar coloque -1 em filhos\n");

    while (1)
    {

        // Media de filhos
        printf("Quantidade de filhos: ");
        scanf("%d", &numFilhos);
        if (numFilhos == -1)
        {
            break;
        }
        somaFilhos += numFilhos;
        countFilhos++;

        // Media de salarios
        printf("Salario: ");
        scanf("%f", &salario);
        somaSalario += salario;
        countSalario++;

        // Maior salario
        if (maiorSalario < salario)
        {
            maiorSalario = salario;
        }

        if (salario < 380)
        {
            salarioInferior380++;
        }
    }

    printf("Media de salario................................: %.2f\n", somaSalario / countSalario);
    printf("Media de filhos.................................: %.2f\n", (float)somaFilhos / countFilhos);
    printf("Maior salario...................................: %.2f\n", maiorSalario);
    printf("Percentual de pessoas com salario inferior a 380: %d%%\n", salarioInferior380 * 100 / countSalario );
}