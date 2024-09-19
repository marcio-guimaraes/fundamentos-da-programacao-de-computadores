/*Faça um programa que receba um verbo regular terminado em ER e mostre sua conjugação no presente.
Exemplo:
verbo: vender
Eu vendo
Tu vendes
Ele vende
Ela vende
Nós vendemos
Vós vendeis
Eles vendem
Elas vendem*/

#include <stdio.h>
#include <string.h>

int main()
{


    char verbo[10];
    printf("Verbo: ");
    scanf("%s", verbo);

    int tam = strlen(verbo);
    tam -= 2;
    verbo[tam] = '\0';

    // Vários prints só pra deixar organizado
    printf("Eu %so\n", verbo);
    printf("Tu %ses\n", verbo);
    printf("Ele %se\n", verbo);
    printf("Ela %se\n", verbo);
    printf("Nós %semos\n", verbo);
    printf("Vós %seis\n", verbo);
    printf("Eles %sem\n", verbo);
    printf("Elas %sem\n", verbo);

    return 0;
}