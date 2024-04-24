#include <stdio.h>

int main() 

{
    float num1, num2, num3, mult;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);
    mult = (num1 + num2 + num3)/3;
    printf("A media dos numeros é igual a %f", mult);
}
