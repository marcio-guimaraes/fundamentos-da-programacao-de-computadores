/*
* Programa para calcular o rendimento mensal de investimentos bancários.
* A agência bancária oferece vários tipos de investimentos com diferentes
* rendimentos mensais, conforme a tabela abaixo:
* 
* Tipo  | Descrição                | Rendimento Mensal
* 1     | Poupança                  | 1,5%
* 2     | Poupança Plus             | 2%
* 3     | Fundos de Renda Fixa      | 4%
* 
* O programa deve realizar as seguintes etapas:
* 1. Ler o código do cliente, o tipo de investimento e o valor investido.
* 2. Calcular o rendimento mensal baseado no tipo de investimento:
*    - Tipo 1: Rendimento = valor investido * 1,5%
*    - Tipo 2: Rendimento = valor investido * 2%
*    - Tipo 3: Rendimento = valor investido * 4%
* 3. Mostrar o rendimento mensal de acordo com o tipo do investimento.
* 4. Acumular e mostrar o total investido e o total de juros pagos.
* 5. A leitura terminará quando o código do cliente digitado for menor ou igual a 0.
*/


#include <stdio.h>

int main(){

    int cod_cliente, tipo_investimento;
    float valor, total_investido = 0, total_juros = 0; // Inicialize total_juros com 0

    while (1)
    {
        printf("Codigo do cliente: ");
        scanf("%d", &cod_cliente);
        if (cod_cliente <= 0)
        {
            break;
        }
        printf("Tipo de investimento: ");
        scanf("%d", &tipo_investimento);
        printf("Valor: ");
        scanf("%f", &valor);

        if (tipo_investimento == 1)
        {
            printf("Rendimento mensal = R$ %.2f\n", valor * 0.015);
            total_investido += valor;
            total_juros += valor * 0.015;
        }
        else if (tipo_investimento == 2)
        {
            printf("Rendimento mensal = R$ %.2f\n", valor * 0.02);
            total_investido += valor;
            total_juros += valor * 0.02;
        }
        else if (tipo_investimento == 3)
        {
            printf("Rendimento mensal = R$ %.2f\n", valor * 0.04);
            total_investido += valor;
            total_juros += valor * 0.04;
        }
    }
    
    printf("Total investido = R$ %.2f\n", total_investido);
    printf("Total de juros pagos = R$ %.2f\n", total_juros);

    return 0;
}
