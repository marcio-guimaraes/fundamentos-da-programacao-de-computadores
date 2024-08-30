/*Faça uma sub-rotina que receba um valor inteiro e verifique se ele é positivo ou negativo. */

#include <stdio.h>
void verifica(int numero)
{
    if (numero % 2 == 0)
    {
        printf("Par\n");
    }
    else
    {
        printf("Impar\n");
    }

}

int main()
{

    int numero;
    printf("Numero: ");
    scanf("%d", &numero);

    verifica(numero);

    return 0;
}