/*Faça um programa que receba uma frase e faça a criptografia, retirando das palavras suas vogais.
O programa deverá armazenar essas vogais e suas posições originais em vetores, mostrar a frase criptografada
e posteriormente descriptografá-la.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int ehVogal(char letra);
void criptografando(int tam, int vogais[MAX], char frase[MAX], char criptografia[MAX]);
void descriptografando(int tam, int vogais[MAX], char criptografia[MAX], char descriptografia[MAX]);

int main()
{

    char frase[MAX];
    char criptografia[MAX];
    char descriptografia[MAX];
    int vogais[MAX] = {0};

    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = 0;

    int tam = strlen(frase);
    criptografando(tam, vogais, frase, criptografia);
    descriptografando(tam, vogais, criptografia, descriptografia);

    printf("%s\n", criptografia);
    printf("%s\n", descriptografia);

    return 0;
}

int ehVogal(char letra)
{
    int num = 0;
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
    {
        num = 1;
    }

    return num;
}

void criptografando(int tam, int vogais[MAX], char frase[MAX], char criptografia[MAX])
{
    int j = 0;
    for (int i = 0; i < tam; i++)
    {
        if (ehVogal(frase[i]))
        {
            vogais[i] = (int)frase[i];
        }
        else
        {
            criptografia[j] = frase[i];
            j++;
        }
    }
    criptografia[j] = '\0';
}

void descriptografando(int tam, int vogais[MAX], char criptografia[MAX], char descriptografia[MAX])
{
    int j = 0, k = 0;
    for (int i = 0; i < tam; i++)
    {
        if (vogais[i] != 0)
        {
            descriptografia[i] = (char)vogais[i];
            k++;
        }
        else
        {
            descriptografia[i] = criptografia[j];
            j++;
            k++;
        }
    }
    descriptografia[k] = '\0';
}