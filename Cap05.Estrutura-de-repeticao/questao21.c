/*Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código.
Os códigos utilizados são:
 1, 2, 3, 4....Votos para os respectivos candidatos
 5.............Voto nulo
 6.............Voto em branco

 Faça um programa que calcule e mostre:
■ o total de votos para cada candidato;
■ o total de votos nulos;
■ o total de votos em branco;
■ a porcentagem de votos nulos sobre o total de votos;
■ a porcentagem de votos em branco sobre o total de votos. */

#include <stdio.h>

int main() {

    int voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, nulo = 0, branco = 0, total = 0;

    while (1) {
        printf("Digite o voto (0 para sair): ");
        scanf("%d", &voto);

        if (voto == 0) {
            break;
        }

        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                nulo++;
                break;
            case 6:
                branco++;
                break;
            default:
                printf("Codigo invalido\n");
                continue;
        }

        total++;
    }

    printf("Total de votos para o candidato 1 = %d\n", candidato1);
    printf("Total de votos para o candidato 2 = %d\n", candidato2);
    printf("Total de votos para o candidato 3 = %d\n", candidato3);
    printf("Total de votos para o candidato 4 = %d\n", candidato4);
    printf("Total de votos nulos = %d\n", nulo);
    printf("Total de votos em branco = %d\n", branco);
    printf("Porcentagem de votos nulos sobre o total = %.2f%%\n", total > 0 ? (float)nulo / total * 100 : 0);
    printf("Porcentagem de votos em branco sobre o total = %.2f%%\n", total > 0 ? (float)branco / total * 100 : 0);

    return 0;
}
