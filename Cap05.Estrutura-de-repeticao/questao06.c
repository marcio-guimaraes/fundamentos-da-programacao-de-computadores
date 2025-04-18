/*Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba
o código e o valor de quinze transações, calcule e mostre:
■■ o valor total das compras à vista;
■■ o valor total das compras a prazo;
■■ o valor total das compras efetuadas; e
■■ o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes. */

#include <stdio.h>

int main()
{

    char codigo_transacao;
    int contador = 1;
    float valor, a_vista = 0, a_prazo = 0;

    while (contador <= 5)
    {
        contador++;
        printf("Valor da compra: ");
        scanf("%f", &valor);
        printf("Tipo de pagamento(v/p): ");
        scanf(" %c", &codigo_transacao);

        if (codigo_transacao == 'v' || codigo_transacao == 'V')
        {
            a_vista = a_vista + valor;
        }
        else if (codigo_transacao == 'p' || codigo_transacao == 'P')
        {
            a_prazo = a_prazo + valor;
        }
    }

    printf("Valor total a vista = %.2f\n", a_vista);
    printf("Valor total a prazo = %.2f\n", a_prazo);
    printf("Valor total das compras efetuadas = %.2f\n", a_prazo + a_vista);
    printf("Primeira prestacao = %.2f\n", a_prazo / 3);

    return 0;
}