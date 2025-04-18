/*Faça um programa que receba uma frase e realize a criptografia dela, trocando a primeira e a última
palavra de lugar.
Exemplo:
Frase: ESTRELAS E LUA ESTÃO NO CÉU
Saída: CÉU E LUA ESTÃO NO ESTRELAS*/

#include <stdio.h>
#include <string.h>

void separar_palavras(char frase[100], char palavras[20][20], int *count);

int main()
{

    char frase[100];
    char palavras[20][20];
    int count = 0;

    printf("Digite a frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = 0;

    separar_palavras(frase, palavras, &count);

    char resultado[100] = "";

    strcat(resultado, palavras[count - 1]);
    strcat(resultado, " ");

    for (int i = 1; i < count - 1; i++)
    {
        strcat(resultado, palavras[i]);
        strcat(resultado, " ");
    }

    strcat(resultado, palavras[0]);

    printf("%s\n", resultado);

    return 0;
}

void separar_palavras(char frase[100], char palavras[20][20], int *count)
{

    char *token = strtok(frase, " ");
    while (token != NULL)
    {
        strcpy(palavras[*count], token);
        (*count)++;
        token = strtok(NULL, " ");
    }
}