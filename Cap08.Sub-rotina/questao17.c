/*Elabore uma sub-rotina que calcule o máximo divisor comum (MDC) de dois números recebidos como
parâmetros. */

#include <stdio.h>

int calcular_mdc(int num1, int num2);

int main()
{

    int num1, num2;
    printf("Digite o primeiro e o segundo numero: ");
    scanf("%d %d", &num1, &num2);

    int mdc = calcular_mdc(num1, num2);

    printf("MDC = %d\n", mdc);

    return 0;
}

int calcular_mdc(int num1, int num2)
{

    if (num1 < num2)
    {
        int aux = num1;
        num1 = num2;
        num2 = aux;
    }

    while (num2 != 0)
    {
        int resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    }

    return num1;
}