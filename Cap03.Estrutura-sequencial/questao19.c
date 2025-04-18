/*Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se usar 18 W
de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostre
a sua área (em m2) e a potência de iluminação que deverá ser utilizada.*/

#include <stdio.h>

int main()
{

    float lado1, lado2, m2, iluminacao;

    printf("Dimensao 1: ");
    scanf("%f", &lado1);
    printf("Dimensao 2: ");
    scanf("%f", &lado2);

    m2 = lado1 * lado2;
    iluminacao = m2 * 18;
    printf("Area = %.2f m2\nPotencia necessaria = %.2fW\n", m2, iluminacao);

    return 0;
}