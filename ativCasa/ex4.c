#include <stdio.h>

int main(){
    float nota1, nota2;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    if(nota1<0 || nota1>10){
        printf("primeira nota Invalida");
        return 0;
    }
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    if(nota2<0 || nota2>10){
        printf("segunda nota Invalida");
        return 0;
    }
    printf("A media é %.2f", (nota1+nota2)/2);
}