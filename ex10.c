#include<stdio.h>
#include<stdlib.h>
int main() {

    float sal_b, grat, imp, n_sal;

    sal_b = 0;
    grat = 0;
    imp = 0;
    n_sal = 0;

    printf("Calcular salario final do funcionario depois das gratificacoes e impostos.\n");
    printf("Informe o salario base do funcionario: R$ ");
    scanf("%f", &sal_b);

    grat = sal_b * 0.05;
    imp = (sal_b + grat) * 0.07;
    n_sal = (sal_b + grat) - imp;
    
    printf("A gratificacao do funcionario foi de R$ %.2f \n", grat);
    printf("O imposto pago pelo funcionario foi de R$ %.2f\n", imp);
    printf("O salario do funcionario sera de R$ %.2f", n_sal);



    return 0;
}