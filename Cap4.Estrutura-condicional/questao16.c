/* Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir. Faça um programa que 
receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e o novo preço.

PREÇO ATUAL                   ||    % DE DESCONTO
Até 30R$............................Sem desconto.......
(30R$ - 100R$]......................10%................
Acima de 100R$.....................15%.................
*/


#include <stdio.h>

int main() {
    float preco_atual, novo_preco;
    int codigo;
    
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    
    printf("Digite o preco atual do produto: R$ ");
    scanf("%f", &preco_atual);
    
    float desconto;
    
    // Calcula o desconto e o novo preço de acordo com a tabela
    if (preco_atual <= 30.0) {
        desconto = 0.0;
    } else if (preco_atual > 30.0 && preco_atual <= 100.0) {
        desconto = 0.1 * preco_atual;
    } else {
        desconto = 0.15 * preco_atual;
    }
    
    novo_preco = preco_atual - desconto;
    
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Novo preco: R$ %.2f\n", novo_preco);
    
    return 0;
}
