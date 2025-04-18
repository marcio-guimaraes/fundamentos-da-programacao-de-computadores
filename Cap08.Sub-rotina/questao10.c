/*Elabore uma sub-rotina que receba como parâmetro um valor N (inteiro e maior ou igual a 1) e
determine o valor da sequência S, descrita a seguir:
S = 1 + 1/2 + 1/3...
Obs: A quantidade de parcelas que compõe S é igual a N
*/

#include <stdio.h>

float sequencia(int numero);

int main()
{

    int numero;
    printf("Numero: ");
    scanf("%d", &numero);

    float resultado = sequencia(numero);

    printf("Resultado = %.2f\n", resultado);

    return 0;
}

float sequencia(int numero)
{
    float soma = 0;

    for (int i = 1; i <= numero; i++)
    {
        soma += numero/i;
    }
    return soma;
}