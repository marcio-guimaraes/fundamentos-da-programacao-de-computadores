/*
Considere as informações a seguir:
• Estilista (código do estilista, nome do estilista, salário).
• Roupa (código da roupa, descrição da roupa, código do estilista, código da estação, ano).
• Estação (código da estação, nome da estação).

Sabe-se que nessa indústria de confecção existem três estilistas. Faça um programa que:
 a) crie uma rotina para cadastrá-los; 
b) crie uma rotina para cadastrar as estações climáticas (sabendo que são duas: primavera-verão e outono--inverno); 
c) crie uma rotina para cadastrar as roupas (lembre-se de que estilista e estação devem ter sido previamente ca
dastrados) — no máximo dez roupas por estação; 
d) crie um relatório que mostre todas as roupas de determinada estação (informando, inclusive, o nome do esti
lista que a desenhou).

*/

#include <stdio.h>
#include <string.h>

#define MAX_ESTILISTAS 3
#define MAX_ESTACOES 2
#define MAX_ROUPAS 20

typedef struct
{
    int cod;
    char nome[50];
    float salario;
} Estilista;

typedef struct
{
    int cod;
    char nome[30];
} Estacao;

typedef struct
{
    int cod;
    char descricao[100];
    int codEstilista;
    int codEstacao;
    int ano;
} Roupa;

int main()
{
    Estilista estilistas[MAX_ESTILISTAS];
    Estacao estacoes[MAX_ESTACOES];
    Roupa roupas[MAX_ROUPAS];
    int qtdEstilistas = 0, qtdEstacoes = 0, qtdRoupas = 0;
    int op;

    while (1)
    {
        scanf("%d", &op);

        if (op == 1 && qtdEstilistas < MAX_ESTILISTAS)
        {
            scanf("%d", &estilistas[qtdEstilistas].cod);
            scanf(" %[^\n]", estilistas[qtdEstilistas].nome);
            scanf("%f", &estilistas[qtdEstilistas].salario);
            qtdEstilistas++;
        }

        else if (op == 2 && qtdEstacoes < MAX_ESTACOES)
        {
            scanf("%d", &estacoes[qtdEstacoes].cod);
            scanf(" %[^\n]", estacoes[qtdEstacoes].nome);
            qtdEstacoes++;
        }

        else if (op == 3 && qtdRoupas < MAX_ROUPAS)
        {
            int codEst, codEstac;
            scanf("%d", &codEst);
            scanf("%d", &codEstac);
            int estilistaOk = 0, estacaoOk = 0;
            for (int i = 0; i < qtdEstilistas; i++)
                if (estilistas[i].cod == codEst)
                    estilistaOk = 1;
            for (int i = 0; i < qtdEstacoes; i++)
            {
                int count = 0;
                for (int j = 0; j < qtdRoupas; j++)
                    if (roupas[j].codEstacao == codEstac)
                        count++;
                if (estacoes[i].cod == codEstac && count < 10)
                    estacaoOk = 1;
            }
            if (estilistaOk && estacaoOk)
            {
                roupas[qtdRoupas].codEstilista = codEst;
                roupas[qtdRoupas].codEstacao = codEstac;
                scanf("%d", &roupas[qtdRoupas].cod);
                scanf(" %[^\n]", roupas[qtdRoupas].descricao);
                scanf("%d", &roupas[qtdRoupas].ano);
                qtdRoupas++;
            }
        }

        else if (op == 4)
        {
            int codEstacao;
            scanf("%d", &codEstacao);
            for (int i = 0; i < qtdRoupas; i++)
            {
                if (roupas[i].codEstacao == codEstacao)
                {
                    printf("%s ", roupas[i].descricao);
                    for (int j = 0; j < qtdEstilistas; j++)
                        if (roupas[i].codEstilista == estilistas[j].cod)
                            printf("%s\n", estilistas[j].nome);
                }
            }
        }

        else if (op == 0)
            break;
    }

    return 0;
}
