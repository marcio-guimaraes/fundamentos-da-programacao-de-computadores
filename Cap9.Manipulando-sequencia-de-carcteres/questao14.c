/*Faça um programa que receba uma frase e converta as vogais de suas palavras para maiúsculo e as con
soantes para minúsculo. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char frase[100];

    printf("Digite a frase: ");
    fgets(frase, sizeof(frase), stdin);
    int tam = strlen(frase);
    frase[tam - 1] = '\0';
    tam--;

    strlwr(frase);

    for (int i = 0; i < tam; i++)
    {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
        {
            frase[i] = toupper(frase[i]);
        }
    }

    printf("%s\n", frase);

    return 0;
}