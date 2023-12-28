#include <stdio.h>
#include <stdlib.h>

// forma tradicional int vetor[]
float media(int tamanho, int *vetor) // passando vetor como parametro para a função
{
    int soma = 0;
    int i;
    for (i = 0; i < tamanho; i++)
    {
        soma = vetor[i] + soma;
        //*(vetor + i);
    }
    return soma / tamanho;
}

int main(void)
{

    return 0;
}