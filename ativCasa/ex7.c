#include <stdio.h>


int main(){
    char nome[50];
    printf("Digite uma palavra(letras minusculas): ");
    scanf("%s", &nome);
    if (nome[0]=='a'|| nome[0]=='e'|| nome[0]=='i'|| nome[0]=='o'|| nome[0]=='u')
    {
        printf("A palavra começa com vogal -> %c", nome[0]);
    }
    else printf("A palavra começa com consoante %c", nome[0]);
    
}