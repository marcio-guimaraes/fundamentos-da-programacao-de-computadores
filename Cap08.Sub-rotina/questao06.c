/*Crie uma sub-rotina que receba como parâmetro a altura (alt) e o sexo de uma pessoa e retorne seu peso ideal.
Para homens, deverá calcular o peso ideal usando a fórmula: peso ideal = 72.7 *alt − 58; para mulheres: peso
ideal = 62.1 *alt − 44.7. */

#include <stdio.h>

int calcula_peso(float altura, char sexo);

int main()
{
    float altura, peso_ideal;
    char sexo;

    printf("Sexo (m ou f): ");
    scanf(" %c", &sexo);
    printf("Altura em metros: ");
    scanf("%f", &altura);

    peso_ideal = calcula_peso(altura, sexo);

    printf("Peso ideal = %.2f\n", peso_ideal);

    return 0;
}

int calcula_peso(float altura, char sexo)
{
    float peso_ideal;
    if (sexo == 'm')
    {
        peso_ideal = 72.2 * altura - 58;
        return peso_ideal;
    }
    else if (sexo == 'f')
    {
        peso_ideal = 62.1 * altura - 44.7;
        return peso_ideal;
    }
    else
    {
        printf("Sexo invalido\n");
        return 0;
    }
}