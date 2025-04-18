/*Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.*/

#include <stdio.h>

int main()
{
  float peso;
  printf("Seu peso em KG: ");
  scanf("%f", &peso);
  peso = peso * 1000;
  printf("Seu peso em gramas: %.0f\n", peso);
  return 0;
}