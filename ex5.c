#include<stdio.h>
#include<stdlib.h>
int main() {

    float sal, n_sal, aum;

    sal = 0;
    n_sal = 0;
    aum = 0;

    printf("Informe o salario atual: R$ ");
    scanf("%f", &sal);

    aum = sal * 0.25;
    n_sal = sal + aum;
    
    printf("O novo salario sera de: R$ %.2f", n_sal);


    return 0;

    }