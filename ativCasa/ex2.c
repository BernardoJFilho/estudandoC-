#include <stdio.h>

int main(){
    int codigo, quantidade;
    printf("| %10s | %6s | %6s |\n", "Especificação", "Código", "Preço");
    printf("|---------------|--------|-------|\n");
    printf("|%8s| %6d | %5s |\n", "cachorro quente", 100, "1.20");
    printf("| %13s | %6d | %5s |\n", "Bauru Simples", 101, "1.30");
    printf("| %13s | %6d | %5s |\n", "Bauru com ovo", 102, "1.50");
    printf("| %13s | %6d | %5s |\n", "Hamburger", 103, "1.20");
    printf("| %13s | %6d | %5s |\n", "Chesseburger", 104, "1.70");
    printf("| %13s | %6d | %5s |\n", "Suco", 105, "2.20");
    printf("| %13s | %6d | %5s |\n", "Refrigerante", 106, "1.00");
    printf("Digite o código do produto: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    if (codigo == 100)
    {
        printf("Você escolheu Cachorro quente e o valor é %.2f", 1.2*quantidade);
    }
    else if (codigo == 101)
    {
        printf("Você escolheu Bauru simples e o valor é %.2f", 1.3*quantidade);

    }
    else if (codigo == 102)
    {
        printf("Você escolheu bauru com ovo e o valor é %.2f", 1.5*quantidade);
    }
    else if (codigo == 103)
    {
        printf("Você escolheu Hamburger e o valor é %.2f", 1.2*quantidade);
    }
    else if (codigo == 104)
    {
        printf("Você escolheu Cheeseburger e o valor é %.2f", 1.7*quantidade);
    }
    if (codigo == 105)
    {
        printf("Você escolheu Suco e o valor é %.2f", 2.2*quantidade);
    }
    if (codigo == 106)
    {
        printf("Você escolheu Refrigerante e o valor é %d", 1*quantidade);
    }
    else
    {
        printf("Esta opcao nao tem no cardapio!");        
    }
    
}