#include <stdio.h>
#include <math.h>

int main() 

{
    float salario, tempo, resultado;
    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    printf("Digite o seu tempo de trabalho em anos: ");
    scanf("%f", &tempo);
    if (tempo>=5)
    {
        resultado = salario*1.2;
        printf("Seu salario teve um aumento de 20 por cento sendo agora de %f", salario*1.2);
    }
    else
    {
        printf("parabens por fazer um bom trabalho");
    }
}
