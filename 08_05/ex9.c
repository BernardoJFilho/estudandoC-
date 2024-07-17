#include <stdio.h>

int main() 

{
    int value;
    printf("1 -> Vestuario\n");
    printf("2 -> Higiene Pessoal\n");
    printf("3 -> Produto perecivel\n");
    printf("Digite um nos numeros");
    scanf("%d", &value);
    switch (value)
    {
    case 1:
        printf("Voce escolheu vestuario");
        break;
    case 2:
        printf("Voce escolheu Higiene pessoal");
        break;
    case 3:
        printf("Voce escolheu produto perecivel");
        break;
    default:
        printf("Numero invalido");
    }
}
