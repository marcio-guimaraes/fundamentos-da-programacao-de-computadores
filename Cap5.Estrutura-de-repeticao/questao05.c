/*Faça um programa que mostre as tabuadas dos números de 1 a 10. */

#include <stdio.h>

int main()
{

    int numero = 1, contador = 0;
    while (numero <= 10)
    {
        printf("Tabuada do %d\n", numero);
        
        while (contador <= 10)
        {
            printf("%d x %d = %d\n", numero, contador, numero * contador);
            contador++;
        }

        numero++;
        contador = 0;

        printf("\n");
    }

    return 0;
}