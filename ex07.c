#include<stdio.h>
#include<stdlib.h>
int main() {

    float base, alt, area;

    base = 0;
    alt = 0;
    area = 0;

    printf("Calculo para definir a area de um triangulo. \n");
    printf("Informe a base do triangulo: ");
    scanf("%f", &base);
    printf("Informe a altura do triangulo: ");
    scanf("%f", &alt);

    area = (base * alt) / 2;

    printf("A area do tringulo e de %.2f metros", area);

    return 0;
}
