/*Faça um programa que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal maior * dia-
gonal menor)/2.*/

#include <stdio.h>

int main()
{
  float d_maior, d_menor, x;
  scanf("%f %f", &d_maior, &d_menor);
  x = (d_maior * d_menor) / 2;
  printf("Resultado: %2.f\n", x);
  return 0;
}