/*Crie um programa que receba três valores (obrigatoriamente maiores que zero), representando as medi
das dos três lados de um triângulo.

 Elabore sub-rotinas para:
■ determinar se esses lados formam um triângulo
(sabe-se que, para ser triângulo, a medida de um lado qualquer deve ser inferior ou igual à soma das medidas dos outros dois).
■ determinar e mostrar o tipo de triângulo (equilátero, isósceles ou escaleno), caso as medidas formem um triângulo.
Todas as mensagens deverão ser mostradas no programa principal*/

#include <stdio.h>

void triangulo(float a, float b, float c);

int main()
{

    float ladoA, ladoB, ladoC;
    printf("Medidas dos 3 lados: ");
    scanf("%f %f %f", &ladoA, &ladoB, &ladoC);

    triangulo(ladoA, ladoB, ladoC);

    return 0;
}

void triangulo(float a, float b, float c)
{

    int verificador = 0;

    if (a + b > c && a + c > b && b + c > a)
    {
        verificador++;

        if (a == b)
        {
            verificador++;
        }
        if (a == c || b == c)
        {
            verificador++;
        }
    }

    switch (verificador)
    {
    case 0:
        printf("Nao eh um triangulo\n");
        break;

    case 1:
        printf("Triangulo escaleno\n");
        break;

    case 2:
        printf("Trinagulo isoceles\n");
        break;

    case 3:
        printf("Triangulo equilatero\n");
        break;

    default:
        break;
    }
}