#include <stdio.h>

int main() 

{
    int value, um, dois;
    printf("1 -> subtraçao\n");
    printf("2 -> soma\n");
    printf("3 -> multiplicaçao\n");
    printf("4 -> divisao\n");
    printf("Digite um nos numeros: ");
    scanf("%d", &value);
    printf("Digite o primeiro valor: ");
    scanf("%d", &um);
    printf("Digite o segundo valor: ");
    scanf("%d", &dois);
    switch (value)
    {
    case 1:
        printf("o resultado é %d", um-dois);
        break;
    case 2:
        printf("o resultado é %d", um+dois);
        break;
    case 3:
        printf("o resultado é %d", um*dois);
        break;
    case 4:
        printf("o resultado é %d", um/dois);
        break;
    default:
        printf("Numero invalido");
    }
}
