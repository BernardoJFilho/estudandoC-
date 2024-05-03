#include <stdio.h>

int main(){
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    if (idade>=18)
    {
        printf("Você é um senior");
    }
    else if (idade>=14 && idade<=17)
    {
        printf("Você é um juvenil B");
    }
    else if (idade>=11 && idade<=13)
    {
        printf("Você é um juvenil A");
    }
    else if (idade>=8 && idade<=10)
    {
        printf("Você é um infantil B");
    }
    else if (idade>=5 && idade<=7)
    {
        printf("Você é um infantil A");
    }
    else {
        printf("Você não está nos requisitos");
    }
}