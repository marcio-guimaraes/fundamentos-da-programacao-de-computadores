/*Crie uma sub-rotina que receba como parâmetro um valor inteiro e positivo e retorne a soma dos divisores
desse valor.*/

#include <stdio.h>

int soma_divisores(int numero);

int main()
{

    int numero;
    printf("Numero: ");
    scanf("%d", &numero);

    int resultado = soma_divisores(numero);

    printf("Resultado = %d\n", resultado);

    return 0;
}

int soma_divisores(int numero)
{
    int soma = numero;
    for (int i = 1; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            soma += i;
        }
    }

    return soma;
}