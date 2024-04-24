#include <stdio.h>

int main() 

{
    int anoAtual, anoDeNascimento, idade;
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    printf("Digite o ano que voce nasceu: ");
    scanf("%d", &anoDeNascimento);
    idade = anoAtual-anoDeNascimento;
    printf("A sua idade é %d", idade);
}
