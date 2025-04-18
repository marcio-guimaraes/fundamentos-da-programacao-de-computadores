/*Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule
e mostre a quantidade de salários mínimos que esse funcionário ganha.*/

#include <stdio.h>

int main()
{
  float salario, minimo, x;

  printf("Valor do seu salario: ");
  scanf("%f", &salario);
  printf("Valor do salario minimo: ");
  scanf("%f", &minimo);

  x = salario / minimo;
  printf("Voce recebe %.2f salarios minimos\n", x);

  return 0;
}