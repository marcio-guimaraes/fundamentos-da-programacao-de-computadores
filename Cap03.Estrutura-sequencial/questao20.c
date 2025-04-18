/*Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a distância
em que a escada está da parede, calcule e mostre a medida da escada para que se possa alcançar sua ponta.
OBS: M_PI é próprio da biblioteca math.h então recomendo usar o parametro -lm para compilar */

#include <stdio.h>
#include <math.h>

int main()
{
    float angulo, escada_parede, tam_escada;

    printf("Distancia da escada para a parede: ");
    scanf("%f", &escada_parede);
    printf("Medida do angulo: ");
    scanf("%f", &angulo);

    angulo = angulo * M_PI / 180;
    tam_escada = escada_parede / (cos(angulo));
    printf("Tamanho necessario para a escada: %.2f", tam_escada);

    return 0;
}