/*
   Faça um programa que apresente o menu de opções a seguir, que permita ao usuário escolher a opção 
   desejada, receba os dados necessários para executar a operação e mostre o resultado. Verifique a possibilidade
    de opção inválida e não se preocupe com as restrições como salário inválido. 
   
   Menu de opções:
   1. Novo salário 
   2. Férias 
   3. Décimo terceiro 
   4. Sair 
   
   Digite a opção desejada.
   
   Na opção 1: receber o salário de um funcionário, calcular e mostrar o novo salário usando as regras a seguir:

   SALÁRIOS                                 PERCENTAGEM DE AUMENTO
   Até R$ 210,00                            15%
   De R$ 210,00 a R$ 600,00 (inclusive)     10%
   Acima de R$ 600,00                       5%
   
   Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor de suas férias. Sabe-se que as 
   férias equivalem a seu salário acrescido de um terço do salário.
   
   Na opção 3: receber o salário de um funcionário e o número de meses de trabalho na empresa, no máximo 
   doze, calcular e mostrar o valor do décimo terceiro. Sabe-se que o décimo terceiro equivale a seu salário 
   multiplicado pelo número de meses de trabalho dividido por 12.
   
   Na opção 4: sair do programa.
*/


#include <stdio.h>

int main()
{
    int opcao, meses;
    float salario;

    while (1)
    {
        printf("Opcao desejada: ");
        scanf("%d", &opcao);

        // Verifica se a opção é para sair do programa
        if (opcao == 4)
        {
            break;
        }

        // Recebe o salário do usuário
        printf("Salario: ");
        scanf("%f", &salario);

        // Verifica se o salário é válido
        if (salario < 0)
        {
            printf("Salario invalido!\n");
            continue;
        }

        // Processa as opções do menu
        switch (opcao)
        {
            case 1: // Novo salário
                if (salario <= 210)
                {
                    printf("Novo salario = %.2f\n", salario * 1.15);
                }
                else if (salario <= 600)
                {
                    printf("Novo salario = %.2f\n", salario * 1.10);
                }
                else
                {
                    printf("Novo salario = %.2f\n", salario * 1.05);
                }
                break;
                
            case 2: // Férias
                printf("Valor das ferias = %.2f\n", salario + (salario / 3));
                break;

            case 3: // Décimo terceiro
                printf("Meses: ");
                scanf("%d", &meses);
                
                // Verifica se o número de meses é válido
                if (meses < 1 || meses > 12)
                {
                    printf("Meses invalidos!\n");
                    continue;
                }
                
                printf("Valor do decimo terceiro = %.2f\n", salario * meses / 12);
                break;
                
            default: // Opção inválida
                printf("Opcao invalida!\n");
                break;
        }
    }

    return 0;
}
