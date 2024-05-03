#include <stdio.h>
#include <string.h>

int main(){
    float valor;
    char estado[3];
    printf("digite o valor: ");
    scanf("%f", &valor);
    printf("Digite o estado(MG, SP, RJ, MS): ");
    scanf("%s", &estado);
    if (strcmp(estado, "MG")==0)
    {
        printf("O preço final é igual a %.2f", valor*1.07);
    }
    else if (strcmp(estado, "SP")==0)
    {
        printf("O preço final é igual a %.2f", valor*1.12);
    }
    else if (strcmp(estado, "RJ")==0)
    {
        printf("O preço final é igual a %.2f", valor*1.15);
    }
    else if (strcmp(estado, "MS")==0)
    {
        printf("O preço final é igual a %.2f", valor*1.08);
    }
    else printf("Estado inválido");
}