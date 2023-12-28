#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // A função calloc é usada para alocar um vetor e inicializar todos os valores com 0.
    
    int *x = calloc(5, sizeof(int));

    printf("%d", x[0]);
    return 0;
}