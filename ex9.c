#include<stdio.h>
#include<stdlib.h>
int main() {

    float bmenor, bmaior, alt, area;

    bmenor = 0;
    bmaior = 0;
    alt = 0;
    area = 0;

    printf("Calculo para definir a area de um trapezio\n");
    printf("Informe a base maior: ");
    scanf("%f", &bmaior);
    printf("Informe a base menor: ");
    scanf("%f", &bmenor);
    printf("Informe a altura: ");
    scanf("%f", &alt);

    area = ((bmaior + bmenor) * alt) / 2;

    printf("A area total do trapezio e de %.2f metros", area);


    return 0;
}