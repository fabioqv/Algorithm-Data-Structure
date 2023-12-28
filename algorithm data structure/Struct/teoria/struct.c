#include <stdio.h>
#include <stdlib.h>
//anotações da aula dia 11/12/2023

/*
    struct é um recurso em linguagens de programação, como C, que permite agrupar diferentes tipos de dados sob um único nome. Essa estrutura de dados personalizada permite que você armazene diferentes tipos de dados sob um mesmo "guarda-chuva", proporcionando organização e facilitando o acesso a esses dados.
*/

//  declaracao;
struct aluno
{
    char nome[20];  // 20 bytes
    int idade;      // 4 bytes
    int matricula;  // 4 bytes
    char email[50]; // 50 bytes
};

// usamos uma função para deixar o codigo mais limpo
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

void imprime(struct aluno *estudante)
{
    printf("Nome: %s\nIdade: %d\nMatricula: %d\nEmail: %s", estudante->nome, estudante->idade, estudante->matricula, estudante->email);
}

int main(void)
{

    /* declaração de variavel tipo estrutura
    // tipo   struc  nome da variavel
    // struct aluno estudante;
    // ou,
        struct Aluno{
            char nome[100];
            int idade;
        } barney, ted;   //ja declara 
    // para acessar um parametro
    // usamos o operador de acesso '.'
    /* printf("Digite o nome do aluno: \n");
     scanf(" %[^\n]", estudante.nome);
     printf("Digite a idade: \n");
     scanf("%d", &estudante.idade);
     printf("Digite a matricula: \n");
     scanf("%d", &estudante.matricula);
     printf("Digite o email: \n");
     scanf(" %[^\n]", estudante.email);


     //mostrando na tela

     printf("nome: %s", estudante.nome);
     printf("idade: %d", estudante.idade);
     printf("matricula: %d", estudante.matricula);
     printf("email: %s", estudante.email);
     */



    //##ALOCAÇÃO DINAMICA DE STRUCT POIS A VARIAVEL AGORA É UM PONTEIRO
    
    
    struct aluno *estudante = (struct aluno *)malloc(sizeof(struct aluno));
    if (estudante == NULL)
    {
        exit(1);
    }
    /*
        printf("Digite o nome do aluno: \n");
            //com alocaçao dinamica usamos o '->' para acessar as variaveis
        scanf(" %[^\n]", estudante->nome);
        printf("Digite a idade: \n");
        scanf("%d", &estudante->idade);
        printf("Digite a matricula: \n");
        scanf("%d", &estudante->matricula);
        printf("Digite o email: \n");
        scanf(" %[^\n]", estudante->email);
        free(estudante);
    */

    preenche(estudante);
    imprime(estudante);

    //renomear struct
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
    return 0;
}