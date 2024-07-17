#include <stdio.h>

int main() {
    char param[2];
    float value1, value2;
    printf("Digite a operaçao que deseja[+, -, /, *]: ");
    scanf("%c", param);
    printf("digite o primeiro valor: ");
    scanf("%f", &value1);
    printf("digite o segundo valor: ");
    scanf("%f", &value2);
    switch (param[0])
    {
    case '+':
        printf("O resultado é %f", value1+value2);
        break;
    case '-':
        printf("O resultado é %f", value1-value2);
        break;
    case '/':
        printf("O resultado é %f", value1/value2);
        break;
    case '*':
        printf("O resultado é %f", value1*value2);
        break;
    default:
        printf("Parametro invalido");
    }
}