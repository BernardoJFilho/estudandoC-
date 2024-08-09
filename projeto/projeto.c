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
    Pessoa pessoas[20];

    for (int i = 0; i < 2; i++)
    {
        printf("Digite o seu nome: ");
        scanf("%s", &pessoas[i].nome);
        printf("Digite o seu CPF: ");
        scanf("%d", &pessoas[i].cpf);
        printf("Digite o seu voto: ");
        scanf("%d", &pessoas[i].voto);
    }

}