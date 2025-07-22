/*Faça um programa que altere um recebimento de um cliente, ou seja, o usuário informa o número do docu
mento e o número do cliente e faz as alterações desejadas. */

#include <stdio.h>
#include <string.h>

int alterarRecebimento(int numdoc, int codcli)
{
    FILE *fr = fopen("recebimentos.txt", "r");
    FILE *ftr = fopen("recebimentos_temp.txt", "w");
    if (!fr || !ftr)
        return 0;
    int nd, cc, achou = 0;
    float val;
    char dem[11], dvc[11];
    while (fscanf(fr, "%d\n%f\n%10[^\n]\n%10[^\n]\n%d\n", &nd, &val, dem, dvc, &cc) == 5)
    {
        if (nd == numdoc && cc == codcli)
        {
            achou = 1;
            printf("Novo valor: ");
            scanf("%f", &val);
            getchar();
            printf("Nova data emissao: ");
            fgets(dem, 11, stdin);
            dem[strcspn(dem, "\n")] = 0;
            printf("Nova data vencimento: ");
            fgets(dvc, 11, stdin);
            dvc[strcspn(dvc, "\n")] = 0;
        }
        fprintf(ftr, "%d\n%.2f\n%s\n%s\n%d\n", nd, val, dem, dvc, cc);
    }
    fclose(fr);
    fclose(ftr);
    if (!achou)
    {
        remove("recebimentos_temp.txt");
        return 0;
    }
    remove("recebimentos.txt");
    rename("recebimentos_temp.txt", "recebimentos.txt");
    return 1;
}

int main()
{
    int numdoc, codcli;
    printf("Num doc: ");
    scanf("%d", &numdoc);
    printf("Cod cliente: ");
    scanf("%d", &codcli);
    if (!alterarRecebimento(numdoc, codcli))
        printf("Recebimento nao encontrado\n");
    else
        printf("Recebimento alterado\n");
    return 0;
}
