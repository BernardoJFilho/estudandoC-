#include <stdio.h>

int main() {
    int dias, horas, minutos, segundos = 0;
    printf("Se quiser deixar em branco so passe o 0");
    printf("Digite as dias: ");
    scanf("%d", &dias);
    printf("Digite as horas: ");
    scanf("%d", &horas);
    printf("Digite as minutos: ");
    scanf("%d", &minutos);
    printf("Digite as segundos: ");
    scanf("%d", &segundos);
    horas = (dias*24)+horas;
    minutos = (horas*60)+minutos;
    segundos = (minutos*60)+segundos;
    printf("A quantidade de segundos é %d", segundos);
}