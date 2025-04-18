/*. Faça um programa que receba uma frase e gere uma nova, retirando os espaços excedentes no início e no fim
da frase e entre suas palavras. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remover_espacos(int tam, char frase1[], char frase2[])
{

    int espaco = 1, j = 0;
    for (int i = 0; i < tam; i++)
    {
        if (isspace(frase1[i]))
        {
            if (espaco == 0)
            {
                espaco = 1;
                frase2[j++] = frase1[i];
            }
            else if (espaco == 1)
            {
                continue;
            }
        }
        else
        {
            frase2[j++] = frase1[i];
            espaco = 0;
        }
    }
    frase2[j] = '\0';
}

int main()
{

    char frase1[200];
    fgets(frase1, 200, stdin);

    // REMOVENDO O \n
    int tam = strlen(frase1);
    frase1[tam - 1] = '\0';
    tam--;

    char frase2[tam];

    remover_espacos(tam, frase1, frase2);

    printf("Frase = %s\n", frase2);

    return 0;
}