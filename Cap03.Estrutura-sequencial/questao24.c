/*Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela
vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina. Sabe-se
que a cotação do dólar é de R$ 1,80; do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57. O
programa deve fazer as conversões e mostrá-las.*/

#include <stdio.h>

int main()
{

    float reais, dolar, marco_alemao, libra_esterlina;
    printf("Digite em reais a quantidade de dinheiro: ");
    scanf("%f", &reais);

    dolar = reais * 1.80;
    marco_alemao = reais * 2.00;
    libra_esterlina = reais * 3.57;

    printf("Dolar = %2.f\nMarco Alemao = %.2f\nLibra Esterlina = %.2f\n", dolar, marco_alemao, libra_esterlina);
    return 0;
}