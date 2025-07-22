/*
╔══════════════════════╗╔══════════════════════╗╔════════════════════════════════════════╗
║       Médicos        ║║      Pacientes       ║║              Consultas                 ║
╠══════════════════════╣╠══════════════════════╣╠════════════════════════╦═══════════════╣
║ Cod_medico           ║║ Cod_pac              ║║ Num_prontuario         ║ Data_consulta ║
║ Nome                 ║║ Nome_pac             ║║ Endereco               ║ Idade         ║
║ Endereco             ║║                      ║║                        ║               ║
║ Salario              ║║                      ║║                        ║               ║
╚══════════════════════╝╚══════════════════════╝╚════════════════════════╩═══════════════╝


O programa deverá:
a) criar uma rotina para realizar inclusões e alterações no cadastro de pacientes e de médicos; 
b) criar uma rotina para excluir um médico (lembre-se: se existir alguma consulta realizada por esse médico, ele não poderá ser excluído); 
c) criar uma rotina para mostrar todas as consultas realizadas em uma data qualquer escolhida pelo usuário 
(lembre-se de mostrar também o nome do médico e o nome do paciente envolvido na consulta). 
*/

#include <stdio.h>
#include <string.h>

#define MAX_MEDICOS 10
#define MAX_PACIENTES 50
#define MAX_CONSULTAS 100

typedef struct {
    int cod_medico;
    char nome[50];
    char endereco[100];
    float salario;
} Medico;

typedef struct {
    int cod_pac;
    char nome_pac[50];
    char endereco[100];
    int idade;
} Paciente;

typedef struct {
    int num_prontuario;
    int dia, mes, ano;
    char diagnostico[200];
    int cod_medico;
    int cod_paciente;
} Consulta;

Medico medicos[MAX_MEDICOS];
Paciente pacientes[MAX_PACIENTES];
Consulta consultas[MAX_CONSULTAS];
int numMedicos = 0;
int numPacientes = 0;
int numConsultas = 0;

void menu();
void gerenciarCadastros();
void incluirMedico();
void alterarMedico();
void incluirPaciente();
void alterarPaciente();
void excluirMedico();
void mostrarConsultasPorData();
int buscarMedico(int codigo);
int buscarPaciente(int codigo);

int main() {
    menu();
    return 0;
}

void menu() {
    int opcao;
    do {
        printf("\n--- Clinica Medica ---\n");
        printf("1 - Gerenciar Cadastros (Medicos/Pacientes)\n");
        printf("2 - Excluir Medico\n");
        printf("3 - Mostrar Consultas por Data\n");
        printf("4 - Cadastrar Nova Consulta\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: gerenciarCadastros(); break;
            case 2: excluirMedico(); break;
            case 3: mostrarConsultasPorData(); break;
            case 4: {
                 if (numMedicos == 0 || numPacientes == 0) {
                    printf("Cadastre medicos e pacientes primeiro.\n");
                    break;
                }
                printf("--- Nova Consulta ---\n");
                printf("Num Prontuario: ");
                scanf("%d", &consultas[numConsultas].num_prontuario);
                printf("Data (dd mm aaaa): ");
                scanf("%d %d %d", &consultas[numConsultas].dia, &consultas[numConsultas].mes, &consultas[numConsultas].ano);
                printf("Codigo do Medico: ");
                scanf("%d", &consultas[numConsultas].cod_medico);
                printf("Codigo do Paciente: ");
                scanf("%d", &consultas[numConsultas].cod_paciente);
                printf("Diagnostico: ");
                scanf(" %[^\n]", consultas[numConsultas].diagnostico);
                numConsultas++;
                break;
            }
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);
}

void gerenciarCadastros() {
    int opcao;
    printf("\n--- Gerenciar Cadastros ---\n");
    printf("1 - Incluir Medico\n");
    printf("2 - Alterar Medico\n");
    printf("3 - Incluir Paciente\n");
    printf("4 - Alterar Paciente\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: incluirMedico(); break;
        case 2: alterarMedico(); break;
        case 3: incluirPaciente(); break;
        case 4: alterarPaciente(); break;
        default: printf("Opcao invalida!\n");
    }
}

int buscarMedico(int codigo) {
    for (int i = 0; i < numMedicos; i++) {
        if (medicos[i].cod_medico == codigo) return i;
    }
    return -1; 
}

int buscarPaciente(int codigo) {
    for (int i = 0; i < numPacientes; i++) {
        if (pacientes[i].cod_pac == codigo) return i;
    }
    return -1;
}

void incluirMedico() {
    if (numMedicos >= MAX_MEDICOS) {
        printf("Limite de medicos atingido.\n");
        return;
    }
    int cod;
    printf("Codigo do novo medico: ");
    scanf("%d", &cod);
    if (buscarMedico(cod) != -1) {
        printf("Codigo ja existe!\n");
        return;
    }
    medicos[numMedicos].cod_medico = cod;
    printf("Nome: ");
    scanf(" %[^\n]", medicos[numMedicos].nome);
    printf("Endereco: ");
    scanf(" %[^\n]", medicos[numMedicos].endereco);
    printf("Salario: ");
    scanf("%f", &medicos[numMedicos].salario);
    numMedicos++;
    printf("Medico cadastrado!\n");
}

void alterarMedico() {
    int cod, index;
    printf("Digite o codigo do medico a alterar: ");
    scanf("%d", &cod);
    index = buscarMedico(cod);
    if (index == -1) {
        printf("Medico nao encontrado.\n");
        return;
    }
    printf("Novo nome: ");
    scanf(" %[^\n]", medicos[index].nome);
    printf("Novo endereco: ");
    scanf(" %[^\n]", medicos[index].endereco);
    printf("Novo salario: ");
    scanf("%f", &medicos[index].salario);
    printf("Dados do medico alterados!\n");
}

void incluirPaciente() {
     if (numPacientes >= MAX_PACIENTES) {
        printf("Limite de pacientes atingido.\n");
        return;
    }
    int cod;
    printf("Codigo do novo paciente: ");
    scanf("%d", &cod);
    if (buscarPaciente(cod) != -1) {
        printf("Codigo ja existe!\n");
        return;
    }
    pacientes[numPacientes].cod_pac = cod;
    printf("Nome: ");
    scanf(" %[^\n]", pacientes[numPacientes].nome_pac);
    printf("Endereco: ");
    scanf(" %[^\n]", pacientes[numPacientes].endereco);
    printf("Idade: ");
    scanf("%d", &pacientes[numPacientes].idade);
    numPacientes++;
    printf("Paciente cadastrado!\n");
}

void alterarPaciente() {
    int cod, index;
    printf("Digite o codigo do paciente a alterar: ");
    scanf("%d", &cod);
    index = buscarPaciente(cod);
    if (index == -1) {
        printf("Paciente nao encontrado.\n");
        return;
    }
    printf("Novo nome: ");
    scanf(" %[^\n]", pacientes[index].nome_pac);
    printf("Novo endereco: ");
    scanf(" %[^\n]", pacientes[index].endereco);
    printf("Nova idade: ");
    scanf("%d", &pacientes[index].idade);
    printf("Dados do paciente alterados!\n");
}

void excluirMedico() {
    int cod, index;
    printf("Digite o codigo do medico a excluir: ");
    scanf("%d", &cod);
    
    for (int i = 0; i < numConsultas; i++) {
        if (consultas[i].cod_medico == cod) {
            printf("Exclusao nao permitida. Medico possui consultas.\n");
            return;
        }
    }

    index = buscarMedico(cod);
    if (index == -1) {
        printf("Medico nao encontrado.\n");
        return;
    }

    for (int i = index; i < numMedicos - 1; i++) {
        medicos[i] = medicos[i + 1];
    }
    numMedicos--;
    printf("Medico excluido com sucesso!\n");
}

void mostrarConsultasPorData() {
    int dia, mes, ano, encontrou = 0;
    printf("Digite a data (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    printf("\n--- Consultas em %02d/%02d/%d ---\n", dia, mes, ano);
    for (int i = 0; i < numConsultas; i++) {
        if (consultas[i].dia == dia && consultas[i].mes == mes && consultas[i].ano == ano) {
            int idxMedico = buscarMedico(consultas[i].cod_medico);
            int idxPaciente = buscarPaciente(consultas[i].cod_paciente);
            
            char nomeMedico[50] = "Nao encontrado";
            char nomePaciente[50] = "Nao encontrado";

            if(idxMedico != -1) strcpy(nomeMedico, medicos[idxMedico].nome);
            if(idxPaciente != -1) strcpy(nomePaciente, pacientes[idxPaciente].nome_pac);

            printf("Prontuario: %d | Medico: %s | Paciente: %s | Diagnostico: %s\n",
                consultas[i].num_prontuario,
                nomeMedico,
                nomePaciente,
                consultas[i].diagnostico
            );
            encontrou = 1;
        }
    }
    if (!encontrou) {
        printf("Nenhuma consulta encontrada para esta data.\n");
    }
}