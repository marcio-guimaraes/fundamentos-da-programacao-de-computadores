/*Faça um programa que receba uma frase e mostre quantas letras, quantos números e quantos espaços
existem nela.
*/

#include <stdio.h>
#include <string.h>

int main()
{

    char frase[100];
    int letras = 0, numeros = 0, espacos = 0;

    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);

    strlwr(frase);

    int tam = strlen(frase);
    for (int i = 0; i < tam; i++)
    {
        if (frase[i] >= 'a' && frase[i] <= 'z')
        {
            letras++;
        }
        else if (frase[i] >= '0' && frase[i] <= '9')
        {
            numeros++;
        }
        else if (frase[i] == ' ')
        {
            espacos++;
        }
    }

    printf("Letras = %d\nNumeros = %d\nEspacos = %d\n", letras, numeros, espacos);

    return 0;
}