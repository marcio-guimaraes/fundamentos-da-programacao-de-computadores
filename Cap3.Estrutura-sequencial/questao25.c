/*Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e mostre:
a) a hora digitada convertida em minutos;
b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
c) o total dos minutos convertidos em segundos.*/

#include <stdio.h>

int main()
{
    int hora, minuto, a, b, c;

    printf("Digite a quantidade de horas: ");
    scanf("%d", &hora);
    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minuto);

    a = hora * 60;
    b = a + minuto;
    c = b * 60;

    printf("Horas convertida em minutos = %d\nMinutos totais = %d\nSegundos = %d", a, b, c);
    return 0;
}