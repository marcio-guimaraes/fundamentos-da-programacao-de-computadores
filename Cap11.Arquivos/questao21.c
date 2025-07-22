/*Faça um programa para excluir produtos do arquivo criado no Exercício 15. */

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
    int cod;
    Produto p;

    scanf("%d", &cod);

    while (fread(&p, sizeof(Produto), 1, arq))
        if (p.codigo != cod)
            fwrite(&p, sizeof(Produto), 1, temp);

    fclose(arq);
    fclose(temp);

    remove("produtos.txt");
    rename("temp.txt", "produtos.txt");

    return 0;
}
