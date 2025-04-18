/*Faça um programa que receba uma frase e, a cada duas palavras dela, realize uma criptografia, ou seja:
a primeira letra da primeira palavra da frase concatenada com a última letra da segunda palavra, concatenada com a segunda letra
da primeira palavra e com a penúltima letra da segunda palavra e assim por diante.
No caso de quantidade de palavras ímpares, a última palavra deve simplesmente ser invertida. 

Exemplos:
Frase: Aula com bola
Saída: Amuolca alob
Frase: Casa com janelas coloridas
Saída: Cmaosca jsaandeilraosloc*/

#include <stdio.h>
#include <string.h>

void separar_palavras(char frase[100], char palavras[20][20], int *count);
void criptografar_palavras(char palavras[20][20], int count, char resultado[100]);

int main()
{
    char frase[100];
    char palavras[20][20]; // Matriz para armazenar até 20 palavras com no máximo 20 caracteres cada
    int count = 0;
    char resultado[100] = "";

    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Remove o '\n' do final da frase, se houver
    frase[strcspn(frase, "\n")] = 0;

    // Separa as palavras
    separar_palavras(frase, palavras, &count);

    // Criptografa as palavras
    criptografar_palavras(palavras, count, resultado);

    // Exibe o resultado criptografado
    printf("Frase criptografada: %s\n", resultado);

    return 0;
}

void separar_palavras(char frase[100], char palavras[20][20], int *count)
{
    // Separar as palavras da frase
    char *token = strtok(frase, " ");
    while (token != NULL)
    {
        strcpy(palavras[*count], token); // Copia a palavra para a linha correspondente na matriz
        (*count)++;                      // Incrementa o número de palavras
        token = strtok(NULL, " ");       // Pega a próxima palavra
    }
}

void criptografar_palavras(char palavras[20][20], int count, char resultado[100])
{
    int i, j, k;
    char temp[100];

    for (i = 0; i < count; i += 2)
    {
        if (i + 1 < count) // Se houver um par de palavras
        {
            int len1 = strlen(palavras[i]);
            int len2 = strlen(palavras[i + 1]);
            int min_len = len1 < len2 ? len1 : len2;

            // Intercala as letras da primeira e da segunda palavra
            k = 0;
            for (j = 0; j < min_len; j++)
            {
                temp[k++] = palavras[i][j];               // Letra da primeira palavra
                temp[k++] = palavras[i + 1][len2 - 1 - j]; // Letra da segunda palavra (de trás para frente)
            }

            // Adiciona o restante da palavra maior, se houver
            while (j < len1)
                temp[k++] = palavras[i][j++]; // Completa com o resto da primeira palavra

            while (j < len2)
                temp[k++] = palavras[i + 1][len2 - 1 - j++]; // Completa com o resto da segunda palavra

            temp[k] = '\0'; // Termina a string temporária
            strcat(resultado, temp); // Adiciona a palavra criptografada ao resultado
        }
        else // Para a última palavra, se não houver par, inverte a palavra
        {
            int len = strlen(palavras[i]);
            for (j = len - 1; j >= 0; j--)
            {
                temp[len - 1 - j] = palavras[i][j];
            }
            temp[len] = '\0';
            strcat(resultado, temp); // Adiciona a palavra invertida ao resultado
        }
    }
}
