/*Faça um programa que mostre todos os recebimentos de determinado cliente.*/

#include <stdio.h>
#include <string.h>

char nomeCliente(int cod, char *nome)
{
    FILE *fc = fopen("clientes.txt", "r");
    if (!fc)
        return 0;
    int c;
    char n[101], e[1001], f[21];
    while (fscanf(fc, "%d\n%100[^\n]\n%1000[^\n]\n%20[^\n]\n", &c, n, e, f) == 4)
    {
        if (c == cod)
        {
            strcpy(nome, n);
            fclose(fc);
            return 1;
        }
    }
    fclose(fc);
    return 0;
}

int main()
{
    int codcli;
    printf("Cod cliente: ");
    scanf("%d", &codcli);
    FILE *fr = fopen("recebimentos.txt", "r");
    if (!fr)
        return 1;
    int nd, cc;
    float val;
    char dem[11], dvc[11], nome[101];
    while (fscanf(fr, "%d\n%f\n%10[^\n]\n%10[^\n]\n%d\n", &nd, &val, dem, dvc, &cc) == 5)
    {
        if (cc == codcli)
        {
            if (nomeCliente(cc, nome))
            {
                printf("Doc: %d Cliente: %s Valor: %.2f Venc: %s\n", nd, nome, val, dvc);
            }
        }
    }
    fclose(fr);
    return 0;
}
