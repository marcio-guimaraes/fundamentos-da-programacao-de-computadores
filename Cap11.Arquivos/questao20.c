/*Faça um programa para consultar todos os produtos cujos nomes comecem pela letra M. */

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *arquivo = fopen("produtos.txt", "r");
    int codigo;
    char desc[50];
    float preco;

    while (fscanf(arquivo, "%d %s %f", &codigo, desc, &preco) == 3)
    {
        if (desc[0] == 'M')
            printf("%d %s %.2f\n", codigo, desc, preco);
    }

    fclose(arquivo);
    return 0;
}
