#include <stdio.h>
#include <stdlib.h>
// aula 05/12/2023
int main(void)
{
    // alocação dinamica
    /* malloc é usado para reservar espaço na memoria; coloca o tamanho 
    do vetor(3) *(vezes) quantidade de bytes necessarios na memoria
    (ultilizamos sizeof(tipo) para n precisar ficar contando os bytes); */
    // cast      (tipo *) podemos usar para o malloc retornar o endereço do tipo informado
    int *vetor = malloc(3 * sizeof(int)); // declarei o vetor de tamamnho 3
    //    int *vetor = (int *) malloc(3 * sizeof(int));
    // verificar se o espaço foi armazenado
    if (vetor == NULL)
    {
        printf("ERRO!!! Memoria insuficiente");
        exit(1); // função para abortar a execução
    }
    free(vetor); // função para liberar o espaço, quando n ultilizado

    //OUTRO EXEMPLO

    int tamanho = 5;
    int contador;
    int *vetor2 = (int *)malloc(tamanho * sizeof(int));
    if (vetor2 == NULL)
    {
        exit(1); // abortar o programa
    }
    else
    {
        printf("alocacao realizada com sucesso\n");
    }
    // ler os dados do vetor
    printf("digite os valores do vetor\n");
    for (contador = 0; contador < tamanho; contador++)
    {
        scanf("%d", &vetor[contador]);
        // outra forma   //vetor+contador
    }
    for (contador = 0; contador < tamanho; contador++)
    {
        printf("vetor posisao[%d]: %d\n", contador + 1, vetor2[contador]);
    }
    free(vetor2);

    return 0;
}