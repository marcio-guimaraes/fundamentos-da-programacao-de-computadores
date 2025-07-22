/*Faça um programa para consultar todos os produtos com nomes iniciados por uma letra digitada pelo
usuário e com preços entre dois valores também fornecidos pelo usuário. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
    char letra;
    float min, max;

    scanf(" %c", &letra);
    scanf("%f %f", &min, &max);

    while (fread(&p, sizeof(Produto), 1, arq))
        if (tolower(p.nome[0]) == tolower(letra) && p.preco >= min && p.preco <= max)
            printf("%d %s %.2f\n", p.codigo, p.nome, p.preco);

    fclose(arq);
    return 0;
}
