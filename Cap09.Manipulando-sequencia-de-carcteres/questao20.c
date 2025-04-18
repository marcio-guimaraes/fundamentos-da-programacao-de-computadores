/*Faça um programa que receba uma frase e faça a criptografia dela, utilizando a representação ASCII de
cada caractere mais um espaço, e depois proceda à sua descriptografia*/

#include <stdio.h>

int main(){

    char frase[100];
    printf("Digite a frase: ");
    fgets(frase, sizeof(frase), stdin);


    int count = 0;
    while (frase[count] != '\n')
    {
        printf("%d ", (int)frase[count]);
        count++;
    }
    printf("\n%s", frase);
    





    return 0;
}