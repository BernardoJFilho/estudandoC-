#include <stdio.h>

int main() 

{
    int value;
    printf("1 -> Vermelho \n");
    printf("2 -> Amarelo \n");
    printf("3 -> Azul \n");
    printf("4 -> preto \n");
    printf("5 -> branco \n");
    printf("digite um dos numeros:");
    scanf("%d", &value);
    switch (value)
    {
    case 1:
        printf("Voce escolheu vermelho");
        break;
    case 2:
        printf("Voce escolheu amarelo");
        break;
    case 3:
        printf("Voce escolheu azul");
        break;
    case 4:
        printf("Voce escolheu preto");
        break;
    case 5:
        printf("Voce escolheu branco");
        break;
    default:
        printf("Numero invalido");
    }
}
