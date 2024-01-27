/*
Crie um tipo estruturado para armazenar dados de uma pessoa. Uma estrutura deste tipo possui os
seguintes campos: nome da pessoa, numero do documento e idade.
a) Escreva uma fun¸c˜ao que receba como parˆametro o endere¸co de uma estrutura do tipo Pessoa e
preencha seus campos com valores fornecidos pelo usu´ario via teclado.
b) Escreva uma fun¸c˜ao que receba como parˆametro o endere¸co de uma estrutura do tipo Pessoa e
imprima os valores dos seus campos.
c) Implemente uma fun¸c˜ao para realizar uma atualiza¸c˜ao da idade de uma estrutura do tipo Pessoa.
d) Escreva uma fun¸c˜ao que receba como parˆametro um vetor de estruturas do tipo Pessoa e imprima
o nome da Pessoa mais velha e mais nova
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa {
    char nome[25];
    int numero_documento;
    int idade;
} Pessoa;

void preencher(Pessoa *individuo) {
    printf("Informe o nome da pessoa: \n");
    scanf(" %[^\n]", individuo->nome);

    printf("Informe o número do documento: \n");
    scanf("%d", &individuo->numero_documento);

    printf("Informe a idade: \n");
    scanf("%d", &individuo->idade);
}

void imprimir(Pessoa *individuo) {
    printf("Nome: %s \n", individuo->nome);
    printf("Número do documento: %d \n", individuo->numero_documento);
    printf("Idade: %d \n", individuo->idade);
}

void atualizar_idade(Pessoa *individuo) {
    int opcao;
    printf("Deseja atualizar a idade?\n 0- Não \n 1- Sim\n");
      scanf(" %d", &opcao);
    
    if(opcao){
    
    
    printf("Informe a nova idade: \n");
    scanf("%d", &individuo->idade);
    system("cls");
    printf("\t Essas são as informações atualizadas \t \n");
    imprimir(individuo);
    }
}

void mais_velha_mais_nova(Pessoa *pessoas, int contador) {
    int indice_mais_velha = 0;
    int indice_mais_nova = 0;

    for (int i = 1; i < contador; i++) {
        if (pessoas[i].idade > pessoas[indice_mais_velha].idade) {
            indice_mais_velha = i;
        }

        if (pessoas[i].idade < pessoas[indice_mais_nova].idade) {
            indice_mais_nova = i;
        }
    }

    printf(" \t ---Pessoa mais velha--- \t \n");
    imprimir(&pessoas[indice_mais_velha]);

    printf(" \t ---Pessoa mais nova--- \t \n");
    imprimir(&pessoas[indice_mais_nova]);
}

int main() {
    int quantidade;
    printf("Informe quantas pessoas deseja inserir no sistema \n");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Nenhuma pessoa inserida.\n");
        return 0;
    }

    Pessoa *pessoas = (Pessoa *)malloc(quantidade * sizeof(Pessoa));
    if (pessoas == NULL) {
        exit(1);
    }

    for (int i = 0; i < quantidade; i++) {
        printf("\tPessoa %d \t \n", i + 1);
        preencher(&pessoas[i]);
        system("cls");
    }

    for (int i = 0; i < quantidade; i++) {
        printf("\t Essas são as informações concedidas \t \n");
        imprimir(&pessoas[i]);
    }

    for (int i = 0; i < quantidade; i++) {
        atualizar_idade(&pessoas[i]);
    }

    if (quantidade > 1) {
        mais_velha_mais_nova(pessoas, quantidade);
    }

    free(pessoas);
    return 0;
}