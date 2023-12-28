#include <stdio.h>
#include <stdlib.h>

// renomear struct
//    typedef
/*                       renomei
    typedef struct aluno Aluno;
    onde tinha struct aluno, deve ser mudado para Aluno;
    ex:
        void imprime(Aluno *estudante);

    ou

    typedef struct aluno{
        char nome[20];
        int idade;
        int mat;
        int email[50];
    } Aluno;

    vantagem: Renomeando podemos usar apenas o nome do struct inves de : void preenche(struct aluno *estudante)
*/

//declaração
typedef struct professor
{
    char nome[20];
    int idade;
    int matricula;
    char email[50];
    char disciplina[20];
} Professor;
            //chamando de uma forma mais simples
void preenche(Professor *prof)
{
    printf("Digite o nome do professor: \n");
    scanf(" %[^\n]", prof->nome);
    printf("Digite a idde: \n");
    scanf("%d", &prof->idade);
    printf("Digite  matricula: \n");
    scanf("%d", &prof->matricula);
    printf("Digite  email: \n");
    scanf(" %[^\n]", prof->email);
}

void imprime(Professor *prof)
{
    printf("Nome: %s\nIdade: %d\nMatricula: %d\nEmail: %s", prof->nome, prof->idade, prof->matricula, prof->email);
}

int main(void)
{
    //podemos fazer assim pq renomeamos com o typedef
    Professor *prof = (Professor*)malloc(sizeof(Professor));
    if (prof == NULL)
    {
        exit(1);
    }

    preenche(prof);
    imprime(prof);

    return 0;
}