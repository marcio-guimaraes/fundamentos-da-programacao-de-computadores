/*Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa em anos;
b) a idade dessa pessoa em meses;
c) a idade dessa pessoa em dias;
d) a idade dessa pessoa em semanas.*/

#include <stdio.h>

int main()
{
  int nascimento, atual, ano, mes, semana, dias;

  printf("Digite seu ano de nascimento e depois o ano atual: ");
  scanf("%d %d", &nascimento, &atual);

  ano = atual - nascimento;
  mes = ano * 12;
  semana = mes * 4;
  dias = semana * 7;

  printf("Anos : %d\nMeses: %d\nSemanas: %d\nDias: %d\n", ano, mes, semana, dias);

  return 0;
}