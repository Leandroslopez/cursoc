#include<stdio.h>
#include<stdlib.h>
int main() {

    float l1, area;

    l1 = 0;
    area = 0;

    printf("Calculo para definir a area de um quadrado\n");
    printf("Informe o tamanho dos lados do quadrado: ");
    scanf("%f", &l1);
    
    area = l1 * l1;

    printf ("A area total do quadrado e de %.2f metros", area);

    return 0;
}