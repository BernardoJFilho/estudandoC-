#include <stdio.h>

int main() 

{
    int value;
    printf("digite um numero de 1 a 7:");
    scanf("%d", &value);
    switch (value)
    {
    case 1:
        printf("Voce escolheu Domingo, Fim de semana");
        break;
    case 2:
        printf("Voce escolheu segunda, Dia util");
        break;
    case 3:
        printf("Voce escolheu terça, Dia util");
        break;
    case 4:
        printf("Voce escolheu quarta, Dia util");
        break;
    case 5:
        printf("Voce escolheu quinta, Dia util");
        break;
    case 6:
        printf("Voce escolheu sexta, Dia util");
        break;
    case 7:
        printf("Voce escolheu sabado, Fim de semana");
        break;
    default:
        printf("Numero invalido");
    }
}
