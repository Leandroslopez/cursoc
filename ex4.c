#include<stdio.h>
#include<stdlib.h>
int main (){

    float n1, n2, n3, med;
    int p1, p2, p3, totp;

    n1 = 0;
    n2 = 0;
    n3 = 0;
    p1 = 0;
    p2 = 0;
    p3 = 0;
    totp = 0;
    med = 0;

    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe o 1 peso: ");
    scanf("%d", &p1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);
    printf("Informe o 2 peso: ");
    scanf("%d", &p2);
    printf("Informe a terceira nota: ");
    scanf("%f", &n3);
    printf("Informe o 3 peso: ");
    scanf("%d", &p3);

    totp = p1 + p2 + p3;
    med = ((n1*p1) + (n2*p2) + (n3*p3)) / totp;

    printf("A media ponderada do aluno foi: %.2f pontos" , med);


return 0;
}