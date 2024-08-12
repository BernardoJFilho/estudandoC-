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

int allCandidatos(Candidato candidatos[], int tamanho);
int resultado(Candidato candidatos[], int tamanho);
void cadastrarPessoa(Pessoa pessoas[], int param, Candidato candidatos[]);
void valores();

int main() {
    Pessoa pessoas[100];
    Candidato candidatos[] = {
        {"Alberto", 0},
        {"Gimaraes", 0},
        {"José", 0},
        {"Henrique", 0},
        {"Josildo", 0}
    };

    int numCandidatos = sizeof(candidatos) / sizeof(candidatos[0]);
    int value = 0, opcao;
    printf("-----Bem vindo a urna eletronica-----\n");
    valores();
    scanf("%d", &opcao);
    while (value<100)
    {
        switch (opcao)
        {
        case 0:
            valores();
            scanf("%d", &opcao);
            continue;
        case 1:
            allCandidatos(candidatos, numCandidatos);
            opcao = 0;
            continue;
        case 2:
            cadastrarPessoa(pessoas, value, candidatos);
            value += 1;
            opcao = 0;
            continue;
        case 3:
            resultado(candidatos, numCandidatos);
            break;
        }
    }
}

void valores(){
    printf("Oque voce quer fazer?\n");
    printf("Digite 1 para ver a tabela de candidatos\n");
    printf("Digite 2 para votar\n");
    printf("Digite 3 para mostrar o resultado da votacao e sair\n");
}

int resultado(Candidato candidatos[], int tamanho) {
    int number = 0;
    char name;
    for (int i = 0; i < tamanho; i++)
    {
        printf("Candidato: %s --- Votos: %d\n", candidatos[i].nome, candidatos[i].numero);
        if (number < candidatos[i].numero)
        {
            name = candidatos[i].nome;
            number = candidatos[i].numero;
        }
    }

    printf("O candidato ganhador e o %s com %d votos", name, number);
    
}

int allCandidatos(Candidato candidatos[], int tamanho) {
    printf("Tabela dos candidatos\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Candidato: %s --- Numero: %d\n", candidatos[i].nome, i+1);
    }
    return 0;
}

void cadastrarPessoa(Pessoa pessoas[], int param, Candidato candidatos[]) {
    printf("Digite o seu nome: ");
    scanf("%s", pessoas[param].nome);
    printf("Digite o seu CPF: ");
    scanf("%d", &pessoas[param].cpf);
    printf("Digite o seu voto: ");
    scanf("%d", &pessoas[param].voto);
    switch (pessoas[param].voto)
    {
    case 1:
        candidatos[0].numero += 1;
        break;
    case 2:
        candidatos[1].numero += 1;
        break;
    case 3:
        candidatos[2].numero += 1;
        break;
    case 4:
        candidatos[3].numero += 1;
        break;
    default:
        printf("Numero invalido");
        break;
    }
}
