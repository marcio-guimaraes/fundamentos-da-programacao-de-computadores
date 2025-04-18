/*Faça um programa que receba cinco números e mostre a saída a seguir:
Digite o 1º número 5
Digite o 2º número 3
Digite o 3º número 2
Digite o 4º número 0
Digite o 5º número 2
Os números digitados foram: 5 + 3 + 2 + 0 + 2 = 12 */

#include <stdio.h>

int main()
{

    int numeros[5], resultado = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Numero: ");
        scanf("%d", &numeros[i]);
        resultado += numeros[i];
    }

    printf("Os numeros digitados foram: %d + %d + %d + %d + %d = %d\n", numeros[0], numeros[1], numeros[2], numeros[3], numeros[4], resultado);

    return 0;
}