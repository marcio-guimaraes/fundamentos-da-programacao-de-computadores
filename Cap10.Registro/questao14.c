/*
Utilize as informações a seguir para criar um controle automatizado de uma clínica médica. sabe-se que 
essa clínica deseja ter um controle semanal (de segunda a sexta-feira) das consultas realizadas. A cada 
dia, cada médico pode realizar, no máximo, duas consultas. Considere que serão cadastrados três médi
cos e cinco pacientes. 

Paciente(cod_pac,  nome,  endereço,  fone)
Médico(cod_med,  nome,  fone,  endereço)
Consulta(num_consulta,  dia  semana,  hora,  cod_med,  cod_pac)

O programa deverá criar rotinas para:
a) cadastrar os pacientes, não permitindo dois pacientes com o mesmo código; 
b) cadastrar os médicos, não permitindo dois médicos com o mesmo código; 
c) cadastrar as consultas, obedecendo às especificações apresentadas; 
d) pesquisar as consultas de determinado médico em certo dia da semana (segunda a sexta-feira); 
e) mostrar um relatório contendo todas as consultas realizadas em um dia. 
*/

#include <stdio.h>
#include <string.h>

#define MAX_PAC 5
#define MAX_MED 3
#define MAX_CONSULTAS 30

typedef struct
{
    int cod;
    char nome[50];
    char endereco[100];
    char fone[20];
} Paciente;

typedef struct
{
    int cod;
    char nome[50];
    char endereco[100];
    char fone[20];
} Medico;

typedef struct
{
    int num;
    char dia[15];
    char hora[6];
    int codMed;
    int codPac;
} Consulta;

int main()
{
    Paciente pacientes[MAX_PAC];
    Medico medicos[MAX_MED];
    Consulta consultas[MAX_CONSULTAS];
    int qtdPac = 0, qtdMed = 0, qtdCons = 0;
    int op;

    while (1)
    {
        scanf("%d", &op);

        if (op == 1 && qtdPac < MAX_PAC)
        {
            int cod;
            scanf("%d", &cod);
            int ok = 1;
            for (int i = 0; i < qtdPac; i++)
                if (pacientes[i].cod == cod)
                    ok = 0;
            if (ok)
            {
                pacientes[qtdPac].cod = cod;
                scanf(" %[^\n]", pacientes[qtdPac].nome);
                scanf(" %[^\n]", pacientes[qtdPac].endereco);
                scanf(" %[^\n]", pacientes[qtdPac].fone);
                qtdPac++;
            }
        }

        else if (op == 2 && qtdMed < MAX_MED)
        {
            int cod;
            scanf("%d", &cod);
            int ok = 1;
            for (int i = 0; i < qtdMed; i++)
                if (medicos[i].cod == cod)
                    ok = 0;
            if (ok)
            {
                medicos[qtdMed].cod = cod;
                scanf(" %[^\n]", medicos[qtdMed].nome);
                scanf(" %[^\n]", medicos[qtdMed].endereco);
                scanf(" %[^\n]", medicos[qtdMed].fone);
                qtdMed++;
            }
        }

        else if (op == 3 && qtdCons < MAX_CONSULTAS)
        {
            Consulta nova;
            int count = 0;
            scanf("%d", &nova.num);
            scanf(" %s", nova.dia);
            scanf(" %s", nova.hora);
            scanf("%d", &nova.codMed);
            scanf("%d", &nova.codPac);
            for (int i = 0; i < qtdCons; i++)
                if (strcmp(consultas[i].dia, nova.dia) == 0 && consultas[i].codMed == nova.codMed)
                    count++;
            if (count < 2)
                consultas[qtdCons++] = nova;
        }

        else if (op == 4)
        {
            int cod;
            char dia[15];
            scanf("%d %s", &cod, dia);
            for (int i = 0; i < qtdCons; i++)
                if (consultas[i].codMed == cod && strcmp(consultas[i].dia, dia) == 0)
                    printf("%d %s\n", consultas[i].codPac, consultas[i].hora);
        }

        else if (op == 5)
        {
            char dia[15];
            scanf(" %s", dia);
            for (int i = 0; i < qtdCons; i++)
                if (strcmp(consultas[i].dia, dia) == 0)
                    printf("%d %d %s\n", consultas[i].codMed, consultas[i].codPac, consultas[i].hora);
        }

        else if (op == 0)
            break;
    }

    return 0;
}
