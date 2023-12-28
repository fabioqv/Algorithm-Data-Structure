#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct frutas
{

    char nome[20];
    char cor[20];
    char sabor[200];
    int quantidade;

} Frutas;

int qtdFrutasCad(int quantidade)
{
    printf("informe a quantidade de frutas que deseja cadastrar: ");
    scanf("%d", &quantidade);

    system("cls");

    return quantidade;
}

void cadastroFrutas(Frutas *frutas, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("Informe o nome da fruta: ");
        scanf(" %[^\n]", frutas[i].nome);
        printf("Informe a cor da fruta: ");
        scanf(" %[^\n]", frutas[i].cor);
        printf("Informe o sabor da fruta: ");
        scanf(" %[^\n]", frutas[i].sabor);
        printf("Informe a quantidade da fruta: ");
        scanf("%d", &frutas[i].quantidade);
        system("cls");
    }
}

void imprimir(Frutas *frutas, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("\nNome: %s\nCor: %s\nSabor: %s\nQuantidade: %d", frutas[i].nome, frutas[i].cor, frutas[i].sabor, frutas[i].quantidade);
    }
}

void mostrasFrutasCad(Frutas *frutas, int tamanho)
{   
    int i;
    printf("Frutas cadastradas: \n");
    for (i = 0; i < tamanho; i++)
    {
        printf("Nome: %s\n", frutas[i].nome);
    }
}

void buscaFruta(Frutas *frutas, int tamanho, char nome[])
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        if (strcmp(frutas[i].nome, nome) == 0)
        {
            printf("Nome: %s\nCor: %s\nSabor: %s\nQuantidade: %d", frutas[i].nome, frutas[i].cor, frutas[i].sabor, frutas[i].quantidade);
        }
    }
}

int main(void)
{

    int qtdFrutas, busca;
    char nome[20];

    qtdFrutas = qtdFrutasCad(qtdFrutas);

    setlocale(LC_ALL, "Portuguese");


    // alocando memoria para o vetor de struct
    Frutas *frutas = (Frutas *)malloc(qtdFrutas * sizeof(Frutas));
    if (frutas == NULL)
    {
        printf("Memoria insuficiente");
        exit(1);
    }

    cadastroFrutas(frutas, qtdFrutas);
    imprimir(frutas, qtdFrutas);

    printf("\nDeseja buscar uma fruta?\n[1]-Sim\n[2]-Não");
    scanf("%d", &busca);
    system("cls");

    if (busca == 1)
    {
        mostrasFrutasCad(frutas, qtdFrutas);
        printf("Informe o nome da fruta: ");
        scanf(" %[^\n]", nome);
        system("cls");
        buscaFruta(frutas, qtdFrutas, nome);
    }

    return 0;
}