/*Faça um programa que mostre todos os recebimentos com data de vencimento dentro de um período qual
quer. Não se esqueça de mostrar também o nome do cliente e o total de dias em atraso. Quando não houver
atraso, mostrar zero. */

#include <stdio.h>
#include <string.h>
#include <time.h>

int dataParaTimestamp(const char *data)
{
    int d, m, a;
    sscanf(data, "%d/%d/%d", &d, &m, &a);
    struct tm tm_data = {0};
    tm_data.tm_mday = d;
    tm_data.tm_mon = m - 1;
    tm_data.tm_year = a - 1900;
    return (int)mktime(&tm_data);
}

int diasAtraso(const char *data_venc)
{
    time_t hoje = time(NULL);
    int t_venc = dataParaTimestamp(data_venc);
    int diff = (int)((hoje - t_venc) / (60 * 60 * 24));
    return diff > 0 ? diff : 0;
}

int dataEntre(const char *data, const char *inicio, const char *fim)
{
    int d = dataParaTimestamp(data);
    int i = dataParaTimestamp(inicio);
    int f = dataParaTimestamp(fim);
    return d >= i && d <= f;
}

char nomeCliente(int cod, char *nome)
{
    FILE *fc = fopen("clientes.txt", "r");
    if (!fc)
        return 0;
    int c;
    char n[101], e[1001], f[21];
    while (fscanf(fc, "%d\n%100[^\n]\n%1000[^\n]\n%20[^\n]\n", &c, n, e, f) == 4)
    {
        if (c == cod)
        {
            strcpy(nome, n);
            fclose(fc);
            return 1;
        }
    }
    fclose(fc);
    return 0;
}

int main()
{
    char inicio[11], fim[11];
    printf("Data inicio (DD/MM/AAAA): ");
    getchar();
    fgets(inicio, 11, stdin);
    inicio[strcspn(inicio, "\n")] = 0;
    printf("Data fim (DD/MM/AAAA): ");
    fgets(fim, 11, stdin);
    fim[strcspn(fim, "\n")] = 0;
    FILE *fr = fopen("recebimentos.txt", "r");
    if (!fr)
        return 1;
    int nd, cc;
    float val;
    char dem[11], dvc[11], nome[101];
    while (fscanf(fr, "%d\n%f\n%10[^\n]\n%10[^\n]\n%d\n", &nd, &val, dem, dvc, &cc) == 5)
    {
        if (dataEntre(dvc, inicio, fim))
        {
            if (nomeCliente(cc, nome))
            {
                printf("Doc: %d Cliente: %s Valor: %.2f Venc: %s Atraso: %d dias\n", nd, nome, val, dvc, diasAtraso(dvc));
            }
        }
    }
    fclose(fr);
    return 0;
}
