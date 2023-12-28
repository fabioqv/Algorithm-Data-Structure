#include <stdio.h>
#include <stdlib.h>

// 01. Escreva uma função que receba dois vetores como entrada e retorne 
//um novo vetor que contenha a soma dos elementos correspondentes dos vetores de entrada.

void somaVetores(int *v1, int *v2, int tam)
{

    int *vsoma = (int *)malloc(tam * sizeof(int));
    int i;

    for (i = 0; i < tam; i++)
    {
        vsoma[i] = v1[i] + v2[i];
    }

    for (i = 0; i < tam; i++)
    {
        printf("v[%d] + v2[%d] = %d\n", i, i, vsoma[i]);
    }
    free(vsoma);
}

int main(void)
{
    int i;
    int *v = (int *)malloc(5 * sizeof(int));
    int *v2 = (int *)malloc(5 * sizeof(int));
    if (v == NULL || v2 == NULL)
    {
        printf("Memória insuficiente!\n");
        exit(1);
    }

    printf("Digite os valores do primeiro vetor: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &v[i]);
    }

    printf("Digite os valores do segundo vetor: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &v2[i]);
    }

    somaVetores(v, v2, 5);

    free(v);
    free(v2);

    return 0;
}