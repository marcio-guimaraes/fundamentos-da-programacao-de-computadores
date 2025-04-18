/*Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.
Exemplo:
Digite um número: 5
5 × 0 = 0
5 × 1 = 5
5 × 2 = 10
5 × 3 = 15
5 × 4 = 20

5 × 5 = 25
5 × 6 = 30
5 × 7 = 35
5 × 8 = 40
5 × 9 = 45
5 × 10 = 50*/

#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um numero para ver a tabuada dele: ");
    scanf("%d", &numero);
    printf("%d x 0 = %d\n", numero, numero * 0);
    printf("%d x 1 = %d\n", numero, numero * 1);
    printf("%d x 2 = %d\n", numero, numero * 2);
    printf("%d x 3 = %d\n", numero, numero * 3);
    printf("%d x 4 = %d\n", numero, numero * 4);
    printf("%d x 5 = %d\n", numero, numero * 5);
    printf("%d x 6 = %d\n", numero, numero * 6);
    printf("%d x 7 = %d\n", numero, numero * 7);
    printf("%d x 8 = %d\n", numero, numero * 8);
    printf("%d x 9 = %d\n", numero, numero * 9);
    printf("%d x 10 = %d\n", numero, numero * 10);
    return 0;
}