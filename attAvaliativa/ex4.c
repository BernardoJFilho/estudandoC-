#include <stdio.h>
#include <string.h>

int main() {
    char primeira[50], segunda[50];
    printf("Digite a primeira palavra: ");
    scanf("%s", primeira);
    printf("Digite a segunda palavra: ");
    scanf("%s", segunda);
    if (strlen(primeira) > strlen(segunda)) {
        printf("a palavra %s é maior", primeira);
    } else {
        printf("A palavra %s é maior", segunda);
    }
}