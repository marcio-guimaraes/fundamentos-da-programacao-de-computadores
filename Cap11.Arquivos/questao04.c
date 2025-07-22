/* Faça um programa que exclua clientes e, consequentemente, todos os seus recebimentos, dos arquivos criados
no Exercício 1. */

#include <stdio.h>

int excluirCliente(int cod)
{
    FILE *fc = fopen("clientes.txt", "r");
    FILE *ftc = fopen("clientes_temp.txt", "w");
    if (!fc || !ftc)
        return 0;
    int c;
    char nome[101], end[1001], fone[21];
    int achou = 0;
    while (fscanf(fc, "%d\n%100[^\n]\n%1000[^\n]\n%20[^\n]\n", &c, nome, end, fone) == 4)
    {
        if (c != cod)
            fprintf(ftc, "%d\n%s\n%s\n%s\n", c, nome, end, fone);
        else
            achou = 1;
    }
    fclose(fc);
    fclose(ftc);
    if (!achou)
    {
        remove("clientes_temp.txt");
        return 0;
    }
    remove("clientes.txt");
    rename("clientes_temp.txt", "clientes.txt");

    FILE *fr = fopen("recebimentos.txt", "r");
    FILE *ftr = fopen("recebimentos_temp.txt", "w");
    if (!fr || !ftr)
        return 0;
    int num_doc, cod_cli;
    float valor_doc;
    char data_em[11], data_venc[11];
    while (fscanf(fr, "%d\n%f\n%10[^\n]\n%10[^\n]\n%d\n", &num_doc, &valor_doc, data_em, data_venc, &cod_cli) == 5)
    {
        if (cod_cli != cod)
            fprintf(ftr, "%d\n%.2f\n%s\n%s\n%d\n", num_doc, valor_doc, data_em, data_venc, cod_cli);
    }
    fclose(fr);
    fclose(ftr);
    remove("recebimentos.txt");
    rename("recebimentos_temp.txt", "recebimentos.txt");
    return 1;
}

int main()
{
    int cod;
    printf("Cod cliente para excluir: ");
    scanf("%d", &cod);
    if (!excluirCliente(cod))
        printf("Cliente nao encontrado\n");
    else
        printf("Cliente e recebimentos excluidos\n");
    return 0;
}
