/*
Faça um programa para criar os arquivos a seguir:

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

int main()
{

    FILE *arquivo1, *arquivo2;
    arquivo1 = fopen("clientes", "w");
    arquivo2 = fopen("recebimentos", "w");

    if (arquivo1 == NULL || arquivo2 == NULL)
    {
        printf("Erro ao criar os arquivos.\n");
        return 1;
    }

    return 0;
}