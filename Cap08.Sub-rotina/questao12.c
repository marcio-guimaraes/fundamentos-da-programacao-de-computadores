/*Crie uma sub-rotina que receba como parâmetro dois valores X e Z, calcule e retorne X^Z
 sem utilizar funções ou operadores de potência prontos. */

#include <stdio.h>

int calcular_potencia(int x, int z);

int main()
{

    int x, z;
    printf("Valores de X e Z: ");
    scanf("%d %d", &x, &z);

    int resultado = calcular_potencia(x, z);
    printf("Resultado = %d\n", resultado);

    return 0;
}

int calcular_potencia(int x, int z)
{
    int mult = x;
    for (int i = 1; i < z; i++)
    {
        mult *= x;
    }

    return mult;
}