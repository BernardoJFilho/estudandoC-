#include <stdio.h>

int main() 

{
    char value;
    printf("Digite uma letra:");
    scanf("%s", &value);
    switch (value)
    {
    case 'a':
        printf("é uma vogal");
        break;
    case 'e':
        printf("é uma vogal");
        break;
    case 'i':
        printf("é uma vogal");
        break;
    case 'o':
        printf("é uma vogal");
        break;
    case 'u':
        printf("é uma vogal");
        break;
    default:
        printf("é uma consoante");
    }
}
