#include <stdio.h>

int main() 

{
    char sexo;
    float altura, resultado;
    printf("Digite o seu sexo(H/M): ");
    scanf("%s", &sexo);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    if (sexo == 'H')
    {
        resultado = (72.7*altura)-58;
        printf("O seu peso ideal é %f", resultado);
    }
    else
    {
        resultado = (62.1*altura)-44.7;
        printf("O seu peso ideal é %f", resultado);
    }
}
