/* Faça um programa que receba um conjunto de valores inteiros e positivos, calcule e mostre o maior e o 
menor valor do conjunto. Considere que:

■ para encerrar a entrada de dados, deve ser digitado o valor zero; 
■ para valores negativos, deve ser enviada uma mensagem; 
■ os valores negativos ou iguais a zero não entrarão nos cálculos. */

#include <stdio.h>

int main(){

    int numero, maior=0, menor=1000;

    while (1)
    {
        printf("Numero: ");
        scanf("%d", &numero);

        if (numero == 0)
        {
            break;
        } else if (numero < 0)
        {
            printf("Numero negativos sao invalidos!\n");
            continue;
        }

        if (numero > maior)
        {
            maior = numero;
        }
        if (numero < menor)
        {
            menor = numero;
        }  
    }
    
    
    printf("Maior numero = %d\n", maior);
    printf("Menor numero = %d\n", menor);
    return 0;
}