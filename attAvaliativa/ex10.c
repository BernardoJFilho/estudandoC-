#include <stdio.h>

int main() {
    float valor, anos, taxa, juros;
    printf("Digite o valor inicial: ");
    scanf("%f", &valor);
    printf("Digite o tempo em anos: ");
    scanf("%f", &anos);
    printf("Digite a taxa anual em porcentagem: ");
    scanf("%f", &taxa);
    taxa = taxa/100;
    while (anos > 0)
    {
        juros = valor*taxa;
        valor = valor+juros;
        anos = anos-1;
    }
    printf("O valor final é de %f", valor);
    
}