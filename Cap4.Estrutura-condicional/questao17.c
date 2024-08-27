/* Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531.
O programa deve mostrar uma mensagem de permissão de acesso ou não.
*/

#include <stdio.h>

int main()
{
    int senha_digitada;

    printf("Digite a senha: ");
    scanf("%d", &senha_digitada);

    if (senha_digitada == 4531)
    {
        printf("Permissao de acesso concedida.\n");
    }
    else
    {
        printf("Acesso negado. Senha incorreta.\n");
    }
    
    return 0;
}
