/*. Faça um programa que criptografe cada palavra de uma frase, substituindo por ? a última metade de
seus caracteres.
Exemplo:
A aula é boa mas poderia ser mais curta.
? au?? ? b?? m?? pod???? s?? ma?? cu???. */

#include <stdio.h>
#include <string.h>

void separar_palavras(char frase[100], char palavras[20][20], int *count);

int main()
{
    char frase[100];
    char palavras[20][20]; // Matriz para armazenar até 20 palavras com no máximo 20 caracteres cada
    int count = 0;

    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Remove o '\n' do final da frase, se houver
    frase[strcspn(frase, "\n")] = 0;

    // Separa as palavras
    separar_palavras(frase, palavras, &count);

    for (int i = 0; i < count; i++)
    {
        int tam = strlen(palavras[i]);
        for (int j = 0; j < tam; j++)
        {
            if (j < tam / 2)
            {
                printf("%c", palavras[i][j]);
            } else
            {
                printf("?");
            }
            
        }
        printf(" ");
    }
    printf("\n");

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