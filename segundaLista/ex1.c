// 1. Declara uma matriz, solicita ao usuário que insira os valores para cada
// elemento da matriz e, em seguida, imprime todos os elementos da matriz.

#include <stdio.h>

int main() {
        int matriz[3][4];
        printf("lembre que a quantidade de numeros dessa matriz é 12\n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("Digite o numero que estara na linha %d e coluna %d: ", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("%4d", matriz[i][j]);   
            }
            printf("\n");
        }
}