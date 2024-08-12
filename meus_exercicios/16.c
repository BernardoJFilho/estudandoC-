// Questão 16:
// Escreva um programa que leia três números inteiros e determine qual é o maior e qual é o menor.

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);
    if (a>b && a>c)
    {
        printf("O numero %d e o maior", a);
    } else if (b>a && b>c) {
        printf("O numero %d e o maior", b);
    } else {
        printf("O numero %d e o maior", c);
    }
}