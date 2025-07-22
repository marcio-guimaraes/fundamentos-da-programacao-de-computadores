/*
Faça um programa para:
• Cadastrar as estações climáticas, por exemplo, primavera-verão e outono-inverno.
• Cadastrar os estilistas.
• Cadastrar as roupas. Lembre-se de que estilista e estação devem ter sido previamente cadastrados.
• Mostrar um relatório de todas as roupas de determinada estação, informando, inclusive, o nome
do estilista que as desenhou.
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    int codigo;
    char nome[101];
    float salario;
} Estilista;

typedef struct
{
    int codigo;
    char descricao[101];
    int codigoEstilista;
    int codigoEstacao;
    int ano;
} Roupa;

typedef struct
{
    int codigo;
    char nome[101];
} Estacao;

void cadastrarEstacao()
{
    FILE *f = fopen("estacoes.txt", "a");
    Estacao e;
    printf("Codigo estacao: ");
    scanf("%d", &e.codigo);
    getchar();
    printf("Nome estacao: ");
    fgets(e.nome, 101, stdin);
    e.nome[strcspn(e.nome, "\n")] = 0;
    fprintf(f, "%d\n%s\n", e.codigo, e.nome);
    fclose(f);
}

void cadastrarEstilista()
{
    FILE *f = fopen("estilistas.txt", "a");
    Estilista e;
    printf("Codigo estilista: ");
    scanf("%d", &e.codigo);
    getchar();
    printf("Nome estilista: ");
    fgets(e.nome, 101, stdin);
    e.nome[strcspn(e.nome, "\n")] = 0;
    printf("Salario: ");
    scanf("%f", &e.salario);
    fprintf(f, "%d\n%s\n%.2f\n", e.codigo, e.nome, e.salario);
    fclose(f);
}

int existeEstilista(int codigo)
{
    FILE *f = fopen("estilistas.txt", "r");
    if (!f)
        return 0;
    Estilista e;
    int cod;
    char nome[101];
    float sal;
    while (fscanf(f, "%d\n%100[^\n]\n%f\n", &cod, nome, &sal) == 3)
    {
        if (cod == codigo)
        {
            fclose(f);
            return 1;
        }
    }
    fclose(f);
    return 0;
}

int existeEstacao(int codigo)
{
    FILE *f = fopen("estacoes.txt", "r");
    if (!f)
        return 0;
    Estacao e;
    int cod;
    char nome[101];
    while (fscanf(f, "%d\n%100[^\n]\n", &cod, nome) == 2)
    {
        if (cod == codigo)
        {
            fclose(f);
            return 1;
        }
    }
    fclose(f);
    return 0;
}

void cadastrarRoupa()
{
    FILE *f = fopen("roupas.txt", "a");
    Roupa r;
    printf("Codigo roupa: ");
    scanf("%d", &r.codigo);
    getchar();
    printf("Descricao: ");
    fgets(r.descricao, 101, stdin);
    r.descricao[strcspn(r.descricao, "\n")] = 0;
    printf("Codigo estilista: ");
    scanf("%d", &r.codigoEstilista);
    if (!existeEstilista(r.codigoEstilista))
    {
        printf("Estilista nao cadastrado\n");
        fclose(f);
        return;
    }
    printf("Codigo estacao: ");
    scanf("%d", &r.codigoEstacao);
    if (!existeEstacao(r.codigoEstacao))
    {
        printf("Estacao nao cadastrada\n");
        fclose(f);
        return;
    }
    printf("Ano: ");
    scanf("%d", &r.ano);
    fprintf(f, "%d\n%s\n%d\n%d\n%d\n", r.codigo, r.descricao, r.codigoEstilista, r.codigoEstacao, r.ano);
    fclose(f);
}

void mostrarRoupasPorEstacao(int codEstacao)
{
    FILE *fr = fopen("roupas.txt", "r");
    if (!fr)
        return;
    Roupa r;
    int cod, ce, cs, ano;
    char desc[101], nomeEstilista[101];
    while (fscanf(fr, "%d\n%100[^\n]\n%d\n%d\n%d\n", &cod, desc, &ce, &cs, &ano) == 5)
    {
        if (cs == codEstacao)
        {
            FILE *fe = fopen("estilistas.txt", "r");
            if (!fe)
                continue;
            while (fscanf(fe, "%d\n%100[^\n]\n%*f\n", &cod, nomeEstilista) == 2)
            {
                if (cod == ce)
                {
                    printf("Roupa: %s, Ano: %d, Estilista: %s\n", desc, ano, nomeEstilista);
                    break;
                }
            }
            fclose(fe);
        }
    }
    fclose(fr);
}

int main()
{
    int op;
    printf("1-Cadastrar estacao\n2-Cadastrar estilista\n3-Cadastrar roupa\n4-Mostrar roupas por estacao\nOpcao: ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        cadastrarEstacao();
        break;
    case 2:
        cadastrarEstilista();
        break;
    case 3:
        cadastrarRoupa();
        break;
    case 4:
        printf("Codigo estacao: ");
        int c;
        scanf("%d", &c);
        mostrarRoupasPorEstacao(c);
        break;
    }
    return 0;
}
