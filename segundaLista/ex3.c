// 3. Criar um código em C para encontrar o maior e o menor elemento de um
// vetor fornecido pelo usuário.

#include <stdio.h>

int main() {
    int number, maior, menor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &number);

    int vetor[number];

    for (int i = 0; i < number; i++)
    {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < number; i++)
    {
        if (maior < vetor[i])
        {
            maior = vetor[i];
        }
        if (menor > vetor[i] || menor == 0)
        {
            menor = vetor[i];
        }
        
        
    }
    
    printf("O maior é %d e o menor é %d", maior, menor);


    
};