#include <stdio.h>


int main(){
    char palavra[50];
    printf("Digite uma palavra qualquer: ");
    scanf("%c", palavra);
    switch (palavra[0])
    {
    case 'a':
        printf("Começa com vogal");
        break;
    case 'e':
        printf("Começa com vogal");
        break;
    case 'i':
        printf("Começa com vogal");
        break;
    case 'o':
        printf("Começa com vogal");
        break;
    case 'u':
        printf("Começa com vogal");
        break;
    default:
        printf("Começa com consoante");
        break;
    }
}