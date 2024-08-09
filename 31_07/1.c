#include <stdio.h>

int main() {
    // int vetor[5] = {1, 2, 3, 4, 5};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("vetor[%d] = %d\n", i, vetor[i]);
    // }

    int matriz[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }
}