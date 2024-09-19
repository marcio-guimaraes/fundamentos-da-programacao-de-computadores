/*Faça um programa que receba uma cadeia de caracteres e o número de repetições (limitado a 5) e gere uma
nova cadeia.
Exemplo:
cadeia = Ui!
Número = 3
Nova cadeia = Ui! Ui! Ui!*/

#include <stdio.h>
#include <string.h>

int main()
{

    char frase[12];
    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);

    int numeroRepeticoes;
    printf("Numero de repeticoes: ");
    scanf("%d", &numeroRepeticoes);

    if (numeroRepeticoes > 5)
    {
        numeroRepeticoes = 5;
    }

    int tam = strlen(frase);
    frase[tam - 1] = ' ';

    char repeticoes[60] = "";

    for (int i = 0; i < numeroRepeticoes; i++)
    {
        strcat(repeticoes, frase);
    }

    printf("%s\n", repeticoes);

    return 0;
}