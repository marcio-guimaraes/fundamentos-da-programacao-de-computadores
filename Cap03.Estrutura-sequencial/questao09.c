/*Faça um programa que calcule e mostre a área de um trapézio.
Sabe-se que: A = ((base maior + base menor) * altura)/2*/

#include <stdio.h>

int main()
{
  double base_maior, base_menor, altura, x;
  scanf("%lf %lf %lf", &base_maior, &base_menor, &altura);

  x = (base_maior + base_menor) * altura / 2;

  printf("Resultado: %.3lf\n", x);

  return 0;
}