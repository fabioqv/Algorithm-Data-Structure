#include <stdio.h>
#include <stdlib.h>

struct professor
{
    char nome[20];
    int idade;
    int id;
    char email[50];
    char disciplina[20];
};

void preenche(struct professor *prof)
{
    printf("Digite o nome do professor: ");
    scanf(" %[^\n]", prof->nome);
    printf("Digite a idade: ");
    scanf("%d", &prof->idade);
    printf("Disciplina: ");
    scanf(" %[^\n]", prof->disciplina);
    printf("Digite  email: ");
    scanf(" %[^\n]", prof->email);
    printf("Digite o ID:");
    scanf("%d", &prof->id);
}

void imprime(struct professor *prof)
{
    printf("\nNome: %s\nIdade: %d\nDisciplina: %s\nEmail: %s\nID: %d\n", prof->nome, prof->idade,prof->disciplina, prof->email, prof->id);
}

int main(void)
{

    struct professor *prof = (struct professor *)malloc(sizeof(struct professor));
    if (prof == NULL)
    {
        exit(1);
    }

    preenche(prof);
    imprime(prof);

    return 0;
}