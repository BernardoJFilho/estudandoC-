#include <stdio.h>

typedef struct {
    char nome[20];
    int cpf;
    int voto;
} Pessoa;

typedef struct {
    char nome[20];
    int numero;
} Candidato;

int main() {
    Candidato candidatos[5] = {
        {"Alberto", 1},
        {"Gimaraes", 2},
        {"José", 3},
        {"Henrique", 4},
        {"Josildo", 5}
    };

    printf("Digite o seu nome: ");
    printf("Digite o seu CPF: ");
    printf("Digite o seu voto: ");

    Pessoa pessoas = {

    };
    
}