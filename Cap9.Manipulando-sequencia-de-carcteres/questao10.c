/*Faça um programa que receba uma frase e um caractere e verifique em que posição da frase o caractere
digitado aparece pela última vez.*/

#include <stdio.h>
#include <string.h>

int main(){

    char frase[100];
    printf("Digite a frase: ");
    fgets(frase, 100, stdin);

    char caractere;
    printf("Digite o caractere: ");
    scanf("%c", &caractere);

    char *posicao = strrchr(frase, caractere);

    if (posicao != NULL)
    {
        printf("O caractere %c foi encontrado pela ultima vez na posicao %d\b", caractere, posicao - frase);
    } else{
        printf("O caractere %c nao foi encontrado\n", caractere);
    }
    


    return 0;

}