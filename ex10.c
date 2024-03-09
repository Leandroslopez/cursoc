#include<stdio.h>
#include<stdlib.h>
int main() {

    float sal_b, sal_imp, sal_reb, grat, impos;

    sal_b = 0;
    sal_reb = 0;
    sal_imp = 0;
    grat = 0;
    impos = 0;

    printf("Calcular salario final do funcionario depois das gratificacoes e impostos\n");
    printf("Informe o salario base do funcionario: R$ ");
    scanf("%f", &sal_b);

    grat = sal_b * 0.05;
    sal_imp = sal_b + grat;
    impos = sal_imp * 0.07;
    




    return 0;
}