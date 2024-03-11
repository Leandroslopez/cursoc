#include<stdio.h>
#include<stdlib.h>
int main() {

    float sal, n_sal, perc, aum;

    sal = 0;
    n_sal = 0;
    perc = 0;
    aum = 0;

    printf("Informe o salario atual: R$ ");
    scanf ("%f", &sal);
    printf("Informe o percentual de aumento: ");
    scanf("%f", &perc);

    aum = sal * (perc / 100);
    n_sal = sal + aum;

    printf("O aumento sera de R$ %.2f\n", aum);
    printf("O novo salario sera de R$ %.2f", n_sal);



    return 0;
}