#include <stdio.h>

int main() 

{
    int value, price;
    printf("1 -> a vista\n");
    printf("2 -> a prazo\n");
    printf("Digite um numero:");
    scanf("%d", &value);
    switch (value)
    {
    case 1:
        printf("Digite o valor do produto: ");
        scanf("%d", &price);
        printf("o valor final é %f", price*0.9);
        break;
    case 2:
        printf("Digite o valor do produto: ");
        scanf("%d", &price);
        printf("o valor final é %d", price);
        break;
    default:
        printf("numero invalido");
    }
}
