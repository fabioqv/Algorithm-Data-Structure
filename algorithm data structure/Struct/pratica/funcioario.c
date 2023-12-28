#include <stdio.h>
#include <stdlib.h>

// declarando a struct renomeando
typedef struct funcionario
{
    char nome[50];
    float salario;
    int identificador;
    char cargo[20];
} Funcionario;

// função para ler os dados do usuario
void preenche(Funcionario *fun, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("---Informe os dados do %d° funcionario---\n", i + 1);
        printf("Digite o nome do funcionario: ");
        scanf(" %[^\n]", fun[i].nome);
        printf("Informe o cargo: ");
        scanf(" %[^\n]", fun[i].cargo);
        printf("Informe o salario: ");
        scanf("%f", &fun[i].salario);
        printf("Digite o identificador: ");
        scanf("%d", &fun[i].identificador);
        system("cls"); // limpa tela
    }
}

// função para imprimir os dados
void imprime(Funcionario *fun, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("\n--Dados do %d° funcionario--", i + 1);
        printf("\nNome: %s\nCargo: %s\nSalario: %.2f\nIdenteificador: %d", fun[i].nome, fun[i].cargo, fun[i].salario, fun[i].identificador);
    }
}

// função para modficar o salario;
void alterarSalario(Funcionario *fun, int numAlterar)
{
    numAlterar = numAlterar - 1;
    printf("Informe o novo salario: ");
    scanf("%f", &fun[numAlterar].salario);
    printf("Novo salario do funcionario id:%d: %.2f", fun->identificador, fun->salario);
}

void maxMinSalario(Funcionario *fun, int tamanho)
{
    int i;
    float maxSalario = fun[0].salario, minSalario = fun[0].salario;

    for (i = 0; i < tamanho; i++)
    {
        if (fun[i].salario > maxSalario)
        {
            printf("enntrou na funçao");
            maxSalario = 0;
            maxSalario = maxSalario + fun[i].salario;
        }
        else if (fun[i].salario < minSalario)
        {
            minSalario = 0;
            minSalario = minSalario + fun[i].salario;
        }
    }

    printf("Maior salario: %.2f\nMenor Salario: %.2f", maxSalario, minSalario);
}

int main(void)
{

    int numFuncionarios, escolha, funALterar;

    printf("Quantos funcionarios deseja cadastrar?");
    scanf("%d", &numFuncionarios);

    // alocando dinamicamente a struct
    struct funcionario *fun = (struct funcionario *)malloc(numFuncionarios * sizeof(Funcionario));
    // verificação se o espaço foi alocado corretamente
    if (fun == NULL)
    {
        exit(1);
    }

    // chamada das funções
    preenche(fun, numFuncionarios);
    imprime(fun, numFuncionarios);

    printf("\nDeseja alterar o salario?\nSim-[1]\nNao-[2]\nDigite: ");
    scanf("%d", &escolha);
    if (escolha == 1)
    {
        printf("Qual funcionario deseja alterar o salario?");
        scanf("%d", &funALterar);

        alterarSalario(fun, funALterar);
        imprime(fun, numFuncionarios);
    }

    maxMinSalario(fun, numFuncionarios);

    // liberando memoria aloada;
    free(fun);

    return 0;
}