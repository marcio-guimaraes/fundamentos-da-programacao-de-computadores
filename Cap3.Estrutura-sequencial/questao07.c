/*Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.*/

#include <stdio.h>

int main()
{
  float peso, emagrecer, engordar;
  printf("Informe sue peso: ");
  scanf("%f", &peso);
  engordar = peso * 1.15;
  emagrecer = peso * 0.80;
  printf("a)Seu peso caso engorde 15%%: %.2f\nb)Seu peso caso se emagrecer 20%%: %.2f\n", engordar, emagrecer);
  return 0;
}