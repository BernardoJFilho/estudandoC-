// 2. Solicita ao usuário que insira os valores para uma matriz de tamanho
// especificado pelo usuário, e depois calcula a soma de todos os elementos
// da matriz. Em seguida, o programa imprime a matriz e a soma dos
// elementos.

#include <stdio.h>

int main() {
    int linhas, colunas, soma;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("Digite o numero da linha->%d e coluna->%d: ", i, j);
            soma += matriz[i][j];
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("--------------------------------\n");
    printf("O resultado da soma é %d\n", soma);
    printf("--------------------------------\n");

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%4d", matriz[i][j]);   
        }
        printf("\n");
    }
    

}