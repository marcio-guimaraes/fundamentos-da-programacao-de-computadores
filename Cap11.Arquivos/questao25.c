/*Faça um programa para conceder um percentual de desconto, informado pelo usuário, aos produtos
cujos preços estejam entre dois valores, também informados pelo usuário. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int codigo;
    char nome[50];
    float preco;
} Produto;

int main()
{
    FILE *arq = fopen("produtos.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    Produto p;
    float perc, min, max;

    scanf("%f %f %f", &perc, &min, &max);

    while (fread(&p, sizeof(Produto), 1, arq))
    {
        if (p.preco >= min && p.preco <= max)
            p.preco -= p.preco * (perc / 100);
        fwrite(&p, sizeof(Produto), 1, temp);
    }

    fclose(arq);
    fclose(temp);

    remove("produtos.txt");
    rename("temp.txt", "produtos.txt");

    return 0;
}
