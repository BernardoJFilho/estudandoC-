#include <stdio.h>
#include <math.h>

int main() 

{
    int value;
    printf("Digite um numero: ");
    scanf("%d", &value);    
    if (value > 0)
    {
        printf("A raiz do numero é %f", sqrt(value));
    }
    else
    {
        printf("O quadrado do numero é %d", value*value);
    }
    return 0;
}
