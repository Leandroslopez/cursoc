#include<stdio.h>
#include<stdlib.h>
int main (){
    float n1, n2, n3, med;

    n1 = 0;
    n2 = 0;
    n3 = 0;
    med = 0;

    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);
    printf("Informe a terceira nota: ");
    scanf("%f", &n3);

    med = (n1 + n2 + n3) / 3;

    printf("A media do aluno foi: %.2f", med);

    return 0;
}