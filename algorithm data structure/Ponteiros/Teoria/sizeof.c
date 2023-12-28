#include <stdio.h>
#include <stdlib.h>

int main(void){
    /* A função sizeof em C é usada para calcular o tamanho em bytes de um 
    tipo de dado ou de uma expressão. Pode ser aplicada a tipos de dados, variáveis, 
    arrays e ponteiros. É frequentemente usado em situações em que é necessário alocar 
    memória dinamicamente, garantindo que a quantidade correta de espaço seja reservada.*/
    // sizeof(expressao);
    // sizeof(tipo);

    int a;
    int *p;
    printf("sizeof(a) = %ld bytes\n", sizeof(a)); //retorna um  unsigned long ent usamos o '%ld'

    printf("sizeof(int) = %ld bytes\n", sizeof(int));
    printf("sizeof(short) = %ld bytes\n", sizeof(short));
    printf("sizeof(long) = %ld bytes\n", sizeof(long));
    printf("sizeof(unsigned long) = %ld bytes\n", sizeof(unsigned long));
    printf("sizeof(float) = %ld bytes\n", sizeof(float));
    printf("sizeof(double) = %ld bytes\n\n", sizeof(double));

    printf("sizeof(void *) = %ld bytes\n", sizeof(void *));
    printf("sizeof(int *) = %ld bytes\n", sizeof(int *));
    printf("sizeof(int **) = %ld bytes\n", sizeof(int **));
    printf("sizeof(int ***) = %ld bytes\n", sizeof(int ***));
    printf("sizeof(float *) = %ld bytes\n", sizeof(float *));
    printf("sizeof(ponteiro *) = %ld bytes\n", sizeof(p));


    return 0;
}