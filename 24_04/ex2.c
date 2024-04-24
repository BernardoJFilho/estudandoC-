#include <stdio.h>
#include <math.h>

int main() 

{
    int value;
    float raiz;
    printf("Digite um numero: ");
    scanf("%d", &value);    
    if (value > 0)
    {
        raiz = sqrt(value);
        printf("A raiz do numero é %f", raiz);
    }
    else
    {
        printf("numero invalido");
    }
    return 0;
}
