/* Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir.
Para idade inferior a 5, deverá mostrar mensagem.

CATEGORIA                   ||    IDADE
Infantil..........................5 a 7...........
Juvenil...........................8 a 10..........
Adolescente.......................11 a 15.........
Adulto............................16 a 30.........
Sênior............................Acima de 30.....
*/

#include <stdio.h>
int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade > 0 && idade < 5)
    {
        printf("Nao pode competir\n");
    }
    else if (idade > 5 && idade <= 7)
    {
        printf("Infantil\n");
    }
    else if (idade > 7 && idade <= 10)
    {
        printf("Juvenil\n");
    }
    else if (idade > 10 && idade <= 15)
    {
        printf("Adolescente\n");
    }
    else if (idade > 15 && idade <= 30)
    {
        printf("Adulto\n");
    }
    else if (idade > 30)
    {
        printf("Senior\n");
    }

    return 0;
}