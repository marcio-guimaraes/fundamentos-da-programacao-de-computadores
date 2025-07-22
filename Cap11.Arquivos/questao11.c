/* Faça um programa que mostre todos os recebimentos com valor entre dois valores dados pelo usuário.*/

#include <stdio.h>

int main()
{
    float valMin, valMax;
    printf("Valor minimo: ");
    scanf("%f", &valMin);
    printf("Valor maximo: ");
    scanf("%f", &valMax);
    FILE *fr = fopen("recebimentos.txt", "r");
    if (!fr)
        return 1;
    int nd, cc;
    float val;
    char dem[11], dvc[11];
    while (fscanf(fr, "%d\n%f\n%10[^\n]\n%10[^\n]\n%d\n", &nd, &val, dem, dvc, &cc) == 5)
    {
        if (val >= valMin && val <= valMax)
            printf("Doc: %d Valor: %.2f Venc: %s\n", nd, val, dvc);
    }
    fclose(fr);
    return 0;
}
