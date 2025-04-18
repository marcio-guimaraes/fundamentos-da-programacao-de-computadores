/* Faça um programa que receba a idade e a altura de várias pessoas, calcule e mostre a média das alturas 
daquelas com mais de 50 anos. Para encerrar a entrada de dados, digite idade menor ou igual a zero. */

#include <stdio.h>

int main(){

    int idade, count=0;
    float altura, mais50=0;

    while (1)
    {
        printf("Idade: ");
        scanf("%d", &idade);
        if (idade <= 0)
        {
            break;
        }
        
        printf("Altura: ");
        scanf("%f", &altura);

        if (idade > 50)
        {
            mais50 = mais50 + altura;
            count++;
        }
    }

    printf("Media de altura das pessoas com mais de 50 anos = %.2f\n", mais50/count);
    

    return 0;
}