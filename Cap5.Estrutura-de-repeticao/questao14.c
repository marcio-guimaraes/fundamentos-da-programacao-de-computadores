/* Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião em relação ao filme:
   ótimo — 3; bom — 2; regular — 1. Faça um programa que receba a idade e a opinião de quinze espectadores, calcule e mostre:

   ■■ a média das idades das pessoas que responderam ótimo;
   ■■ a quantidade de pessoas que responderam regular; e
   ■■ a percentagem de pessoas que responderam bom, entre todos os espectadores analisados. */

#include <stdio.h>

int main() {
    int idade, opniao, quantidade_espectadores, otimo = 0, idade_otimo = 0, regular = 0, bom = 0;
    // 3-Ótimo, 2-Bom, 1-Regular

    printf("Quantidade de espectadores: ");
    scanf("%d", &quantidade_espectadores);

    for (int i = 0; i < quantidade_espectadores; i++) {
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Opniao (3-Ótimo, 2-Bom, 1-Regular): ");
        scanf("%d", &opniao);

        if (opniao == 3) {
            otimo++;
            idade_otimo += idade;
        } else if (opniao == 2) {
            bom++;
        } else if (opniao == 1) {
            regular++;
        }
    }

    if (otimo > 0) {
        printf("Media de idade das pessoas que responderam otimo = %.2f\n", (float)idade_otimo / otimo);
    } else {
        printf("Nenhuma pessoa respondeu ótimo.\n");
    }
    printf("Quantidade de pessoas que responderam regular = %d\n", regular);
    printf("Porcentagem de pessoas que responderam bom = %.2f%%\n", (float)bom / quantidade_espectadores * 100);
    
    return 0;
}
