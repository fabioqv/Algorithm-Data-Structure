// função para mostrar as variaveis do struct na tela

#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    char nome[20]; 
    int idade;      
    int matricula;  
    char email[50];
};

// funçao que imprime na tela
void imprime(struct aluno *estudante)
{
    printf("\nNome: %s\nIdade: %d\nMatricula: %d\nEmail: %s", estudante->nome, estudante->idade, estudante->matricula, estudante->email);
}

int main(void)
{

    struct aluno *estudante = (struct aluno *)malloc(sizeof(struct aluno));
    if (estudante == NULL)
    {
        exit(1);
    }

    printf("Digite o nome do aluno: \n");
    scanf(" %[^\n]", estudante->nome);
    printf("Digite a idade: \n");
    scanf("%d", &estudante->idade);
    printf("Digite a matricula: \n");
    scanf("%d", &estudante->matricula);
    printf("Digite o email: \n");
    scanf(" %[^\n]", estudante->email);

    //chamando a função imprime()
    imprime(estudante);

    free(estudante);

    return 0;
}