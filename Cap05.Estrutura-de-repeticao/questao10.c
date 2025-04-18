/*Faça um programa que receba dez números, calcule e mostre a soma dos números pares e a soma dos
números primos.*/

#include <stdio.h>

int main()
{

    int numero, pares = 0, primos = 0;

    for (int contador = 0; contador < 10; contador++)
    {
        scanf("%d", &numero);

        // VERIFICA SE O NUMERO É PRIMO
        int i = 1, verificador = 0;
        while (i <= numero)
        {
            if (numero % i == 0)
            {
                verificador++;
            }
            i++;
        }
        if (verificador == 2)
        {
            primos = primos + numero;
        }

        if (numero % 2 == 0)
        {
            pares = pares + numero;
        }
    }

    printf("Soma dos primos = %d\n", primos);
    printf("Soma dos pares = %d\n", pares);

    return 0;
}