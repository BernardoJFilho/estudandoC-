#include <stdio.h>

int main()
{
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += vetor[i];
    }

    printf("A soma é %d", soma);

}