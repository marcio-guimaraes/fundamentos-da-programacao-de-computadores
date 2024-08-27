/*Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento.*/

#include <stdio.h>

int main()
{

    float salario;
    printf("Valor do salario: ");
    scanf("%f", &salario);

    if (salario < 500)
    {
        printf("Reajuste = %.2f\n", salario * 1.30);
    }
    else
    {
        printf("Voce nao tem direito a aumento\n");
    }
    return 0;
}