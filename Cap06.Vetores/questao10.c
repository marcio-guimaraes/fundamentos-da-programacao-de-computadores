/*. Faça um programa que preencha um vetor com dez números inteiros e um segundo vetor com cinco números inteiros, calcule e mostre dois vetores resultantes.
O primeiro vetor resultante será composto pela soma de cada número par do primeiro vetor somado a todos os números do segundo vetor.
O segundovetor resultante será composto pela quantidade de divisores que cada número ímpar do primeiro vetor tem no segundo vetor*/

#include <stdio.h>

int main()
{

    int count = 10, soma_vetor2 = 0, divisores = 0;
    int vetor1[count], vetor2[5], vetor_resultante1[count], vetor_resultante2[count];

    //INICIALIZANDO O VETOR COM VALORES INVÁLIDOS
    for (int i = 0; i < count; i++)
    {
        vetor_resultante1[i] = -1;
        vetor_resultante2[i] = -1;
    }

    // RECEBENDO OS VALORES DOS VETORES
    for (int i = 0; i < count; i++)
    {
        printf("Numeros vetor 1: ");
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Numeros vetor 2: ");
        scanf("%d", &vetor2[i]);
        soma_vetor2 += vetor2[i];
    }

    // SOMA DOS NÚMEROS PARES DO PRIMEIRO VETOR COM TODOS DO SEGUNDO VETOR
    int indice_resultante1 = 0;
    for (int i = 0; i < count; i++)
    {
        if (vetor1[i] % 2 == 0)
        {
            vetor_resultante1[indice_resultante1] = vetor1[i] + soma_vetor2;
            indice_resultante1++;
        }
    }

    // QUANTIDADE DE DIVISORES QUE CADA NÚMERO ÍMPAR DO PRIMEIRO VETOR TEM NO SEGUNDO VETOR
    int indice_resultante2 = 0;
    for (int i = 0; i < count; i++)
    {
        if (vetor1[i] % 2 != 0)
        {
            for (int j = 0; j < 5; j++)
            {
                if (vetor1[i] % vetor2[j] == 0)
                {
                    divisores++;
                }
            }
            vetor_resultante2[indice_resultante2] = divisores;
            indice_resultante2++;
            divisores = 0; // REZETANDO A CONTAGEM
        }
    }

    // PRINTANDO OS DOIS VETORES RESULTANTES
    printf("\nVetor Resultante 1 (Somas):\n");
    for (int i = 0; i < indice_resultante1; i++)
    {
        printf("Resultado %d: %d\n", i + 1, vetor_resultante1[i]);
    }

    printf("\nVetor Resultante 2 (Divisores):\n");
    for (int i = 0; i < indice_resultante2; i++)
    {
        printf("Resultado %d: %d\n", i + 1, vetor_resultante2[i]);
    }

    printf("Programa finalizado\n");

    return 0;
}
