#include<stdio.h>
#include<stdlib.h>
int main(){
   
    float hortrab, salmin, valhora, salbrt, salreb, imp;

    hortrab = 0;
    salmin = 0;
    valhora = 0;
    salbrt = 0;
    salreb = 0;
    imp = 0;

    printf("Informe o numero de horas trabalhadas: ");
    scanf("%f", &hortrab);
    printf("Informe o valor do salario minimo: R$ ");
    scanf("%f", &salmin);

    valhora = salmin / 2;
    salbrt = hortrab * valhora;
    imp = salbrt * 0.03;
    salreb = salbrt - imp;

    printf("O funcionario trabalhou %.2f horas.\nO salario bruto foi de R$ %.2f.\nO total de impostos foi de R$ %.2f.\nO Valor a receber e de R$ %.2f.", hortrab, salbrt, imp, salreb);

    return 0;
}
