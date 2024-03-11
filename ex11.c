#include<stdio.h>
#include<stdlib.h>
int main (){

    float p_fab, p_luc, luc, p_imp, imp, p_fin;

    p_fab = 0;
    p_luc = 0;
    luc = 0;
    p_imp = 0;
    imp = 0;
    p_fin = 0;


    printf("Calculo para preco final de um veiculo\n");
    printf("Informe o preco de fabrica do veiculo: R$");
    scanf("%f", &p_fab);
    printf("Informe o percentual de lucro: ");
    scanf("%f", &p_luc);
    printf("Informe o percentual de impostos: ");
    scanf("%f", &p_imp);

    luc = p_fab * (p_luc/100);
    imp = p_fab * (p_imp/100);
    p_fin = p_fab + luc + imp;

    printf("O valor correspondente ao lucro sera de R$ %.2f\n", luc);
    printf("O valor correspondente ao imposto sera de R$ %.2f\n", imp);
    printf("O preco final do carro sera de R$ %.2f", p_fin);


    return 0;
}