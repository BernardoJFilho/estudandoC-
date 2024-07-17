#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    char sexo[2];
    int idade;
    printf("Digite o seu nome: ");
    scanf("%s", name);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("digite o seu sexo[M, F]: ");
    scanf("%s", sexo);
    if (strcmp(sexo, "F") == 0 && idade < 25) {
        printf("nome: %s , ACEITA", name);
    } else {
        printf("Não aceita");
    }

}