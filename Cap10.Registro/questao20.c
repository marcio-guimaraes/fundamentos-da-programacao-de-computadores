/*
Faça um programa contendo os serviços que uma oficina mecânica pode realizar: ordem de serviço (número
da Os, data, valor, serviço realizado, cliente).
leia as informações sobre várias ordens de serviço e determine, ao final, a média dos valores, o nome
do cliente que realizou o serviço mais caro, junto com a descrição desse serviço e a data de sua realização.
*/

#include <stdio.h>
#include <string.h>

#define MAX_ORDENS 100

typedef struct
{
    int numero;
    char data[11];
    float valor;
    char servico[100];
    char cliente[50];
} Ordem;

int main()
{
    Ordem ordens[MAX_ORDENS];
    int qtd = 0, op;

    while (1)
    {
        scanf("%d", &op);

        if (op == 1 && qtd < MAX_ORDENS)
        {
            scanf("%d", &ordens[qtd].numero);
            scanf(" %[^\n]", ordens[qtd].data);
            scanf("%f", &ordens[qtd].valor);
            scanf(" %[^\n]", ordens[qtd].servico);
            scanf(" %[^\n]", ordens[qtd].cliente);
            qtd++;
        }

        else if (op == 2)
        {
            float soma = 0, maior = -1;
            int indMaior = -1;
            for (int i = 0; i < qtd; i++)
            {
                soma += ordens[i].valor;
                if (ordens[i].valor > maior)
                {
                    maior = ordens[i].valor;
                    indMaior = i;
                }
            }
            printf("Media: %.2f\n", soma / qtd);
            printf("Mais caro: %s %s %s\n", ordens[indMaior].cliente, ordens[indMaior].servico, ordens[indMaior].data);
        }

        else if (op == 0)
            break;
    }

    return 0;
}
