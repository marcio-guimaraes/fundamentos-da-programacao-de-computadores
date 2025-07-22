/*Faça um programa para aumentar os preços dos produtos em R$ 10,00, mas apenas daqueles que já
custam mais de R$ 100,00. */

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
        if (preco > 100)
            preco += 10;
        fprintf(temp, "%d %s %.2f\n", codigo, desc, preco);
    }

    fclose(arquivo);
    fclose(temp);
    remove("produtos.txt");
    rename("temp.txt", "produtos.txt");
    return 0;
}
