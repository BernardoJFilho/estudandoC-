// 5. Leia um vetor do usuário, calcule e exiba a soma e a média dos
// elementos.

#include <stdio.h>

int main() {
    int soma, tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o elemento %d", i +1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    printf("A soma dos elementos é %d, e a media é %d", soma, soma/tamanho);

}