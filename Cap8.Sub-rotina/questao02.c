/*Crie uma sub-rotina que receba três números inteiros como parâmetros, representando horas, minutos e segundos,
e os converta em segundos. Exemplo: 2h, 40min e 10s correspondem a 9.610 segundos.*/

#include <stdio.h>

int conversao(){

    int horas, minutos, segundos;
    printf("Forneca o horario no padrao 00:00:00\n");
    scanf("%d:%d:%d%*c", &horas, &minutos, &segundos);

    segundos += (minutos*60) + (horas * 3600);

    return segundos;
}

int main(){

    int segundos;

    segundos = conversao();

    printf("%d segundos\n", segundos);


}