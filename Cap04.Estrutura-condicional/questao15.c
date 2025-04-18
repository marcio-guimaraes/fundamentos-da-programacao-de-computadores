/* Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um programa que receba o tipo
de investimento e seu valor, calcule e mostre o valor corrigido após um mês de investimento, de acordo com o tipo de investimento.

TIPO                  ||    DESCRIÇÃO                   ||    RENDIMENTO MENSAL
1...........................Poupança..........................3%...............
2...........................Fundos de renda fixa..............4%...............
*/

#include <stdio.h>

int main()
{
    int tipo_investimento;
    float valor_investido, valor_corrigido;

    printf("Digite o tipo de investimento (1 para Poupanca, 2 para Fundos de renda fixa): ");
    scanf("%d", &tipo_investimento);

    printf("Digite o valor investido: ");
    scanf("%f", &valor_investido);

    switch (tipo_investimento)
    {
    case 1:
        valor_corrigido = valor_investido * 1.03;
        break;
    case 2:
        valor_corrigido = valor_investido * 1.04;
        break;
    default:
        printf("Tipo de investimento invalido.\n");
        return 1;
    }

    printf("Valor corrigido apos um mes de investimento: R$ %.2f\n", valor_corrigido);

    return 0;
}
