/*Faça um programa que receba uma frase e faça a criptografia dela, substituindo as vogais pelos seguintes
números: a = 1, e = 2, i = 3, o = 4 e u = 5.*/

#include <stdio.h>

int main()
{

    char frase[100];
    printf("Digite a frase: ");
    fgets(frase, sizeof(frase), stdin);

    int count = 0;

    while (frase[count] != '\n')
    {
        switch (frase[count])
        {
        case 'a':
            printf("1");
            break;
        case 'e':
            printf("2");
            break;
        case 'i':
            printf("3");
            break;
        case 'o':
            printf("4");
            break;
        case 'u':
            printf("5");
            break;

        default:
            printf("%c", frase[count]);
            break;
        }
        count++;
    }

    return 0;
}