/*Faça um programa para cadastrar clientes no arquivo criado no Exercício 1.

╔══════════════════════╗╔══════════════════════╗
║       Clientes       ║║      Recebimentos    ║
╠══════════════════════╣╠══════════════════════╣
║ Cod_cli              ║║ Num_doc              ║
║ Nome                 ║║ Valor_doc            ║
║ Endereco             ║║ Data_emissao         ║
║ Fone                 ║║ Data_vencimento      ║
║                      ║║ Cod_cli              ║
╚══════════════════════╝╚══════════════════════╝
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int Cod_cli;
    char Nome[100];
    char Endereco[1000];
    char Fone[20];
} Cliente;

typedef struct
{
    int Num_doc;
    float Valor_doc;
    char Data_emissao[11];
    char Data_vencimento[11];
    int Cod_cli;
} Recebimento;

void cadastrarCliente()
{
    Cliente c;
    scanf("%d%*c", &c.Cod_cli);
    fgets(c.Nome, sizeof(c.Nome), stdin);
    c.Nome[strcspn(c.Nome, "\n")] = '\0';
    fgets(c.Endereco, sizeof(c.Endereco), stdin);
    c.Endereco[strcspn(c.Endereco, "\n")] = '\0';
    fgets(c.Fone, sizeof(c.Fone), stdin);
    c.Fone[strcspn(c.Fone, "\n")] = '\0';

    FILE *f = fopen("clientes.txt", "a");
    if (f == NULL)
        return;

    fprintf(f, "%d|%s|%s|%s\n", c.Cod_cli, c.Nome, c.Endereco, c.Fone);
    fclose(f);
    printf("Cliente cadastrado com sucesso!\n");
}

void cadastrarRecebimento()
{
    Recebimento r;
    scanf("%d", &r.Num_doc);
    scanf("%f%*c", &r.Valor_doc);
    fgets(r.Data_emissao, sizeof(r.Data_emissao), stdin);
    r.Data_emissao[strcspn(r.Data_emissao, "\n")] = '\0';
    fgets(r.Data_vencimento, sizeof(r.Data_vencimento), stdin);
    r.Data_vencimento[strcspn(r.Data_vencimento, "\n")] = '\0';
    scanf("%d%*c", &r.Cod_cli);

    FILE *f = fopen("recebimentos.txt", "a");
    if (f == NULL)
        return;

    fprintf(f, "%d|%.2f|%s|%s|%d\n", r.Num_doc, r.Valor_doc, r.Data_emissao, r.Data_vencimento, r.Cod_cli);
    fclose(f);
    printf("Recebimento cadastrado com sucesso!\n");
}

int main()
{
    int opcao;
    while (1)
    {
        printf("\nO que deseja cadastrar?\n1 - Clientes\n2 - Recebimentos\n3 - Sair\n:");
        scanf("%d%*c", &opcao);
        switch (opcao)
        {
        case 1:
            cadastrarCliente();
            break;
        case 2:
            cadastrarRecebimento();
            break;
        case 3:
            return 0;
        default:
            printf("Opcao invalida\n");
            break;
        }
    }
}
