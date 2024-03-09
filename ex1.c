#include<stdio.h>
#include<stdlib.h>
int main() {
    
    //declaração de variáveis
    int n1, n2, n3, soma;

    //inicializar as variáveis
    n1 = 0;
    n2 = 0;
    n3 = 0;
    soma = 0;

    //receber os dados
    printf("Informe o 1 numero: ");
    scanf("%d", &n1);
    printf("Informe o 2 numero: ");
    scanf("%d", &n2);
    printf("Informe o 3 numero: ");
    scanf("%d", &n3);

    //realizar o cálculo
    soma = n1 + n2 + n3;

    //mostrar o resultado
    printf("Soma: %d", soma);
    
    return 0;
    
    }