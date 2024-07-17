#include <stdio.h>

int main() 

{
    char value;
    printf("Digite M ou F:");
    scanf("%s", &value);
    switch (value)
    {
    case 'F':
        printf("Voce é do sexo feminino");
        break;
    case 'M':
        printf("Voce é do sexo masculino");
        break;
    default:
        printf("sexo invalido");
    }
}
