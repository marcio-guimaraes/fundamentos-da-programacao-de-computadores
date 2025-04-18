/*Faça um programa que preencha uma matriz 3 x 3 com números reais e outro valor numérico digitado pelo
usuário. O programa deverá calcular e mostrar a matriz resultante da multiplicação do número digitado por
cada elemento da matriz.*/

#include <stdio.h>

#define LINHA 3
#define COLUNA 3

int main() {
    double matriz[LINHA][COLUNA], valor;

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    printf("Digite o valor para multiplicar a matriz:\n");
    scanf("%lf", &valor);

    printf("Matriz resultante:\n");
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            matriz[i][j] *= valor;
            printf("%.2lf ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
