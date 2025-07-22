/* Um restaurante deseja criar um controle de qualidade sobre os pratos que oferece a seus clientes. Dessa 
maneira, quer cadastrar algumas informações sobre as receitas, os ingredientes e os cozinheiros. 

As informaçõe necessárias são descritas a seguir: 
Receita(codigo da receita, nome da receita, total de calorias a cada 100g, codigo_ cozinheiro)
Ingredientes (codigo do ingrediente, descricao)  
Ingredientes/Receita(codigo do ingrediente, codigo da receita,
Quantidade,  unidade  de  medida)

Crie um programa que:
• cadastre os cozinheiros (existem apenas três nesse restaurante); 
• cadastre os ingredientes (existem no máximo 15); 
• cadastre as receitas (existem 20 receitas que utilizam no máximo três ingredientes cada); 
• mostre todas as receitas de determinado cozinheiro; 
• mostre todas as receitas cujo total de calorias esteja dentro de um intervalo especificado; 
• mostre o total de receitas elaboradas por cada um dos cozinheiros. */

#include <stdio.h>
#include <string.h>

#define MAX_COZ 3
#define MAX_ING 15
#define MAX_REC 20
#define MAX_REC_ING 3

typedef struct
{
    int cod;
    char nome[50];
} Ingrediente;

typedef struct
{
    int cod;
    char nome[50];
    float calorias;
    int codCoz;
    int qtdIng;
    int ingCods[MAX_REC_ING];
    float quantidades[MAX_REC_ING];
    char unidade[3][10];
} Receita;

typedef struct
{
    int cod;
    char nome[50];
} Cozinheiro;

int main()
{
    Cozinheiro cozinheiros[MAX_COZ];
    Ingrediente ingredientes[MAX_ING];
    Receita receitas[MAX_REC];
    int qtdCoz = 0, qtdIng = 0, qtdRec = 0;
    int op;

    while (1)
    {
        scanf("%d", &op);

        if (op == 1 && qtdCoz < MAX_COZ)
        {
            scanf("%d", &cozinheiros[qtdCoz].cod);
            scanf(" %[^\n]", cozinheiros[qtdCoz].nome);
            qtdCoz++;
        }

        else if (op == 2 && qtdIng < MAX_ING)
        {
            scanf("%d", &ingredientes[qtdIng].cod);
            scanf(" %[^\n]", ingredientes[qtdIng].nome);
            qtdIng++;
        }

        else if (op == 3 && qtdRec < MAX_REC)
        {
            Receita r;
            scanf("%d", &r.cod);
            scanf(" %[^\n]", r.nome);
            scanf("%f", &r.calorias);
            scanf("%d", &r.codCoz);
            scanf("%d", &r.qtdIng);
            for (int i = 0; i < r.qtdIng; i++)
            {
                scanf("%d", &r.ingCods[i]);
                scanf("%f", &r.quantidades[i]);
                scanf(" %[^\n]", r.unidade[i]);
            }
            receitas[qtdRec++] = r;
        }

        else if (op == 4)
        {
            int cod;
            scanf("%d", &cod);
            for (int i = 0; i < qtdRec; i++)
                if (receitas[i].codCoz == cod)
                    printf("%s\n", receitas[i].nome);
        }

        else if (op == 5)
        {
            float min, max;
            scanf("%f %f", &min, &max);
            for (int i = 0; i < qtdRec; i++)
                if (receitas[i].calorias >= min && receitas[i].calorias <= max)
                    printf("%s\n", receitas[i].nome);
        }

        else if (op == 6)
        {
            for (int i = 0; i < qtdCoz; i++)
            {
                int total = 0;
                for (int j = 0; j < qtdRec; j++)
                    if (receitas[j].codCoz == cozinheiros[i].cod)
                        total++;
                printf("%s %d\n", cozinheiros[i].nome, total);
            }
        }

        else if (op == 0)
            break;
    }

    return 0;
}
