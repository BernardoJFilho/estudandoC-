#include <stdio.h>

int main() 
{
    int vetor[10] = {4, 7, 9, 15, 50, 73, 40, 8, 34, 70};
    int maiorNumber = 0;
    for (int i = 0; i < 10; i++)
    {
        if (maiorNumber < vetor[i]) {
            maiorNumber = vetor[i];
        }
    }

    printf("O maior numero da matriz é %d", maiorNumber);
    
}