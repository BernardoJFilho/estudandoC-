#include <stdio.h>

int main() 

{
    char pais[15], cidade[30];
    printf("Digite o nome do seu pais: ");
    scanf("%s", &pais);
    printf("Digite o nome da sua cidade: ");
    scanf("%s", &cidade);
    printf("Bem vindo(a) a cidade %s no pais %s", cidade, pais);
}
