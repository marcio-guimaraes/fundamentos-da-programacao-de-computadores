/*Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo segundo.*/

#include <stdio.h>

int main()
{
  int a, b, x;
  scanf("%i %i", &a, &b);
  x = a - b;
  printf("Resultado = %i\n", x);
  return 0;
}