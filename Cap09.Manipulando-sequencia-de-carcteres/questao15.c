/*Faça um programa que receba uma frase e, cada vez que aparecer nela um algarismo entre 0 e 9, substi
tua-o, escrevendo-o por extenso.
Exemplo:
 Frase: EU ESTOU NA POLTRONA 5.
 saída: EU ESTOU NA POLTRONA CINCO.*/

#include <stdio.h>
#include <string.h>

void substituir_algarismos(char frase[], int tam);

int main()
{

    char frase[50];

    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);
    int tam = strlen(frase);
    frase[--tam] = '\0';

    substituir_algarismos(frase, tam);

    return 0;
}

void substituir_algarismos(char frase[], int tam)
{
    char *numeros_extenso[] = {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"};

    for (int i = 0; i < tam; i++)
    {
        if (frase[i] >= '0' && frase[i] <= '9')
        {
            int j = frase[i] - '0';
            printf("%s", numeros_extenso[j]);
        }
        else
        {
            printf("%c", frase[i]);
        }
    }
    printf("\n");
}