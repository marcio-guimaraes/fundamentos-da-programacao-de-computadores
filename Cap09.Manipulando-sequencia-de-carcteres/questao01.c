/*Faça um programa para criptografar uma frase dada pelo usuário. Na criptografia, a frase deverá ser invertida
e as consoantes deverão ser trocadas por #.
Exemplo:
Frase: EU ESTOU NA ESCOLA
Saída: A#O##E A# UO##E UE*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char frase[60];
    printf("Frase: ");
    fgets(frase, 60, stdin);

    int tam = strlen(frase);
    frase[tam - 1] = '\0';
    tam--;
    strrev(frase);

    for (int i = 0; i < tam; i++)
    {
        int a = toupper(frase[i]);
        if ((a >= 'A' && a <= 'Z') || (a >= 'A' && a <= 'Z'))
        {
            if (a != 'A' && a != 'E' && a != 'I' && a != 'O' && a != 'U')
            {
                frase[i] = '#';
            }
        }
    }

    printf("%s", frase);

    return 0;
}