#include <stdio.h>

int main() 

{
    int num1, num2, num3, mult;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    mult = num1 * num2 * num3;
    printf("A mltiplicacao de %d x %d x %d é: %d\n", num1, num2, num3, mult);
}
