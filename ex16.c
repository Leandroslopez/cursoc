#include<stdio.h>
#include<stdlib.h>
int main(){
    
    float tempo, velocidade, distancia, litros_usados;

    tempo = 0;
    velocidade = 0;
    distancia = 0;
    litros_usados = 0;

    printf("Informe o tempo gasto na viagem: ");
    scanf("%f", &tempo);
    printf("Informe a velociade media da viagem: ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;
    litros_usados = distancia / 12;

    printf("A velociade media foi de %.2f Km/h\nO tempo gasto na viagem foi de %.2f horas\nA distacia percorrida foi de %.2f Quilometros\nA quantidade de combustivel utilizada foi de %.2f litros", velocidade, tempo, distancia, litros_usados);
    

    return 0;
}