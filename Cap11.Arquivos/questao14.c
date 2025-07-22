/*Faça um programa que apresente o seguinte menu de opções:
1 - Criar
2 - Incluir
3 - Mostrar
4 - Sair
 Digite a opção desejada:
 Na opção 1: criar um arquivo com os campos: numero, nome, nota1 e nota2.
 Na opção 2: incluir novos registros, onde o valor de número, nome, nota1 e nota2 são fornecidos pelo
usuário (não podem ser gravados dois registros com o mesmo número).
Na opção 3: mostrar todos os registros cadastrados, calcular e apresentar a média das notas de cada
registro.
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    int numero;
    char nome[101];
    float nota1;
    float nota2;
} Registro;

int registroExiste(int numero)
{
    FILE *f = fopen("registros.txt", "r");
    if (!f)
        return 0;
    int n;
    char nome[101];
    float no1, no2;
    while (fscanf(f, "%d\n%100[^\n]\n%f\n%f\n", &n, nome, &no1, &no2) == 4)
        if (n == numero)
        {
            fclose(f);
            return 1;
        }
    fclose(f);
    return 0;
}

void incluirRegistro()
{
    Registro r;
    printf("Numero: ");
    scanf("%d", &r.numero);
    if (registroExiste(r.numero))
    {
        printf("Numero ja existe\n");
        return;
    }
    getchar();
    printf("Nome: ");
    fgets(r.nome, 101, stdin);
    r.nome[strcspn(r.nome, "\n")] = 0;
    printf("Nota1: ");
    scanf("%f", &r.nota1);
    printf("Nota2: ");
    scanf("%f", &r.nota2);
    FILE *f = fopen("registros.txt", "a");
    if (!f)
        return;
    fprintf(f, "%d\n%s\n%.2f\n%.2f\n", r.numero, r.nome, r.nota1, r.nota2);
    fclose(f);
}

void mostrarRegistros()
{
    FILE *f = fopen("registros.txt", "r");
    if (!f)
        return;
    int n;
    char nome[101];
    float no1, no2;
    while (fscanf(f, "%d\n%100[^\n]\n%f\n%f\n", &n, nome, &no1, &no2) == 4)
    {
        float media = (no1 + no2) / 2;
        printf("Numero: %d Nome: %s Nota1: %.2f Nota2: %.2f Media: %.2f\n", n, nome, no1, no2, media);
    }
    fclose(f);
}

int main()
{
    int op;
    printf("1-Criar arquivo\n2-Incluir\n3-Mostrar\n4-Sair\nOpcao: ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
    {
        FILE *f = fopen("registros.txt", "w");
        if (f)
            fclose(f);
        break;
    }
    case 2:
        incluirRegistro();
        break;
    case 3:
        mostrarRegistros();
        break;
    case 4:
        return 0;
    }
    return 0;
}
