/* Faça um programa que receba o preço, a categoria (1 — limpeza; 2 — alimentação; ou 3 — vestuário)
   e a situação (R — produtos que necessitam de refrigeração; e N — produtos que não necessitam de refrigeração).
   Calcule e mostre:
   ■ O valor do aumento, usando as regras que se seguem.
     PREÇO          ||      CATEGORIA       ||      PERCENTUAL DE AUMENTO
     <= 25..................1.......................5%.....................
............................2.......................8%.....................
............................3.......................10%....................
     > 25...................1.......................12%....................
............................2.......................15%....................
............................3.......................18%....................

   ■ O valor do imposto, usando as regras a seguir.
     O produto que preencher pelo menos um dos seguintes requisitos pagará imposto equivalente a 5%
     do preço; caso contrário, pagará 8%. Os requisitos são:
     - Categoria: 2
     - Situação: R

   ■ O novo preço, ou seja, o preço mais aumento menos imposto.
   ■ A classificação, usando as regras a seguir.
     NOVO PREÇO....................CLASSIFICAÇÃO
     <= 50R$.......................Barato..................
     (50R$ - 120R$]................Normal..................
     >= 120R$......................Caro....................
*/

#include <stdio.h>

int main()
{
    int categoria;
    float preco, novo_preco;
    char situacao;

    printf("Preco do produto: ");
    scanf("%f", &preco);
    printf("Categoria do produto (1-limpeza, 2-alimentacao, 3-vestuario): ");
    scanf("%d", &categoria);
    printf("Situacao do produto (R-necessita refrigeracao, N-nao necessita refrigeracao): ");
    scanf(" %c", &situacao);

    // Calcular o aumento
    if (preco <= 25)
    {
        switch (categoria)
        {
        case 1:
            preco *= 1.05;
            break;
        case 2:
            preco *= 1.08;
            break;
        case 3:
            preco *= 1.10;
            break;
        default:
            printf("Categoria invalida\n");
            return 1;
        }
    }
    else
    {
        switch (categoria)
        {
        case 1:
            preco *= 1.12;
            break;
        case 2:
            preco *= 1.15;
            break;
        case 3:
            preco *= 1.18;
            break;
        default:
            printf("Categoria invalida\n");
            return 1;
        }
    }

    // Calcular o imposto
    if (categoria == 2 || situacao == 'R')
    {
        novo_preco = preco * 0.95;
    }
    else
    {
        novo_preco = preco * 0.92;
    }

    // Classificar o novo preço
    if (novo_preco <= 50)
    {
        printf("Classificacao: Barato\n");
    }
    else if (novo_preco <= 120)
    {
        printf("Classificacao: Normal\n");
    }
    else
    {
        printf("Classificacao: Caro\n");
    }

    printf("Preco original com aumento: R$%.2f\n", preco);
    printf("Novo preco apos impostos: R$%.2f\n", novo_preco);

    return 0;
}
