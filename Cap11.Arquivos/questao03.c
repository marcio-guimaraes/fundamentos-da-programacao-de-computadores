/*Faça um programa que inclua recebimentos no arquivo criado no Exercício 1, devendo verificar se o cliente
já se encontra cadastrado. */

#include <stdio.h>
#include <string.h>

int clienteExiste(int cod)
{
    FILE *f = fopen("clientes.txt", "r");
    if (!f)
        return 0;
    int c;
    char nome[101], end[1001], fone[21];
    while (fscanf(f, "%d\n%100[^\n]\n%1000[^\n]\n%20[^\n]\n", &c, nome, end, fone) == 4)
    {
        if (c == cod)
        {
            fclose(f);
            return 1;
        }
    }
    fclose(f);
    return 0;
}

void incluirRecebimento()
{
    FILE *f = fopen("recebimentos.txt", "a");
    if (!f)
        return;
    int num_doc, cod_cli;
    float valor_doc;
    char data_em[11], data_venc[11];
    printf("Num_doc: ");
    scanf("%d", &num_doc);
    printf("Valor_doc: ");
    scanf("%f", &valor_doc);
    getchar();
    printf("Data_emissao: ");
    fgets(data_em, 11, stdin);
    data_em[strcspn(data_em, "\n")] = 0;
    printf("Data_vencimento: ");
    fgets(data_venc, 11, stdin);
    data_venc[strcspn(data_venc, "\n")] = 0;
    printf("Cod_cli: ");
    scanf("%d", &cod_cli);
    if (!clienteExiste(cod_cli))
    {
        printf("Cliente nao cadastrado\n");
        fclose(f);
        return;
    }
    fprintf(f, "%d\n%.2f\n%s\n%s\n%d\n", num_doc, valor_doc, data_em, data_venc, cod_cli);
    fclose(f);
}

int main()
{
    incluirRecebimento();
    return 0;
}
