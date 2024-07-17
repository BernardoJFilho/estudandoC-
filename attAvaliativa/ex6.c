#include <stdio.h>

int main(){
    int speed;
    printf("Qual a velocidade do carro? ");
    scanf("%d", &speed);
    if (speed > 80) {
        speed = speed-80;
        printf("O valor da multa é R$%d", speed*5);
    } else {
        printf("Não foi multado");
    }
}