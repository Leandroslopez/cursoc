#include<stdio.h>
#include<stdlib.h>
int main(){

    float vinc, chq1, chq2, cpmf, vfin;

    vinc = 0;
    chq1 = 0;
    chq2 = 0;
    cpmf = 0;
    vfin = 0;

    printf("Saldo bancario depois de descontar 2 cheques e sua respectivas taxas\n");
    printf("Informe o salario depositado: R$ ");
    scanf("%f", &vinc);
    printf("Informe o valor do primeiro cheque: R$ ");
    scanf("%f", &chq1);
    printf("Informe o valor do segundo cheque: R$ ");
    scanf("%f", &chq2);

    cpmf = (chq1 + chq2) * (0.38/100);
    vfin = vinc - chq1 - chq2 - cpmf;

    printf("O saldo final depois de descontar os 2 cheques e o imposto de R$ %.2f sera de R$ %.2f.", cpmf, vfin);

    return 0;
}