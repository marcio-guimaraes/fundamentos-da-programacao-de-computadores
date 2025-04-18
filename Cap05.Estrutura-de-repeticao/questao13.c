/* Faça um programa que receba a idade e o peso de quinze pessoas, e que calcule e mostre as médias dos
   pesos das pessoas da mesma faixa etária. As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de 21 a
   30 anos e de 31 anos para cima. */

#include <stdio.h>

int main() {
    int idade;
    float peso, faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;

    for (int i = 0; i < 15; i++) {
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Peso: ");
        scanf("%f", &peso);

        if (idade >= 1 && idade <= 10) {
            faixa1 += peso;
            count1++;
        } else if (idade >= 11 && idade <= 20) {
            faixa2 += peso;
            count2++;
        } else if (idade >= 21 && idade <= 30) {
            faixa3 += peso;
            count3++;
        } else if (idade > 30) {
            faixa4 += peso;
            count4++;
        }
    }

    printf("Media de pesos da faixa-etaria 1 = %.2f\n", count1 > 0 ? faixa1 / count1 : 0);
    printf("Media de pesos da faixa-etaria 2 = %.2f\n", count2 > 0 ? faixa2 / count2 : 0);
    printf("Media de pesos da faixa-etaria 3 = %.2f\n", count3 > 0 ? faixa3 / count3 : 0);
    printf("Media de pesos da faixa-etaria 4 = %.2f\n", count4 > 0 ? faixa4 / count4 : 0);

    return 0;
}
