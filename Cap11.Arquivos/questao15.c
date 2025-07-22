/*Faça um programa para criar um arquivo chamado PRODUTOS.DAT, em que cada registro será composto
pelos seguintes campos: codigo, descricao e preco. */

#include <stdio.h>

typedef struct
{
    int codigo;
    char descricao[101];
    float preco;
} Produto;

int main()
{
    FILE *f = fopen("produtos.txt", "w");
    if (!f)
        return 1;
    fclose(f);
    return 0;
}
