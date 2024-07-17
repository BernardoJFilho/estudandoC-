#include <stdio.h>

int main() 

{
    int value, number, hab, result;
    printf("1 -> taxa de mortalidade\n");
    printf("2 -> taxa de natalidade\n");
    printf("Digite um numero:");
    scanf("%d", &value);
    switch (value)
    {
    case 1:
        printf("Digite o numero de obitos: ");
        scanf("%d", &number);
        printf("Digite o numerode habitantes: ");
        scanf("%d", &hab);
        result = (number*1000)/hab;
        printf("O resultado é %d", result);
        break;
    case 2:
        printf("Digite o numero de crianças nascidas: ");
        scanf("%d", &number);
        printf("Digite o numerode habitantes: ");
        scanf("%d", &hab);
        result = (number*1000)/hab;
        printf("O resultado é %d", result);
        break;
    default:
        printf("numero invalido");
    }
}
