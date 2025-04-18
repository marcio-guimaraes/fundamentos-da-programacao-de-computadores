/*Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
com validações.*/

#include <stdio.h>

int main()
{
  int a, b;
  scanf("%i %i", &a, &b);
  printf("Resultado = %i\n", a / b);
  return 0;
}