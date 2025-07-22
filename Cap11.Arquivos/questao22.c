/*Faça um programa para consultar os produtos com preços inferiores a R$ 15,00. */

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
    Produto p;

    while (fread(&p, sizeof(Produto), 1, arq))
        if (p.preco < 15)
            printf("%d %s %.2f\n", p.codigo, p.nome, p.preco);

    fclose(arq);
    return 0;
}
