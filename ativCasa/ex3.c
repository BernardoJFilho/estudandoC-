#include <stdio.h>


int main(){
    float antigo, novo;
    printf("Digite o valor antigo do produto: ");
    scanf("%f", &antigo);
    if(antigo<=50){
        novo = antigo*1.05;
    }
    else if(antigo>=100){
        novo = antigo*1.15;
    }
    else {
        novo = antigo*1.1;
    }
    if (novo<=80){
        printf("barato -> %f", novo);
    }
    else if (novo>80 && novo<120){
        printf("normal -> %f", novo);
    }
    else if (novo>120 && novo<200) {
        printf("Caro -> %f", novo);
    }
    else {
        printf("Muito caro -> %f", novo);
    }
}