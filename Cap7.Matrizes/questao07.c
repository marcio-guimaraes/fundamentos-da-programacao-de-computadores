/*. Elabore um programa que preencha uma matriz M de ordem 4 x 6 e uma segunda matriz N de ordem 6 
4, calcule e imprima a soma das linhas de M com as colunas de N. */

#include <stdio.h>

#define LINHA_M 4
#define COLUNA_M 6
#define LINHA_N 6
#define COLUNA_N 4

int main(){
    int M[LINHA_M][COLUNA_M], N[LINHA_N][COLUNA_N];
    int soma_linhas_M[LINHA_M] = {0};
    int soma_colunas_N[COLUNA_N] = {0};
    int total_ano = 0;

    // Preenchendo a matriz M e calculando a soma das linhas
    printf("Preenchendo a matriz M (4x6):\n");
    for(int i = 0; i < LINHA_M; i++){
        for(int j = 0; j < COLUNA_M; j++){
            printf("Digite M[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
            soma_linhas_M[i] += M[i][j];
        }
    }

    // Preenchendo a matriz N e calculando a soma das colunas
    printf("\nPreenchendo a matriz N (6x4):\n");
    for(int i = 0; i < LINHA_N; i++){
        for(int j = 0; j < COLUNA_N; j++){
            printf("Digite N[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &N[i][j]);
            soma_colunas_N[j] += N[i][j];
        }
    }

    // Exibindo a soma das linhas de M
    printf("\nSoma das linhas da matriz M:\n");
    for(int i = 0; i < LINHA_M; i++){
        printf("Soma da linha %d: %d\n", i + 1, soma_linhas_M[i]);
    }

    // Exibindo a soma das colunas de N
    printf("\nSoma das colunas da matriz N:\n");
    for(int j = 0; j < COLUNA_N; j++){
        printf("Soma da coluna %d: %d\n", j + 1, soma_colunas_N[j]);
    }

    // Calculando o total vendido no ano (soma de todas as somas)
    for(int i = 0; i < LINHA_M; i++){
        total_ano += soma_linhas_M[i];
    }
    for(int j = 0; j < COLUNA_N; j++){
        total_ano += soma_colunas_N[j];
    }

    printf("\nTotal vendido no ano (soma de todas as linhas de M e todas as colunas de N): %d\n", total_ano);

    return 0;
}
