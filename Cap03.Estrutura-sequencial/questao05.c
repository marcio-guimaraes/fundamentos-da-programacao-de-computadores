/*Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10%.*/

#include <stdio.h>

int main()
{
  float a;
  scanf("%f", &a);
  printf("Resultado = %.2f\n", a * 0.9);
  return 0;
}