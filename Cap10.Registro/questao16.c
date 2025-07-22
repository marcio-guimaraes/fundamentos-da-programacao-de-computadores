/*
O acervo de uma biblioteca precisa ser informatizado. Para tanto, as principais informações das obras 
foram assim estruturadas: 
Obra(numero  do  tombo,  numero  do  exemplar,  data  compra)
Tombo(numero do tombo, nome da obra, nome do autor, nome da editora, codigo da area) sabe-se que existem 20 tombos
e, para cada um, há no máximo três exemplares. Defina vetores de registro para armazenar tais informações.
 
Defina o menu de opções a seguir:
1. Cadastrar tombos. 
2. Cadastrar obras. 
3. Mostrar obras por área. 
4. Mostrar obras por autor. 
5. Mostrar obras por editora. 
6. Encerrar o programa. 
Existem três áreas: 1 — exatas; 2 — humanas e sociais; e 3 — biomédicas.
*/

#include <stdio.h>
#include <string.h>

#define MAX_TOMBOS 20
#define MAX_EXEMPLARES 3

typedef struct
{
    int numero;
    char nomeObra[50];
    char autor[50];
    char editora[50];
    int area;
} Tombo;

typedef struct
{
    int numeroTombo;
    int numeroExemplar;
    char dataCompra[11];
} Obra;

int main()
{
    Tombo tombos[MAX_TOMBOS];
    Obra obras[MAX_TOMBOS * MAX_EXEMPLARES];
    int qtdTombos = 0, qtdObras = 0;
    int op;

    while (1)
    {
        scanf("%d", &op);

        if (op == 1 && qtdTombos < MAX_TOMBOS)
        {
            scanf("%d", &tombos[qtdTombos].numero);
            scanf(" %[^\n]", tombos[qtdTombos].nomeObra);
            scanf(" %[^\n]", tombos[qtdTombos].autor);
            scanf(" %[^\n]", tombos[qtdTombos].editora);
            scanf("%d", &tombos[qtdTombos].area);
            qtdTombos++;
        }

        else if (op == 2)
        {
            int cod, count = 0;
            scanf("%d", &cod);
            for (int i = 0; i < qtdObras; i++)
                if (obras[i].numeroTombo == cod)
                    count++;
            if (count < MAX_EXEMPLARES)
            {
                obras[qtdObras].numeroTombo = cod;
                obras[qtdObras].numeroExemplar = count + 1;
                scanf(" %[^\n]", obras[qtdObras].dataCompra);
                qtdObras++;
            }
        }

        else if (op == 3)
        {
            int area;
            scanf("%d", &area);
            for (int i = 0; i < qtdTombos; i++)
                if (tombos[i].area == area)
                    printf("%s\n", tombos[i].nomeObra);
        }

        else if (op == 4)
        {
            char autor[50];
            scanf(" %[^\n]", autor);
            for (int i = 0; i < qtdTombos; i++)
                if (strcmp(tombos[i].autor, autor) == 0)
                    printf("%s\n", tombos[i].nomeObra);
        }

        else if (op == 5)
        {
            char editora[50];
            scanf(" %[^\n]", editora);
            for (int i = 0; i < qtdTombos; i++)
                if (strcmp(tombos[i].editora, editora) == 0)
                    printf("%s\n", tombos[i].nomeObra);
        }

        else if (op == 6)
            break;
    }

    return 0;
}
