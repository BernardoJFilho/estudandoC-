// 4. Leia um vetor do usuário e copie os elementos para outro vetor.

#include <stdio.h>

int main() {
    int number;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &number);

    int vetorUm[number], vetorDois[number];

    for (int i = 0; i < number; i++)
    {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetorUm[i]);
    }

    for (int i = 0; i < number; i++)
    {
        vetorDois[i] = vetorUm[i];
        printf("%d ", vetorDois[i]);
    }
}