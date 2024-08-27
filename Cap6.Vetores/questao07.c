/*Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de números
negativos e a soma dos números positivos desse vetor. */

#include <stdio.h>

int main()
{

    int count = 10, total_negativos = 0;
    float numeros[count], soma_positivos = 0;

    for (int i = 0; i < count; i++)
    {
        printf("Numero: ");
        scanf("%f", &numeros[i]);

        if (numeros[i] < 0)
        {
            total_negativos++;
        }
        else
        {
            soma_positivos = soma_positivos + numeros[i];
        }
    }

    printf("Total de numeros negativos = %d\n", total_negativos);
    printf("Soma dos numeros positivos =  %.2f\n", soma_positivos);

    return 0;
}