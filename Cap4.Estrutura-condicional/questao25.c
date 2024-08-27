/* Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas 
   extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela consulta 
   à tabela que se segue, na qual:

   H = número de horas extras - (2/3 * número de horas falta)
   h (MINUTOS)      ||      PRÊMIO (R$)
   >= 2.400.................500,00
   1.800 - 2.400............400,00
   1.200 - 1.800............300,00
   600 - 1.200..............200,00
   < 600....................100,00
*/


#include <stdio.h>

int main(){

int extras, faltas, h, premiacao;
printf("Numero de horas extras (em minutos): ");
scanf("%d", &extras);
printf("Numero de faltas (em minutos): ");
scanf("%d", &faltas);


h = extras - (2/3 * (faltas));

if (600 > h)
{
    premiacao = 100;
} else if (h >= 600 && h< 1200)
{
    premiacao = 200; 
} else if (h >= 1200 && h < 1800)
{
    premiacao = 300;
} else if (h >= 1800 && h < 2400)
{
    premiacao = 400;
} else if (h >= 2400)
{
    premiacao = 500;
} else {
    printf("Erro!");
}


printf("Premiacao = R$ %d\n", premiacao);
return 0;
}