/*
Uma loja de eletrodomésticos está fazendo uma promoção entre seus 15 mil clientes. Todos os clientes
que gastarem mais de R$ 5.000,00 em compras passarão a ser considerados clientes VIP, tendo 15% de
desconto em todas as suas compras posteriores. Esse valor é cumulativo, mas precisa atingir R$ 5.000,00
dentro de seis meses a partir da primeira compra ou será zerado.

Faça um programa que:
a) cadastre os clientes dessa loja. Para cada cliente devem ser cadastrados: nome do cliente, CPF, RG, endereço,
data da primeira compra, total gasto desde sua primeira compra e um campo que diz se o cliente é VIP ou
não. O campo que guarda o total gasto pelo cliente deve sempre iniciar com zero, e o campo em que diz se o
cliente é VIP deve começar como FALSO;
b) atualize o total gasto por determinado cliente. Deve-se ler um RG e, caso este seja encontrado na lista de
clientes, deve-se entrar com um novo valor que atualizará o campo total gasto por esse cliente. Depois de
entrar com o novo total gasto, deve-se fazer um teste para verificar se o valor chegou a R$ 5.000,00. Em caso
positivo, o cliente passará a ser VIP. Esse teste só será realizado caso o cliente ainda não seja VIP;
c) teste se o total gasto de cada cliente não VIP deve ser zerado. se o tempo entre a data da primeira compra de
um cliente e a data atual exceder seis meses, o total gasto por esse cliente deverá ser zerado. lembre-se de que
isso só vale para clientes não VIP.
*/

#include <stdio.h>
#include <string.h>

#define MAX_CLIENTES 15000

typedef struct
{
    char nome[50];
    char cpf[15];
    char rg[15];
    char endereco[100];
    char dataPrimeiraCompra[11];
    float totalGasto;
    int vip;
} Cliente;

int main()
{
    Cliente clientes[MAX_CLIENTES];
    int qtd = 0, op;

    while (1)
    {
        scanf("%d", &op);

        if (op == 1)
        {
            scanf(" %[^\n]", clientes[qtd].nome);
            scanf(" %[^\n]", clientes[qtd].cpf);
            scanf(" %[^\n]", clientes[qtd].rg);
            scanf(" %[^\n]", clientes[qtd].endereco);
            scanf(" %[^\n]", clientes[qtd].dataPrimeiraCompra);
            clientes[qtd].totalGasto = 0;
            clientes[qtd].vip = 0;
            qtd++;
        }

        else if (op == 2)
        {
            char rg[15];
            float valor;
            scanf(" %[^\n]", rg);
            for (int i = 0; i < qtd; i++)
            {
                if (strcmp(clientes[i].rg, rg) == 0)
                {
                    scanf("%f", &valor);
                    clientes[i].totalGasto += valor;
                    if (!clientes[i].vip && clientes[i].totalGasto >= 5000)
                        clientes[i].vip = 1;
                    break;
                }
            }
        }

        else if (op == 3)
        {
            for (int i = 0; i < qtd; i++)
            {
                if (!clientes[i].vip)
                {
                    int ano1, mes1, dia1, ano2, mes2, dia2;
                    sscanf(clientes[i].dataPrimeiraCompra, "%d/%d/%d", &dia1, &mes1, &ano1);
                    scanf("%d/%d/%d", &dia2, &mes2, &ano2);
                    int meses = (ano2 - ano1) * 12 + (mes2 - mes1);
                    if (meses > 6)
                        clientes[i].totalGasto = 0;
                }
            }
        }

        else if (op == 0)
            break;
    }

    return 0;
}
