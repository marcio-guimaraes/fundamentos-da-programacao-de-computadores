/* Faça um programa que receba o valor de um carro e mostre uma tabela com os seguintes dados: 
   preço final, quantidade de parcelas e valor da parcela. Considere o seguinte:
   
   ■■ O preço final para compra à vista tem desconto de 20%;
   ■■ A quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60; e
   ■■ Os percentuais de acréscimo encontram-se na tabela a seguir.
   
   QUANTIDADE DE PARCELAS......PERCENTUAL DE ACRÉSCIMO
   6...........................3%...................
   12..........................6%...................
   18..........................9%...................
   24..........................12%..................
   30..........................15%..................
   36..........................18%..................
   42..........................21%..................
   48..........................24%..................
   54..........................27%..................
   60..........................30%..................
*/

#include <stdio.h>

int main() {
    float valor, precoFinal, valorParcela;
    float desconto = 0.20;
    float percentual = 0.03;
    int parcelas = 6;

    // Recebe o valor do carro
    printf("Informe o valor do carro: ");
    scanf("%f", &valor);

    // Preço final para compra à vista com desconto de 20%
    precoFinal = valor * (1 - desconto);
    printf("\nPreco para compra a vista = %.2f\n", precoFinal);

    // Tabela de preços parcelados
    printf("\nTabela de precos parcelados:\n");
    printf("Parcelas......||......Valor da Parcela (R$)......||......Preco Final (R$)\n");

    while (parcelas <= 60) {
        precoFinal = valor * (1 + percentual);
        valorParcela = precoFinal / parcelas;
        printf("%d.........................%.2f..........................%.2f\n", parcelas, valorParcela, precoFinal);

        // Atualiza os valores para a próxima iteração
        percentual += 0.03;
        parcelas += 6;
    }

    return 0;
}
