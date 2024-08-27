/*Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, consi-
derando peso 2 para a primeira e peso 3 para a segunda.*/

#include <stdio.h>

int main()
{
  int a, b, media;
  scanf("%i %i", &a, &b);
  media = (a * 2 + b * 3) / 5;
  printf("Resultado = %i\n", media);
  return 0;
}