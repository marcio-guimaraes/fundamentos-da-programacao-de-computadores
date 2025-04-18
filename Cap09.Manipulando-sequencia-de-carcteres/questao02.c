/*Faça um programa que receba uma frase e mostre cada palavra dela em uma linha separada.
Exemplo:
Frase: COMPUTADORES SÃO MÁQUINAS POTENTES
Saída:
COMPUTADORES
SÃO
MÁQUINAS
POTENTES*/

#include <stdio.h>
#include <string.h>

int main()
{

    char frase[100];

    fgets(frase, 100, stdin);

    int tam = strlen(frase);
    frase[tam - 1] = '\0';
    tam--;

    for (int i = 0; i < tam; i++)
    {
        if (frase[i] == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", frase[i]);
        }
    }

    return 0;
}