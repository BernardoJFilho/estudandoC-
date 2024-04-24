#include <stdio.h>

int main() 

{
    int primeiro, segundo;
    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiro);
    printf("Digite o primeiro segundo: ");
    scanf("%d", &segundo);
    if (primeiro > segundo)
    {
        printf("O numero %d é o maior, sendo a diferença deles de %d", primeiro, primeiro-segundo);
    }
    else
        printf("O numero %d é o maior, sendo a diferença deles de %d", segundo, segundo-primeiro);
}
