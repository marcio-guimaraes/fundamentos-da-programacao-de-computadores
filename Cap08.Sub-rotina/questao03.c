/*Elabore uma sub-rotina que receba dois números como parâmetros e retorne 0, se o primeiro número for
divisível pelo segundo número. Caso contrário, deverá retornar o próximo diviso*/
#include <stdio.h>

int divisor()
{
    int num1, num2;

    printf("Numero 1: ");
    scanf("%d", &num1);
    printf("Numero 2: ");
    scanf("%d", &num2);

    if (num1 % num2 == 0)
    {
        return 0;
    }
    else
    {
        int count = num2;
        while (1)
        {
            if (num1 % count == 0)
            {
                return count;
            }
            count++;
        }
    }
}

int main()
{
    int resultado = divisor();

    printf("Resultado = %d\n", resultado);

    return 0;
}