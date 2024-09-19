/*Faça um programa que receba uma frase e um caractere e verifique em que posição da frase o caractere
digitado aparece pela primeira vez.*/

#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    char caractere;
    char *posicao;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    posicao = strchr(frase, caractere);

    if (posicao != NULL) {
        printf("O caractere '%c' aparece pela primeira vez na posicao %d.\n", caractere, posicao - frase);
    } else {
        printf("O caractere '%c' não foi encontrado na frase.\n", caractere);
    }

    return 0;
}
