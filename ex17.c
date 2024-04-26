#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Declaração das variáveis
    int op;
    float valor;
    int qtd;
    float total;
    bool flag;
    //Inicialização da variável flag
    flag=true;
    //Apresentar o menu
    printf("Menu\n");
    printf("101 - Cachorro Quente\n");
    printf("102 - Salgado\n");
    printf("201 - Suco\n");
    printf("202 - Refrigerante\n");
    printf("Op.: ");
    scanf("%d",&op);
    //Tratamento das opções
    switch (op){
        case 101:
            valor = 8.5;
        break;
        case 102:
            valor = 6;
        break;
        case 201:
            valor = 5;
        break;
        case 202:
            valor = 6.5;
        break;
        default:
            printf("Op. Invalida\n");
            flag = false;
        break;
    }
    //Verificar se o cálculo será ou não realizado
    if(flag)
    {
        printf("Informe a qtd.: ");
        scanf("%d",&qtd);
        total = qtd*valor;
        printf("Valor a pagar: %.2f\n",total);
    }


    return 0;
}