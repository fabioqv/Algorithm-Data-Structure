#include <stdio.h>
#include <stdlib.h>
/* Exemplo de ANINHAMENTO DE ESTRUTURA */

typedef struct disciplina
{
    char nome[30];
    float nota;
    int codigo;
} Disciplina;

typedef struct aluno
{
    char nome[30];
    int idade;
    int matricula;
    // vetor de disciplinas;
    Disciplina *materias;
} Aluno;

int main(void)
{

    /*Exemplo 1:
        Aluno aluno; //Declaração de uma variável do tipo aluno;
        aluno.idade = 19; // acessando o campo idade da estrutura aluno;
        aluno.matricula = 202301120;
        aluno.materias[0].codigo = 98078;
        //imprimindo os valores das variáveis da estrutura aluno;
        printf(" %d, %d, %d \n", aluno.idade, aluno.matricula, aluno.materias.codigo);
      */

    /*Exemplo 2:*/

    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    if (aluno == NULL)
    {
        printf("Memória insuficiente!\n");
        exit(1);
    }
    // alocado memoria para o vetor de disciplinas
    aluno->materias = (Disciplina *)malloc(7 * sizeof(Disciplina));
    if (aluno->materias == NULL)
    {
        printf("Memória insuficiente!\n");
        exit(1);
    }
    printf("informe os dados do aluno: nome, idade e matricula\n");
    scanf(" %[^\n]", aluno->nome);
    scanf("%d %d", &aluno->idade, &aluno->matricula);
    // cadastro das disciplinas
    int index;
    for (index = 0; index < 2; index++)
    {
        printf("cadastro da disciplina %d", index + 1);
        //lendo o nome da disciplina do index do vetor
        scanf(" %[^\n]", aluno->materias[index].nome);
        scanf(" %d", &aluno->materias[index].codigo);
        scanf("%f", &aluno->materias[index].nota);
    }
    return 0;
}