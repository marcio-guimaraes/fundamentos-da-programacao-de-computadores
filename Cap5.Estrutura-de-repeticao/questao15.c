/* Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto lançado. 
   Para isso, forneceu o sexo do entrevistado e sua resposta (S — sim; ou N — não). Sabe-se que foram entrevistadas dez pessoas. 
   Faça um programa que calcule e mostre:
   ■■ o número de pessoas que responderam sim;
   ■■ o número de pessoas que responderam não;
   ■■ o número de mulheres que responderam sim; e
   ■■ a percentagem de homens que responderam não, entre todos os homens analisados. */

#include <stdio.h>

int main()
{
    char resposta, sexo;
    int count = 0, sim = 0, nao = 0, mulheres_sim = 0, homens = 0, homens_nao = 0;

    while (count < 10)
    {
        printf("Resposta (S/N): ");
        scanf(" %c", &resposta);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        if (resposta == 's' || resposta == 'S')
        {
            sim++;
            if (sexo == 'f' || sexo == 'F')
            {
                mulheres_sim++;
            }
        }
        else if (resposta == 'n' || resposta == 'N')
        {
            nao++;
            if (sexo == 'h' || sexo == 'H')
            {
                homens_nao++;
            }
        }

        if (sexo == 'h' || sexo == 'H')
        {
            homens++;
        }
        
        count++;
    }

    printf("Numero de pessoas que responderam sim = %d\n", sim);
    printf("Numero de pessoas que responderam nao = %d\n", nao);
    printf("Numero de mulheres que responderam sim = %d\n", mulheres_sim);

    if (homens > 0)
    {
        printf("Porcentagem de homens que responderam nao, dentre os homens = %.2f%%\n", 
            (float)homens_nao / homens * 100);
    }
    else
    {
        printf("Nenhum homem foi entrevistado.\n");
    }

    return 0;
}
