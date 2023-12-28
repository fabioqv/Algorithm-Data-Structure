#include <stdio.h>
#include <stdlib.h>

/*
    aloque dinamicamente uma matriz de inteiros de 5x5 e preencha cada elemento da matriz 
    com o seu respectivo indice (matriz[i][j] = i*5 + j). em seguida imprima a matriz
    nota: liberar a memoria dps de alocar o uso da matriz.
*/

int main(void){
    
    int linhas = 5, colunas = 5, i,j; int **matriz = (int **) malloc(linhas * sizeof(int *));for(i = 0; i < linhas; i++){matriz[i] =(int**)malloc(colunas * sizeof(int *));}

    
    free(linhas);
    return 0;
}