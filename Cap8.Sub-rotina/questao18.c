/*Crie uma sub-rotina que gere e mostre os três primeiros números primos acima de 100. */

#include <stdio.h>

void gerador_numeros_primos()
{

    int primos = 0, contador = 101;

    while (1)
    {
        if (primos == 3)
        {
            break;
        }

        int verificador = 0;
        for (int i = 1; i <= contador; i++)
        {
            if (contador % i == 0)
            {
                verificador++;
            }
        }
        if (verificador == 2)
        {
            primos++;
            printf("Numero primo = %d\n", contador);
        }
        contador++;
    }
}

int main()
{

    gerador_numeros_primos();

    return 0;
}