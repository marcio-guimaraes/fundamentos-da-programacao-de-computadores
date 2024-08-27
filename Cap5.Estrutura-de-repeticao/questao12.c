/*Faça um programa que receba dez números inteiros e mostre a quantidade de números primos dentre os
   números que foram digitados */

#include <stdio.h>

int main() {
    int numero, verificador, countPrimos = 0;

    for (int contador = 1; contador <= 10; contador++) {
        scanf("%d", &numero);
        verificador = 0;
        
        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                verificador++;
            }
        }
        
        if (verificador == 2 || numero == 1)
            countPrimos++;
    }
    
    printf("Quantidade de numeros primos: %d\n", countPrimos);

    return 0;
}