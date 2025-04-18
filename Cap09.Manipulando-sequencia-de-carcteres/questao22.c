/*Considere uma string composta por várias subsequências, por exemplo, cccaaaabbbbxdddddddddaaannn.
A menor subsequência é a da letra x, com apenas um elemento; a maior subsequência é a da letra d,
com nove elementos. Faça um programa para ler uma string e mostrar qual é a letra que ocorre na
maior subsequência e o tamanho dessa subsequência.
Exemplo:
Entrada: aaabbbbaaa
Saída: maior b, tamanho 4*/

#include <stdio.h>
#include <string.h>

int main()
{

    char string[101];
    printf("String: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0;

    int maior = 0;
    char letra = string[0];

    int tam = strlen(string);

    for (int i = 0; i < tam; i++)
    {
        int contador = 0, j = i;
        while (string[i] == string[j])
        {
            contador++;
            j++;
        }

        if (contador > maior)
        {
            letra = string[i];
            maior = contador;
        }
    }

    printf("Maior %c, tamanho %d", letra, maior);

    return 0;
}