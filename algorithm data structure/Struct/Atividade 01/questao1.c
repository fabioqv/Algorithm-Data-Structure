/*
Crie um tipo estruturado para armazenar dados de um funcion´ario. Uma estrutura deste tipo possui
os seguintes campos: nome, sal´ario, identificador e cargo.
a) Escreva uma fun¸c˜ao que receba como parˆametro o endere¸co de uma estrutura do tipo Funcionario
e preencha seus campos com valores fornecidos pelo usu´ario via teclado.
b) Escreva uma fun¸c˜ao que receba como parˆametro o endere¸co de uma estrutura do tipo Funcionario
e imprima os valores dos seus campos.
c) Implemente uma fun¸c˜ao para realizar uma altera¸c˜ao no sal´ario de uma estrutura do tipo Funcionario.

d) Escreva uma fun¸c˜ao que receba como parˆametro um vetor de estruturas do tipo Funcionario e
imprima o cargo e sal´ario do Funcionario com maior sal´ario e o cargo e sal´ario do funcion´ario
com o menor sal´ario.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario {
    char nome[25];
    float salario;
    int identificador;
    char cargo[20];
} Funcionario;

void preencher(Funcionario *pessoa) {
    printf("Informe seu nome: \n");
    scanf(" %[^\n]", pessoa->nome);

    printf("Informe seu salário: \n");
    scanf("%f", &pessoa->salario);

    printf("Informe seu identificador: \n");
    scanf("%d", &pessoa->identificador);

    printf("Informe seu cargo: \n");
    scanf(" %[^\n]", pessoa->cargo);
}

void imprimir(Funcionario *pessoa) {
    printf("Nome: %s \n", pessoa->nome);
    printf("Salário: %.2f \n", pessoa->salario);
    printf("Identificador: %d \n", pessoa->identificador);
    printf("Cargo: %s \n", pessoa->cargo);
}

void mudar_salario(Funcionario *pessoa, int indice) {
    int opcao;
    printf("Deseja alterar o salário? \n 0- Não \n 1- Sim \n");
    scanf("%d", &opcao);

    if (opcao) {
        printf("Informe qual seu novo salário \n");
        scanf("%f", &pessoa[indice].salario);

        system("cls");
        imprimir(&pessoa[indice]);
    }
}

void maior_ou_menor(Funcionario *pessoa, int contador) {

    float salario_maior = pessoa[0].salario;
    float salario_menor = pessoa[0].salario;
    int maior = 0;
    int menor = 0;

    for (int i = 1; i < contador; i++) {
        if (salario_maior < pessoa[i].salario) {
            salario_maior = pessoa[i].salario;
            maior = i;
        }

        if (salario_menor > pessoa[i].salario) {
            salario_menor = pessoa[i].salario;
            menor = i;
        }
    }

    printf(" \t ---Funcionário com maior salário--- \t \n");
    printf("Nome : %s \n", pessoa[maior].nome);
    printf("Salário : %.2f \n", pessoa[maior].salario);
    printf("Identificador : %d \n", pessoa[maior].identificador);
    printf("Cargo: %s \n", pessoa[maior].cargo);

    printf(" \t ---Funcionário com menor salário--- \t \n");
    printf("Nome : %s \n", pessoa[menor].nome);
    printf("Salário : %.2f \n", pessoa[menor].salario);
    printf("Identificador : %d \n", pessoa[menor].identificador);
    printf("Cargo: %s \n", pessoa[menor].cargo);
}

int main() {
    int quantidade;
    printf("Informe quantos funcionários deseja inserir no sistema \n");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Nenhum funcionário inserido.\n");
        return 0;
    }

    Funcionario *pessoa = (Funcionario *)malloc(quantidade * sizeof(Funcionario));
    if (pessoa == NULL) {
        exit(1);
    }

    for (int i = 0; i < quantidade; i++) {
        printf("\tFuncionário %d \t \n", i + 1);
        preencher(&pessoa[i]);
        system("cls");
    }
    for (int i = 0; i < quantidade; i++){
      printf("\t Essas são suas informações concedidas \t \n");
      imprimir(&pessoa[i]);
    }
    for (int i = 0; i < quantidade; i++) {
        mudar_salario(pessoa, i);
    }

    if (quantidade > 1) {
        maior_ou_menor(pessoa, quantidade);
    }

    free(pessoa);
    return 0;
}