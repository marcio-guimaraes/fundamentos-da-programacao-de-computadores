/*Faça um programa que apresente o menu de opções a seguir: 
Menu de opções:
1. Média aritmética 
2. Média ponderada 
3. Sair

Digite a opção desejada.
Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada. 
Na opção 3: sair do programa.*/

#include <stdio.h>

int main()
{
    int menu;
    float n1, n2, n3, p1, p2, p3;

    while (1)
    {
        printf("Opcao desejada: ");
        scanf("%d", &menu);
        if (menu == 3)
        {
            break;
        }

        if (menu == 1)
        {
            printf("Nota 1: ");
            scanf("%f", &n1);

            printf("Nota 2: ");
            scanf("%f", &n2);

            printf("Media = %.2f\n", (n1 + n2) / 2);
        }
        else if (menu == 2)
        {
            printf("Nota 1: ");
            scanf("%f", &n1);
            printf("Peso 1: ");
            scanf("%f", &p1);

            printf("Nota 2: ");
            scanf("%f", &n2);
            printf("Peso 2: ");
            scanf("%f", &p2);

            printf("Nota 3: ");
            scanf("%f", &n3);
            printf("Peso 3: ");
            scanf("%f", &p3);

            printf("Media ponderada = %.2f\n", (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3));
        }
    }

    return 0;
}