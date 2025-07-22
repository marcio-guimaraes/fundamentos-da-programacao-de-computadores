/*Faça um programa que mostre todos os recebimentos com valor acima de um valor dado pelo usuário. */

#include <stdio.h>

int main()
{
    float valor;
    printf("Valor minimo: ");
    scanf("%f", &valor);
    FILE *fr = fopen("recebimentos.txt", "r");
    if (!fr)
        return 1;
    int nd, cc;
    float val;
    char dem[11], dvc[11];
    while (fscanf(fr, "%d\n%f\n%10[^\n]\n%10[^\n]\n%d\n", &nd, &val, dem, dvc, &cc) == 5)
    {
        if (val > valor)
            printf("Doc: %d Valor: %.2f Venc: %s\n", nd, val, dvc);
    }
    fclose(fr);
    return 0;
}
