/*
Uma empresa de eletrodomésticos está realizando um sorteio de uma Ferrari F-50, do qual participarão 
todos os que comprarem pelo menos cinco produtos de uma só vez nas lojas autorizadas. 

Faça um programa que: 
a) leia os dados de todos os clientes, como nome, data de nascimento, CPF, RG, cidade em que mora, endereço e 
quantidade de eletrodomésticos adquiridos pelo cliente. Deve-se incluir um campo para o número do registro, 
que vai de 1 até 9999; 
b) faça o sorteio entre os clientes participantes. somente os clientes que compraram mais que cinco equipamentos 
deverão participar. será sorteado um número, e o cliente que tiver o registro com esse número será o ganhador.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_CLIENTES 9999

typedef struct
{
    int registro;
    char nome[50];
    char dataNascimento[11];
    char cpf[15];
    char rg[15];
    char cidade[50];
    char endereco[100];
    int qtdProdutos;
} Cliente;

int main()
{
    Cliente clientes[MAX_CLIENTES];
    int qtd = 0, op;

    while (1)
    {
        scanf("%d", &op);

        if (op == 1 && qtd < MAX_CLIENTES)
        {
            clientes[qtd].registro = qtd + 1;
            scanf(" %[^\n]", clientes[qtd].nome);
            scanf(" %[^\n]", clientes[qtd].dataNascimento);
            scanf(" %[^\n]", clientes[qtd].cpf);
            scanf(" %[^\n]", clientes[qtd].rg);
            scanf(" %[^\n]", clientes[qtd].cidade);
            scanf(" %[^\n]", clientes[qtd].endereco);
            scanf("%d", &clientes[qtd].qtdProdutos);
            qtd++;
        }

        else if (op == 2)
        {
            srand(time(NULL));
            int sorteado = (rand() % qtd) + 1;
            for (int i = 0; i < qtd; i++)
            {
                if (clientes[i].registro == sorteado && clientes[i].qtdProdutos > 5)
                {
                    printf("Ganhador: %s\n", clientes[i].nome);
                    break;
                }
            }
        }

        else if (op == 0)
            break;
    }

    return 0;
}
