/*
 Um funcionário recebe um salário fixo mais 6% de comissão sobre suas vendas. Crie um algoritmo que leia
 o salário do funcionário, o valor total de suas vendas, calcule a comissão e o salário final. O programa deverá
 mostrar todos os valores calculados.
*/

#include <stdio.h>

#define TAXA_COMISSAO 0.06  

int main()
{
    float salarioFixo, totalVendas, valorComissao, salarioFinal;

    printf("Digite o salario fixo do funcionario: R$ ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor total das vendas: R$ ");
    scanf("%f", &totalVendas);

    valorComissao = totalVendas * TAXA_COMISSAO;
    salarioFinal = salarioFixo + valorComissao;

    printf("\n--- Relatorio Final ---\n");
    printf("Salario Fixo: R$ %.2f\n", salarioFixo);
    printf("Total de Vendas: R$ %.2f\n", totalVendas);
    printf("Valor da Comissao (6%%): R$ %.2f\n", valorComissao);
    printf("Salario Final: R$ %.2f\n", salarioFinal);

    return 0;
}