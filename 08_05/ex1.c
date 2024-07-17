#include <stdio.h>

int main() 

{
    int value;
    printf("1 -> Verao \n");
    printf("2 -> Inverno \n");
    printf("3 -> primavera \n");
    printf("4 -> outono \n");
    printf("digite um dos numeros:");
    scanf("%d", &value);
    switch (value)
    {
    case 1:
        printf("Voce esta no verao");
        break;
    case 2:
        printf("Voce esta no inverno");
        break;
    case 3:
        printf("Voce esta na primavera");
        break;
    case 4:
        printf("Voce esta no outono");
        break;
    default:
        printf("Numero invalido");
    }
}
