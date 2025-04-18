/*. Faça um programa para controlar o estoque de mercadorias de uma empresa.Inicialmente, o programa deverá preencher
dois vetores com dez posições cada, onde o primeiro corresponde ao código do produto e o
segundo, ao total desse produto em estoque. Logo após, o programa deverá ler um conjunto indeterminado
de dados contendo o código de um cliente e o código do produto que ele deseja comprar, juntamente com a
quantidade. Código do cliente igual a zero indica fim do programa. O programa deverá verificar:

■■ se o código do produto solicitado existe. Se existir, tentar atender ao pedido;
caso contrário, exibir mensagem Código inexistente;

■■ cada pedido feito por um cliente só pode ser atendido integralmente. Caso isso não seja possível,
escrever a mensagem Não temos estoque suficiente dessa mercadoria. Se puder atendê-lo, escrever
a mensagem Pedido atendido. Obrigado e volte sempre;

■■ efetuar a atualização do estoque somente se o pedido for atendido integralmente;

■■ no final do programa, escrever os códigos dos produtos com seus respectivos estoques já atualizados. */

#include <stdio.h>

int main()
{

    int c_produto[10], quantidade[10], c_cliente, count = 10, verificador_produto, quantidade_compra;

    for (int i = 0; i < count; i++)
    {
        printf("Codigo do produto: ");
        scanf("%d", &c_produto[i]);
        printf("Quantidade do produto: ");
        scanf("%d", &quantidade[i]);
    }

    while (1)
    {
        printf("\nCodigo do cliente: ");
        scanf("%d", &c_cliente);
        if (c_cliente == 0)
        {
            break;
        }

        printf("Codigo e quantidade do produto: ");
        scanf("%d %d", &verificador_produto, &quantidade_compra);

        int n = 0;
        for (int i = 0; i < count; i++)
        {
            if (verificador_produto == c_produto[i])
            {

                if (quantidade_compra <= quantidade[i])
                {
                    quantidade[i] = quantidade[i] - quantidade_compra;
                    printf("Compra finalizada\n");
                }
                else
                {
                    printf("Quantidade insuficiente\n");
                }
            }
            else
            {
                n++;
            }
            if (n == 10)
            {
                printf("Codigo inexistente\n");
            }
        }
    }

    return 0;
}