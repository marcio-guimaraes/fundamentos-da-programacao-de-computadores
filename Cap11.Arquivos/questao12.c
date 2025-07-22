/*
Faça um programa para criar os arquivos a seguir:
• Estilista (código do estilista, nome do estilista, salário).
• Roupa (código da roupa, descrição da roupa, código do estilista, código da estação, ano).
• Estação (código da estação, nome da estação).
*/

#include <stdio.h>

typedef struct
{
    int codigo;
    char nome[101];
    float salario;
} Estilista;

typedef struct
{
    int codigo;
    char descricao[101];
    int codigoEstilista;
    int codigoEstacao;
    int ano;
} Roupa;

typedef struct
{
    int codigo;
    char nome[101];
} Estacao;

int main()
{
    FILE *fe = fopen("estilistas.txt", "w");
    FILE *fr = fopen("roupas.txt", "w");
    FILE *fs = fopen("estacoes.txt", "w");
    if (!fe || !fr || !fs)
        return 1;
    fclose(fe);
    fclose(fr);
    fclose(fs);
    return 0;
}
