/*Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando
 as seguintes fórmulas (onde h é a altura):
 
 ■ para homens: (72.7 * h) – 58.
 ■ para mulheres: (62.1 * h) – 44.7.
 */

#include <stdio.h>

int main()
{
    float altura, peso_ideal;
    char sexo;

    printf("Digite a altura (em metros): \n");
    scanf("%f", &altura);

    printf("Digite o sexo (M para masculino, F para feminino): \n");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm')
    {
        peso_ideal = (72.7 * altura) - 58;
        printf("Peso ideal para um homem com %.2f metros de altura: %.2f kg\n", altura, peso_ideal);
    }
    else if (sexo == 'F' || sexo == 'f')
    {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Peso ideal para uma mulher com %.2f metros de altura: %.2f kg\n", altura, peso_ideal);
    }
    else
    {
        printf("Sexo invalido.\n");
    }

    return 0;
}
