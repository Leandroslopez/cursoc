#include<stdio.h>
#include<stdlib.h>
int main (){

    float n1, n2, mep;

    n1 = 0;
    n2 = 0;
    mep = 0;
    
    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);

    mep = ((n1 * 2) + (n2 * 3)) / 5;

    printf("A media ponderado do aluno foi: %.2f", mep);

return 0;
}