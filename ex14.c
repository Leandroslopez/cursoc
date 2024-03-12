#include<stdio.h>
#include<stdlib.h>
int main(){

    float dep, tx, vr, vt;
    int prazo;

    dep = 0;
    tx = 0;
    prazo = 0;
    vr = 0;
    vt = 0;

    printf("Informe o valor do deposito: R$ ");
    scanf("%f", &dep);
    printf("Informe o prazo da aplicacao, em meses: ");
    scanf("%d", &prazo);
    printf("Informe a taxa de juros mensal: ");
    scanf("%f", &tx);

    vr = (dep * (tx / 100)) * prazo;
    vt = dep + vr;

    printf("Em %d meses seus R$ %.2f iniciais renderam um total de R$ %.2f.\nO saldo total depois do rendimento e de R$ %.2f. ", prazo, dep, vr, vt);


    return 0;
}