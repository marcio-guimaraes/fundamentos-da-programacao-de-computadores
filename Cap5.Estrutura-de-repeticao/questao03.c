/* Faça um programa que receba a idade de oito pessoas, calcule e mostre:
   a) a quantidade de pessoas em cada faixa etária;
   b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas;
   c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas.

   FAIXA ETÁRIA......IDADE
   1a................Até 15 anos
   2a................De 16 a 30 anos
   3a................De 31 a 45 anos
   4a................De 46 a 60 anos
   5a................Acima de 60 anos
*/

#include <stdio.h>

int main()
{

    int count = 0, idade;
    int faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0, faixa5 = 0;

    while (count < 8)
    {
        count++;
        printf("Idade %d: ", count);
        scanf("%d", &idade);

        if (idade <= 15)
        {
            faixa1++;
        }
        else if (idade >= 16 && idade <= 30)
        {
            faixa2++;
        }
        else if (idade >= 31 && idade <= 45)
        {
            faixa3++;
        }
        else if (idade >= 46 && idade <= 60)
        {
            faixa4++;
        }
        else if (idade)
        {
            faixa5++;
        }
    }

    printf("Faixa 1: %d\nFaixa 2: %d\nFaixa 3: %d\nFaixa 4: %d\nFaixa 5: %d\n", faixa1, faixa2, faixa3, faixa4, faixa5);
    float total;
    total = faixa1 + faixa2 + faixa3 + faixa4 + faixa5;
    printf("Porcentagem da primeira faixa-etaria: %.2f%%\n", (float)faixa1 / total * 100);
    printf("Porcentagem da ultima faixa-etaria: %.2f%%\n", (float)faixa5 / total * 100);

    return 0;
}
