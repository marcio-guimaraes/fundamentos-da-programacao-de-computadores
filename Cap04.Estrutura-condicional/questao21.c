/* Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
A procedência obedece à tabela a seguir.

CÓDIGO DE ORIGEM          ||    PROCEDÊNCIA
1...............................Sul..................................
2...............................Norte................................
3...............................Leste................................
4...............................Oeste................................
5 ou 6..........................Nordeste.............................
7 ou 8 ou 9.....................Sudeste..............................
10 a 20.........................Centro-oeste.........................
21 a 30.........................Nordeste.............................
*/

#include <stdio.h>

int main()
{
    float preco;
    int cod_origem;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite o codigo de origem do produto: ");
    scanf("%d", &cod_origem);

    if (cod_origem == 1)
    {
        printf("Procedencia: Sul\n");
    }
    else if (cod_origem == 2)
    {
        printf("Procedencia: Norte\n");
    }
    else if (cod_origem == 3)
    {
        printf("Procedencia: Leste\n");
    }
    else if (cod_origem == 4)
    {
        printf("Procedencia: Oeste\n");
    }
    else if (cod_origem == 5 || cod_origem == 6)
    {
        printf("Procedencia: Nordeste\n");
    }
    else if (cod_origem == 7 || cod_origem == 8 || cod_origem == 9)
    {
        printf("Procedencia: Sudeste\n");
    }
    else if (cod_origem >= 10 && cod_origem <= 20)
    {
        printf("Procedencia: Centro-oeste\n");
    }
    else if (cod_origem >= 21 && cod_origem <= 30)
    {
        printf("Procedencia: Nordeste\n");
    }
    else
    {
        printf("Codigo de origem invalido.\n");
    }
    
    return 0;
}
