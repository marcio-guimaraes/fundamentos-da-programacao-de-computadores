/*. Faça um programa que receba duas cadeias de caracteres e verifique se a primeira cadeia digitada é permutação da segunda cadeia, ou seja, se todos os caracteres da primeira cadeia estão presentes na segunda cadeia,
mesmo que em posições diferentes.
Exemplo:
“abccde” é uma permutação de “cbadce”, mas não é de “abcdef” nem de “abcde”
*/

#include <stdio.h>
#include <string.h>

int main()
{

    char str1[10], str2[10];

    printf("String 1: ");
    fgets(str1, 10, stdin);
    printf("String 2: ");
    fgets(str2, 10, stdin);

    int tam = strlen(str1);
    str1[tam - 1] = '\0';
    tam--;
    int tam2 = strlen(str2);
    str2[tam2 - 1] = '\0';
    tam2--;

    int auxiliar[tam2];

    for (int i = 0; i < tam2; i++)
    {
        auxiliar[i] = 0;
    }

    int verificador;

    for (int i = 0; i < tam; i++)
    {
        verificador = 0;
        for (int j = 0; j < tam2; j++)
        {
            if (str1[i] == str2[j] && auxiliar[j] == 0)
            {
                auxiliar[j] = 1;
                verificador = 1;
                break;
            }
        }
        if (verificador == 0)
        {
            printf("Nao ha permutacao\n");
            return 0;
        }
    }

    printf("Ha permutacao\n");

    return 0;
}