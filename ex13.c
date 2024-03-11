#include<stdio.h>
#include<stdlib.h>
int main(){

    float rinc, gatos, rfor, rfin;

    rinc = 0;
    gatos = 0;
    rfor = 0;
    rfin = 0;

    printf("Informe a quantidade de racao em quilogramas que pedro comprou: ");
    scanf("%f", &rinc);
    printf("Informe a quantidade diaria que e fornecida para cada gato em gramas: ");
    scanf("%f", &gatos);

    rfor = (gatos * 2) * 5;
    rfin = ((rinc * 1000) - rfor) / 1000;

    printf("A quantidade de racao fornecida em 5 dias foi de %.2f gramas.\nNa embalagem agora resta somente %.2f quilos de racao.", rfor, rfin);

    return 0;
}