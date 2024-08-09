#include <stdio.h>

int main() 
{
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int mult = 2;
    int linhas = 2, colunas = 3;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] *= mult;
        }
    }
    
    printf("Matriz apos multiplicaçao\n");

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

}