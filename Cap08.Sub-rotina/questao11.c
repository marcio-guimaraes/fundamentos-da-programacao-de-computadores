/*Faça uma sub-rotina que receba como parâmetro um valor inteiro e positivo N, indicando a quantidade
de parcelas de uma soma S, calculada pela fórmula:
S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... + (n² + 1)/(n + 3)*/

#include <stdio.h>
#include <math.h>

double calcular_soma(double numero);

int main()
{

    double numero;
    printf("Numero: ");
    scanf("%lf", &numero);

    double resultado = calcular_soma(numero);

    printf("Resultado = %.2lf\n", resultado);

    return 0;
}

double calcular_soma(double numero)
{

    double soma = 0;
    int count = (int)numero;

    for (int i = 1; i <= count; i++)
    {
        soma += (pow(i, 2) + 1) / (i + 3);
    }

    return soma;
}