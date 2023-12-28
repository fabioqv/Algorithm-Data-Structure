#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa
{
    char nome[30];
    int cpf;
    int idade;
} structPessoa;

void preenche(structPessoa *pessoa, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("---Informe os dados da %d° pessoa---\n", i + 1);
        printf("Digite o nome: ");
        scanf(" %[^\n]", pessoa[i].nome);
        printf("Digite o CPF: ");
        scanf("%d", &pessoa[i].cpf);
        printf("Digite a idade: ");
        scanf("%d", &pessoa[i].idade);
        system("cls"); // limpa tela
    }
}

void imprime(structPessoa *pessoa, int tamanho)
{
    system("cls");
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("\n--Dados do %d° funcionario--", i + 1);
        printf("\nNome: %s\nCPF: %d\nIdade: %d\n", pessoa[i].nome, pessoa[i].cpf, pessoa[i].idade);
    }
}

void altIdade(structPessoa *pessoa, int numAlterar)
{
    printf("Digite a nova idade: ");
    scanf("%d", &pessoa[numAlterar].idade);
}

void maxMinIdade(structPessoa *pessoa, int tamanho)
{

    int i, maxIdade=pessoa[0].idade, minIdade=pessoa[0].idade;
    for (i = 0; i < tamanho; i++)
    {
        if(pessoa[i].idade > maxIdade){
            maxIdade = 0;
            maxIdade = maxIdade + pessoa[i].idade;
        }else if(pessoa[i].idade < minIdade){
            minIdade = 0;
            minIdade = minIdade + pessoa[i].idade;
        }
    }

    printf("Maior idade: %d\nMenor idade: %d", maxIdade,minIdade);
}

int main(void)
{

    int numPessoas, escolha, alterarIdade;

    printf("Quantas pessoas deseja cadastrar?");
    scanf("%d", &numPessoas);

    struct pessoa *pessoa = (struct pessoa *)malloc(numPessoas * sizeof(structPessoa));
    if (pessoa == NULL)
    {
        exit(1);
    }

    preenche(pessoa, numPessoas);
    imprime(pessoa, numPessoas);

    printf("\nDeseja alterar alguma idade?\nSim-[1]\nNao-[2]\nDigite: ");
    scanf("%d", &escolha);
    if (escolha == 1)
    {
        printf("Digite o numero da pessoa que deseja alterar a idade:");
        scanf("%d", &alterarIdade);
        alterarIdade = alterarIdade - 1;
        altIdade(pessoa, alterarIdade);
        printf("A idade da %d° foi alterada: %d", alterarIdade + 1, pessoa->idade);
        imprime(pessoa, numPessoas);
    }

    maxMinIdade(pessoa,numPessoas);

    free(pessoa);

    return 0;
}