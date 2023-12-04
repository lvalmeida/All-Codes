#include <stdio.h>
#include <stdlib.h>

struct pessoa {
    char nome[50];
    char snome[50];
    int idade;
};

void cadastrarPessoa(struct pessoa *p) {
    printf("\n\n----------- Cadastro ----------\n\n");

    printf("Nome: ");
    fflush(stdin);
    fgets(p->nome, 50, stdin);
    p->nome[strcspn(p->nome, "\n")] = '\0';

    printf("Sobrenome: ");
    fflush(stdin);
    fgets(p->snome, 50, stdin);
    p->snome[strcspn(p->snome, "\n")] = '\0';

    printf("Idade: ");
    fflush(stdin);
    scanf("%i", &p->idade);
}

void mostrarCadastro(const struct pessoa *p) {
    printf("\n\n--------- Show Cadastro ----------\n\n");
    printf("Nome: %s %s\n", p->nome, p->snome);
    printf("Idade: %i\n", p->idade);
}

int main(int argc, char *argv[]) {
    struct pessoa myPessoa;

    cadastrarPessoa(&myPessoa);
    mostrarCadastro(&myPessoa);

    return 0;
}
