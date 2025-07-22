/*Faça um programa para aumentar os preços de todos os produtos em 15%. */

#include <stdio.h>

int main()
{
    FILE *arquivo = fopen("produtos.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    int codigo;
    char desc[50];
    float preco;

    while (fscanf(arquivo, "%d %s %f", &codigo, desc, &preco) == 3)
    {
        preco *= 1.15;
        fprintf(temp, "%d %s %.2f\n", codigo, desc, preco);
    }

    fclose(arquivo);
    fclose(temp);
    remove("produtos.txt");
    rename("temp.txt", "produtos.txt");
    return 0;
}
