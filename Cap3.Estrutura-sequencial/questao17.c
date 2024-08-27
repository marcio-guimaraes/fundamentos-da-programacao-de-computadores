/*Faça um programa que receba o raio, calcule e mostre:
a) o comprimento de uma esfera; sabe-se que C = 2 * p R;
b) a área de uma esfera; sabe-se que A = p R2;
c) o volume de uma esfera; sabe-se que V = 3⁄4 * p R3.
OBS: M_PI é próprio da biblioteca math.h então recomendo usar o parametro -lm para compilar*/

#include <stdio.h>
#include <math.h>

int main()
{

    double raio, c, a, v;
    printf("Digite o raio: ");
    scanf("%lf", &raio);

    c = 2 * M_PI * raio;
    a = M_PI * pow(raio, 2);
    v = 3.0 / 4 * M_PI * pow(raio, 3);

    printf("Comprimento = %.3lf\nArea = %.3lf\nVolume = %.3lf\n", c, a, v);
    return 0;
}