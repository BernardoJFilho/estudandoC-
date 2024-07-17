#include <stdio.h>

int main() {
    int number;
    printf("Digite um numero: ");
    scanf("%d", &number);
    for (int i = 0; i <= number; i++)
    {
        printf("%d\n", i);
    }
    
}