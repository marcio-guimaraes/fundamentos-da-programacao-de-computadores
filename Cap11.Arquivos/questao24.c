/*Faça um programa para excluir todos os produtos com preço superior a R$ 200,00. */

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

    while (fread(&p, sizeof(Produto), 1, arq))
        if (p.preco <= 200)
            fwrite(&p, sizeof(Produto), 1, temp);

    fclose(arq);
    fclose(temp);

    remove("produtos.txt");
    rename("temp.txt", "produtos.txt");

    return 0;
}
