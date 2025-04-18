/*Faça um programa que receba uma frase e um caractere e verifique se o caractere digitado é encontrado na
frase ou não e, se for encontrado, quantas vezes isso acontece*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char caractere;
    char frase[100];
    int quantidade = 0;

    printf("Frase: ");
    fgets(frase, 100, stdin);
    int tam = strlen(frase);
    frase[tam - 1] = '\0';
    tam--;

    printf("Caractere: ");
    scanf("%c", &caractere);

    for (int i = 0; i < tam; i++)
    {
        if (frase[i] == tolower(caractere) || frase[i] == toupper(caractere))
        {
            quantidade++;
        }
    }

    if (quantidade == 0)
    {
        printf("Nao ha o caractere na frase\n");
    }
    else
    {
        printf("O caractere aparece %d vez(es) na frase\n", quantidade);
    }

    return 0;
}