/*Faça um programa que leia cinco grupos de quatro valores (A, B, C, D) e mostre-os na ordem lida.
Em seguida, organize-os em ordem crescente e decrescente.*/

#include <stdio.h>

int main()
{

    float controle = 0;
    float n1, n2, n3, n4;
    float nMaior, nMedio1, nMedio2, nMenor;

    while (controle < 5)
    {
        //RECEBE OS VALORES
        printf("Insira 4 numeros diversos: ");
        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
        printf("\n\nOs valores inseridos foram: %.2f, %.2f, %.2f, %.2f\n", n1, n2, n3, n4);

        //COMPARAÇÃO E ORGANIZAÇÃO DOS VALORES
        if (n1 > n2 && n1 > n3 && n1 > n4)
        {
            nMaior = n1;

            if (n2 > n3 && n3 > n4)
            {
                nMedio1 = n2;
                nMedio2 = n3;
                nMenor = n4;
            }

            else if (n2 > n4 && n4 > n3)
            {
                nMedio1 = n2;
                nMedio2 = n4;
                nMenor = n3;
            }

            else if (n3 > n2 && n2 > n4)
            {
                nMedio1 = n3;
                nMedio2 = n2;
                nMenor = n4;
            }

            else if (n3 > n4 && n4 > n2)
            {
                nMedio1 = n3;
                nMedio2 = n4;
                nMenor = n2;
            }

            else if (n4 > n2 && n2 > n3)
            {
                nMedio1 = n4;
                nMedio2 = n2;
                nMenor = n3;
            }

            else if (n4 > n3 && n3 > n2)
            {
                nMedio1 = n4;
                nMedio2 = n3;
                nMenor = n2;
            }
        }

        if (n2 > n1 && n2 > n3 && n2 > n4)
        {
            nMaior = n2;

            if (n1 > n3 && n3 > n4)
            {
                nMedio1 = n1;
                nMedio2 = n3;
                nMenor = n4;
            }

            else if (n1 > n4 && n4 > n3)
            {
                nMedio1 = n1;
                nMedio2 = n4;
                nMenor = n3;
            }

            else if (n3 > n1 && n1 > n4)
            {
                nMedio1 = n3;
                nMedio2 = n1;
                nMenor = n4;
            }

            else if (n3 > n4 && n4 > n1)
            {
                nMedio1 = n3;
                nMedio2 = n4;
                nMenor = n1;
            }

            else if (n4 > n1 && n1 > n3)
            {
                nMedio1 = n4;
                nMedio2 = n1;
                nMenor = n3;
            }

            else if (n4 > n3 && n3 > n1)
            {
                nMedio1 = n4;
                nMedio2 = n3;
                nMenor = n1;
            }
        }

        if (n3 > n1 && n3 > n2 && n3 > n4)
        {
            nMaior = n3;

            if (n1 > n2 && n2 > n4)
            {
                nMedio1 = n1;
                nMedio2 = n2;
                nMenor = n4;
            }

            else if (n1 > n4 && n4 > n2)
            {
                nMedio1 = n1;
                nMedio2 = n4;
                nMenor = n2;
            }

            else if (n2 > n1 && n1 > n4)
            {
                nMedio1 = n2;
                nMedio2 = n1;
                nMenor = n4;
            }

            else if (n2 > n4 && n4 > n1)
            {
                nMedio1 = n2;
                nMedio2 = n4;
                nMenor = n1;
            }

            else if (n4 > n1 && n1 > n2)
            {
                nMedio1 = n4;
                nMedio2 = n1;
                nMenor = n2;
            }

            else if (n4 > n2 && n2 > n1)
            {
                nMedio1 = n4;
                nMedio2 = n2;
                nMenor = n1;
            }
        }

        if (n4 > n1 && n4 > n2 && n4 > n3)
        {
            nMaior = n4;

            if (n1 > n3 && n3 > n2)
            {
                nMedio1 = n1;
                nMedio2 = n3;
                nMenor = n2;
            }

            else if (n1 > n2 && n2 > n3)
            {
                nMedio1 = n1;
                nMedio2 = n2;
                nMenor = n3;
            }

            else if (n3 > n1 && n1 > n2)
            {
                nMedio1 = n3;
                nMedio2 = n1;
                nMenor = n2;
            }

            else if (n3 > n2 && n2 > n1)
            {
                nMedio1 = n3;
                nMedio2 = n2;
                nMenor = n1;
            }

            else if (n2 > n1 && n1 > n3)
            {
                nMedio1 = n2;
                nMedio2 = n1;
                nMenor = n3;
            }

            else if (n2 > n3 && n3 > n1)
            {
                nMedio1 = n2;
                nMedio2 = n3;
                nMenor = n1;
            }
        }


        //IMPRIME AS DUAS SEQUÊNCIAS
        printf("\nNumeros em ordem crescente: %.2f, %.2f, %.2f, %.2f.", nMenor, nMedio2, nMedio1, nMaior);
        printf("\nNumeros em ordem decrescente: %.2f, %.2f, %.2f, %.2f.\n\n", nMaior, nMedio1, nMedio2, nMenor);

        controle++;
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;
}