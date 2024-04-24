#include <stdio.h>

int main() 

{
    int idade;
    float altura;
    char nome[30];
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Nome: %s \nIdade: %f \nAltura: %d", nome, idade, altura);
}
