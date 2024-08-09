#include <stdio.h>

int main()
{
    int matriz[3][4] = {
        {5, 6, 2, 10},
        {10, 15, 20, 40},
        {40, 80, 100, 200}
    };
    int soma = 0;

    for (int i = 0; i < 3; i++)
    {
        soma = 0;
        for (int j = 0; j < 4; j++)
        {
            soma += matriz[i][j];
        }
        printf("A soma é %d\n", soma);
    }
}