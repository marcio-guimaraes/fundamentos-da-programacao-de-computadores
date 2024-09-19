/*A busca por subcadeias dentro de grandes cadeias de caracteres é um problema clássico na computação,
especificamente em bancos de dados. Faça um programa que receba uma cadeia de caracteres e uma
subcadeia, determine e mostre quantas vezes a subcadeia aparece dentro da cadeia.


Observação: O tamanho da subcadeia obrigatoriamente deve ser menor que o da cadeia.
Exemplos:
Entradas:
Cadeia = aaaassdffffghssiiii
Subcadeia = ss
Saída: a subcadeia aparece 2 vez(es) na cadeia

Entradas:
Cadeia = xxxxxaauuuyyyydrtsss
Subcadeia = yydrts
Saída: a subcadeia aparece 1 vez(es) na cadeia.

Entradas:
Cadeia = fffffhuiojjjjkkkkkssjh
Subcadeia = fdkjfdfjdiiiioooooopppppwwqertttesss
Erro! Tamanho incorreto. Digite outra subcadeia.
Subcadeia = dsh
Saída: a subcadeia não está contida na cadeia.*/

#include <stdio.h>
#include <string.h>

int main()
{

    char cadeia[101];
    printf("Cadeia: ");
    fgets(cadeia, sizeof(cadeia), stdin);
    cadeia[strcspn(cadeia, "\n")] = 0;

    char subcadeia[100];
    printf("Subcadeia: ");
    fgets(subcadeia, sizeof(subcadeia), stdin);
    subcadeia[strcspn(subcadeia, "\n")] = 0;

    int tamCad = strlen(cadeia);
    int tamSub = strlen(subcadeia);

    if (tamSub >= tamCad)
    {
        printf("Erro! Tamanho incorreto. Digite outra subcadeia.\n");
        return 0;
    }

    int count = 0;
    for (int i = 0; i < tamCad; i++)
    {
        int verificador = 0;
        if (cadeia[i] == subcadeia[0])
        {
            for (int j = 0; j < tamSub; j++)
            {
                if (cadeia[i + j] == subcadeia[j])
                {
                    verificador++;
                }
            }
        }
        if (verificador == tamSub)
        {
            count++;
        }
    }

    if (count > 0)
    {
        printf("a subcadeia aparece %d vez(es) na cadeia.", count);
    }
    else
    {
        printf("a subcadeia nao esta contida na cadeia.");
    }

    return 0;
}