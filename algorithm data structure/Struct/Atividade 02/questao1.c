/*
Crie um tipo estruturado para armazenar dados de um ingresso. Uma estrutura deste tipo possui os
seguintes campos: preço, local e atração.
a) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Ingresso e
preencha seus campos com valores fornecidos pelo usuário via teclado. Protótipo: void
preenche(Ingresso* i);
b) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Ingresso e imprima
os valores dos seus campos. Protótipo: void imprime(Ingresso* i);
c) Escreva uma função que receba, como parâmetros, o endereço de uma estrutura do tipo Ingresso e um
novo valor de preço e atualize o preço do ingresso para o novo valor. Protótipo: void
altera_preco(Ingresso* i, float valor);
d) Escreva uma função que receba, como parâmetros, um vetor de ingressos e o tamanho do vetor e
imprima os eventos de ingresso mais barato e mais caro. Protótipo: void imprime_menor_maior_preco(int
n, Ingresso* vet);
e) Escreva uma função main para testar as funções anteriores.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct ingresso{
    float preco;
    char local[50];
    char atracao[50];
} Ingresso;

void preenche(Ingresso *i) {
    printf("Informe o preço do ingresso: \n");
    scanf("%f", &i->preco);

    printf("Informe o local do evento: \n");
    scanf(" %[^\n]", i->local);

    printf("Informe a atração do evento: \n");
    scanf(" %[^\n]", i->atracao);
}

void imprime(Ingresso *i) {
    printf("Preço: R$%.2f\n", i->preco);
    printf("Local: %s\n", i->local);
    printf("Atração: %s\n", i->atracao);
}

void altera_preco(Ingresso *i) {
    int opcao;
    printf("O preço atual do ingresso é R$%.2f\n", i->preco);
    printf("\n");
    printf("Deseja alterar o preço?\n (1-Sim / 0-Não): \n");
    scanf("%d", &opcao);

    if (opcao) {
        printf("Informe o novo preço do ingresso: \n");
        scanf("%f", &i->preco);
        printf("Preço alterado com sucesso.\n");
    }
}

void imprime_menor_maior_preco(int n, Ingresso *vet) {
    float menor = vet[0].preco;
    float maior = vet[0].preco;
    int indice_menor = 0;
    int indice_maior = 0;

    for (int i = 1; i < n; i++) {
        if (vet[i].preco < menor) {
            menor = vet[i].preco;
            indice_menor = i;
        }

        if (vet[i].preco > maior) {
            maior = vet[i].preco;
            indice_maior = i;
        }
    }
    system("cls");
    printf("\tEvento de ingresso mais barato:\t\n");
    imprime(&vet[indice_menor]);

    printf("==============================================================\n");
    printf("\tEvento de ingresso mais caro:\t\n");
    imprime(&vet[indice_maior]);
}

int main() {
    int n;
    printf("\tInforme a quantidade de eventos de ingresso:\t ");
    scanf("%d", &n);
    printf("\n");

    Ingresso *eventos = (Ingresso *)malloc(n * sizeof(Ingresso));
    if (eventos == NULL) {
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        printf(" \t Informe os detalhes do evento %d: \t \n", i + 1);
        preenche(&eventos[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("\t Detalhes do evento %d:\t \n", i + 1);
        imprime(&eventos[i]);
        altera_preco(&eventos[i]);
    }
  
    for (int i = 0; i < n; i++) {
        printf("\t Ingresso %d:\t \n", i + 1);
        imprime(&eventos[i]);
    }
    imprime_menor_maior_preco(n, eventos);

    free(eventos);

    return 0;
}