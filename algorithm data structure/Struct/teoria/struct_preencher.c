// Exemplo de função para preencher(ler os dados do usuario)

#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    char nome[20];
    int idade;
    int matricula;
    char email[50];
};

// declaração da função
void preenche(struct aluno *estudante)
{
    printf("Digite o nome do aluno: \n");
    scanf(" %[^\n]", estudante->nome);
    printf("Digite a idade: \n");
    scanf("%d", &estudante->idade);
    printf("Digite a matricula: \n");
    scanf("%d", &estudante->matricula);
    printf("Digite o email: \n");
    scanf(" %[^\n]", estudante->email);
}

// função que imprime
void imprime(struct aluno *estudante)
{
    printf("Nome: %s\nIdade: %d\nMatricula: %d\nEmail: %s", estudante->nome, estudante->idade, estudante->matricula, estudante->email);
}

int main(void)
{
    struct aluno *estudante = (struct aluno *)malloc(sizeof(struct aluno));
    if (estudante == NULL)
    {
        exit(1);
    }

    // chamando a função
    preenche(estudante);

    imprime(estudante);

    free(estudante);
    
    return 0;
}