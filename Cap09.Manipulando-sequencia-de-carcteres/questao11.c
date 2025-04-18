#include <stdio.h>
#include <string.h>

int verificarImpressao(int quantPalavrasImpressas, char palavra[], char palavrasImpressas[20][20]);
int contarVezesAparece(int tamFrase, int *quantPalavrasImpressas, char palavra[], char palavrasImpressas[20][20], char frase[]);

int main()
{

    char frase[100];
    char palavra[100];
    char palavrasImpressas[20][20];
    int quantPalavrasImpressas = 0;

    fgets(frase, sizeof(frase), stdin);

    int tamFrase = strlen(frase);
    frase[--tamFrase] = '\0';

    strupr(frase);

    int count = 0;
    while (count < tamFrase)
    {

        // Receber a palavra
        if (frase[count] >= 'A' && frase[count] <= 'Z')
        {
            int i = count, j = 0;
            while (frase[i] >= 'A' && frase[i] <= 'Z')
            {
                palavra[j] = frase[i];
                j++;
                i++;
            }
            palavra[j] = '\0';
            count = i;
        }

        //verifica se a palavra já foi impressa alguma vez
        int jaImpressa = verificarImpressao(quantPalavrasImpressas, palavra, palavrasImpressas);

        if (!jaImpressa)
        {
            //conta quantas vezes ela aparece
            int quantPalavra = contarVezesAparece(tamFrase, &quantPalavrasImpressas, palavra, palavrasImpressas, frase);
            printf("A palavra %s apareceu %d vezes na frase\n", palavra, quantPalavra);
        }

        count++;
    }

    return 0;
}

int verificarImpressao(int quantPalavrasImpressas, char palavra[], char palavrasImpressas[20][20])
{
    for (int i = 0; i < quantPalavrasImpressas; i++)
    {
        if (strcmp(palavrasImpressas[i], palavra) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int contarVezesAparece(int tamFrase, int *quantPalavrasImpressas, char palavra[], char palavrasImpressas[20][20], char frase[])
{
    strcpy(palavrasImpressas[*quantPalavrasImpressas], palavra);
    (*quantPalavrasImpressas)++;

    int tamPalavra = strlen(palavra);
    int quantPalavra = 0;

    for (int k = 0; k <= tamFrase - tamPalavra; k++)
    {
        if (strncmp(&frase[k], palavra, tamPalavra) == 0 &&
            (k + tamPalavra == tamFrase || frase[k + tamPalavra] == ' '))
        {
            quantPalavra++;
        }
    }

    return quantPalavra;
}
