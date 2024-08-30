/*Faça uma sub-rotina que receba como parâmetro o raio de uma esfera, calcule e mostre no programa principal
o seu volume: v = 4/3 * R³.*/


#include <stdio.h>
#include <math.h>

int calcular_volume(float raio);

int main(){

    float raio, volume;
    printf("Raio: ");
    scanf("%f", &raio);

    volume = calcular_volume(raio);

    printf("Volume = %.2f\n", volume);

    return 0;
}

int calcular_volume(float raio){
    float volume;

    volume = 4/3 * pow(raio, 3);

    return volume;
}