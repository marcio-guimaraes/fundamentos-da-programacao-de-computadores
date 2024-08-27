/*Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
salário final.*/

#include <stdio.h>

int main()
{
  float fixo, comissao, salario;
  printf("Informe o seu salario fixo: ");
  scanf("%f", &fixo);
  printf("Informe a quantidade de vendas realizadas: ");
  scanf("%f", &comissao);
  salario = fixo + (fixo * 0.04 * comissao);
  printf("Salario final: %.2f\n", salario);
  return 0;
}