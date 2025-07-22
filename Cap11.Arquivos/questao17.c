/*Faça um programa para consultar a descrição de todos os produtos que possuem preço superior a R$ 
500,00. */

#include <stdio.h>

int main() {
    FILE *arquivo = fopen("produtos.txt", "r");
    int codigo;
    char desc[50];
    float preco;

    while (fscanf(arquivo, "%d %s %f", &codigo, desc, &preco) == 3) {
        if (preco > 500)
            printf("%s\n", desc);
    }

    fclose(arquivo);
    return 0;
}
