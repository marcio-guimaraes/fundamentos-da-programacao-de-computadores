
/*
10. Uma empresa armazena informações sobre as contas a receber de seus clientes. Cada uma dessas contas
tem as seguintes informações: número do documento, código do cliente, data de vencimento, data de
pagamento, valor da conta e juros. Faça um programa para cadastrar um documento. se a data de paga
mento for maior que a de vencimento, o programa deverá calcular o campo ‘juros’ da tabela documentos
(a cada dia de atraso, deve-se aplicar 0,02% de multa). O programa deverá ler informações sobre 15
documentos e, depois, mostrar todos os documentos lidos e o total geral a receber (valor das contas +
juros) e a média dos juros.
*/

#include <stdio.h>

#define NUM_DOCUMENTOS 15
#define TAXA_JUROS_DIARIO 0.0002 

typedef struct
{
    int dia, mes, ano;
} Data;

typedef struct
{
    int numDocumento;
    int codCliente;
    Data vencimento;
    Data pagamento;
    float valorConta;
    float juros;
} Documento;

int diferencaDias(Data d1, Data d2)
{

    int dias1 = d1.ano * 365 + d1.mes * 30 + d1.dia;
    int dias2 = d2.ano * 365 + d2.mes * 30 + d2.dia;
    if (dias2 > dias1)
    {
        return dias2 - dias1;
    }
    return 0;
}

int main()
{
    Documento docs[NUM_DOCUMENTOS];
    float totalReceber = 0;
    float somaJuros = 0;

    printf("--- Cadastro de Documentos ---\n");
    for (int i = 0; i < NUM_DOCUMENTOS; i++)
    {
        printf("\nDocumento %d:\n", i + 1);

        printf("Numero do documento: ");
        scanf("%d", &docs[i].numDocumento);

        printf("Codigo do cliente: ");
        scanf("%d", &docs[i].codCliente);

        printf("Data de vencimento (dd mm aaaa): ");
        scanf("%d %d %d", &docs[i].vencimento.dia, &docs[i].vencimento.mes, &docs[i].vencimento.ano);

        printf("Data de pagamento (dd mm aaaa): ");
        scanf("%d %d %d", &docs[i].pagamento.dia, &docs[i].pagamento.mes, &docs[i].pagamento.ano);

        printf("Valor da conta: R$ ");
        scanf("%f", &docs[i].valorConta);

        int diasAtraso = diferencaDias(docs[i].vencimento, docs[i].pagamento);
        if (diasAtraso > 0)
        {
            docs[i].juros = docs[i].valorConta * TAXA_JUROS_DIARIO * diasAtraso;
        }
        else
        {
            docs[i].juros = 0.0;
        }

        somaJuros += docs[i].juros;
        totalReceber += docs[i].valorConta + docs[i].juros;
    }

    printf("\n\n--- Relatorio de Documentos ---\n");
    for (int i = 0; i < NUM_DOCUMENTOS; i++)
    {
        printf("Doc: %d | Cliente: %d | Venc: %02d/%02d/%d | Pag: %02d/%02d/%d | Valor: R$%.2f | Juros: R$%.2f\n",
               docs[i].numDocumento,
               docs[i].codCliente,
               docs[i].vencimento.dia, docs[i].vencimento.mes, docs[i].vencimento.ano,
               docs[i].pagamento.dia, docs[i].pagamento.mes, docs[i].pagamento.ano,
               docs[i].valorConta,
               docs[i].juros);
    }

    printf("\n--- Totais ---\n");
    printf("Total geral a receber (valor + juros): R$%.2f\n", totalReceber);
    printf("Media dos juros: R$%.2f\n", somaJuros / NUM_DOCUMENTOS);

    return 0;
}