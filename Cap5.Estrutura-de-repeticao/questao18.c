/*Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, sexo (M/F) 
e salário. Faça um programa que calcule e mostre:

■ a média dos salários do grupo; 
■ a maior e a menor idade do grupo;
■ a quantidade de mulheres com salário até R$ 200,00; 
■ a idade e o sexo da pessoa que possui o menor salário. 
Finalize a entrada de dados ao ser digitada uma idade negativa.*/

#include <stdio.h>

int main() {

    int idade, maior = 0, menor = 500, quantidade_pessoas = 0, mulheres = 0, idade_menor_salario;
    char sexo, sexo_menor_salario;
    float salario, total_salarios = 0, menor_salario = 50000;

    while (1) {
        printf("Idade: ");
        scanf("%d", &idade);
        if (idade < 0) {
            break;
        }

        printf("Sexo (f/m): ");
        scanf(" %c", &sexo);
        printf("Salario: ");
        scanf("%f", &salario);

        total_salarios += salario;
        quantidade_pessoas++;

        if (idade > maior) {
            maior = idade;
        }
        if (idade < menor) {
            menor = idade;
        }

        if (salario <= 200 && sexo == 'f') {
            mulheres++;
        }

        if (salario < menor_salario) {
            menor_salario = salario;
            idade_menor_salario = idade;
            sexo_menor_salario = sexo;
        }
    }

    if (quantidade_pessoas > 0) {
        printf("Media de salarios = %.2f\n", total_salarios / quantidade_pessoas);
        printf("Maior idade = %d\nMenor idade = %d\n", maior, menor);
        printf("Quantidade de mulheres que recebem menos de R$ 200 = %d\n", mulheres);
        printf("Idade e sexo da pessoa que tem o menor salario = %d, %c\n", idade_menor_salario, sexo_menor_salario);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
