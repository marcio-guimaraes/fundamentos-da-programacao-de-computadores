/*Faça um programa para incluir produtos no arquivo criado no Exercício 15, lembrando que não podem 
existir dois produtos com o mesmo código. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arquivo = fopen("produtos.txt", "a+");
    int codigo, cod;
    char desc[50], d[50];
    float preco, p;
    int existe = 0;

    printf("Código: ");
    scanf("%d", &codigo);

    rewind(arquivo);
    while (fscanf(arquivo, "%d %s %f", &cod, d, &p) == 3) {
        if (cod == codigo) {
            existe = 1;
            break;
        }
    }

    if (!existe) {
        printf("Descrição: ");
        scanf("%s", desc);
        printf("Preço: ");
        scanf("%f", &preco);
        fprintf(arquivo, "%d %s %.2f\n", codigo, desc, preco);
    }

    fclose(arquivo);
    return 0;
}
