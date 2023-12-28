#include <stdio.h>
#include <stdlib.h>

int main(void){

    /*A função realloc é usada para realocar um vetor. Alterar o tamanho de 
    um bloco de memória que foi previamente alocado dinamicamente, 
    pode ser usada para aumentar ou diminuir o tamanho do bloco de memória.*/

    int *x = malloc(1 * sizeof(int));

    x[0] = 1;

    x = realloc(x, 5 * sizeof(int)); // realoquei o espaço de memoria

    return 0;
}