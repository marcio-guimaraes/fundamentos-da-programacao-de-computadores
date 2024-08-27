/*Uma companhia de teatro deseja montar uma série de espetáculos. A direção calcula que, a
R$ 5,00 o ingresso, serão vendidos 120 ingressos, e que as despesas serão de R$ 200,00. Diminuindo-se em
R$ 0,50 o preço dos ingressos, espera-se que as vendas aumentem em 26 ingressos. Faça um programa que
escreva uma tabela de valores de lucros esperados em função do preço do ingresso, fazendo-se variar esse
preço de R$ 5,00 a R$ 1,00, de R$ 0,50 em R$ 0,50. Escreva, ainda, para cada novo preço de ingresso, o lucro
máximo esperado, o preço do ingresso e a quantidade de ingressos vendidos para a obtenção desse lucro. */

#include <stdio.h>

int main()
{

    float valor = 5, despesas = 200, maior_lucro = 0;
    int quantidade = 120, contador = 0;

    while (valor >= 1)
    {
        float lucro = (quantidade * valor) - despesas;
        if (lucro > maior_lucro)
        {
            maior_lucro = lucro;
        }

        printf("%d ingressos seriam vendidos por R$: %.2f - Lucro = %.2f\t", quantidade, valor, lucro);
        quantidade += 26;
        valor -= 0.5;
        contador++;

        // APENAS PARA DEIXAR A SAIDA MAIS ORGANIZADA
        if (contador == 2)
        {
            printf("\n");
            contador = 0;
        }
    }
    printf("\nO maior lucro foi de = %.2f\n", maior_lucro);

    return 0;
}