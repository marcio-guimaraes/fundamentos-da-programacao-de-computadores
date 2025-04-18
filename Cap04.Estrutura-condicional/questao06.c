/*Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
programa. As opções são:
a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números.*/

#include <stdio.h>
#include <math.h>

int main()
{

    double numero1, numero2, resultado;
    char operacao;

    printf("Numero 1: ");
    scanf("%lf", &numero1);
    printf("Numero 2: ");
    scanf("%lf", &numero2);
    printf("Escolha a operacao: a, b ou c: ");
    scanf(" %c", &operacao);

    switch (operacao)
    {
    case 'a':
        resultado = pow(numero1, numero2);
        printf("Resultado = %lf\n", resultado);
        break;

    case 'b':
        numero1 = sqrt(numero1);
        numero2 = sqrt(numero2);
        printf("%lf %lf\n", numero1, numero2);
        break;

    case 'c':
        numero1 = cbrt(numero1);
        numero2 = cbrt(numero2);
        printf("%lf %lf\n", numero1, numero2);
        break;

    default:
        printf("Invalido\n");
        return 1;
    }
    return 0;
}
