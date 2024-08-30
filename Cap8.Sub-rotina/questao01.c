/*Faça uma sub-rotina que receba um número inteiro e positivo N como parâmetro e retorne a soma dos números
inteiros existentes entre o número 1 e N (inclusive).*/

#include <stdio.h>

int soma(){
    int a, b, s;
    printf("Primeiro numero: ");
    scanf("%d%*c", &a);
    printf("Segundo numero: ");
    scanf("%d%*c", &b);

    s = a + b;

    return s;
}

int main(){
    int s;

    s = soma();

    printf("%d\n", s);
}