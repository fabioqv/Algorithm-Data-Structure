#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nlinhas = 2, ncolunas = 3, i,j, count = 0;
    //para declarar uma mtriz dinamicamente, precisamos declarar um ponteiro de ponteiro
    int **mat = NULL;
    /************  alocação dinamica de matrizes  ***********/
    mat = (int **) calloc(nlinhas, sizeof(int *));
    
    // para cada linha da matriz
    for (i = 0;i<nlinhas;i++){
        mat[i] = (int *) calloc(ncolunas, sizeof(int));
    }

    //podemos acessar normalmente o valor da matriz: m[i][j];

    printf("&mat = %p, mat = %p\n\n", &mat, mat);

    for(i = 0; i<nlinhas;i++){
        printf("&mat[%d] = %p, mat[%d] = %p\n", i,&mat[i],i,mat[i]);

        for(j = 0;j < ncolunas; j++){
            mat[i][j] = count++;

            printf("&mat[%d][%d] = %p, mat[%d][%d] = %d\n", i,j,&mat[i][j],i,j,mat[i][j]);
        }
        puts("");
    }

    //desalocando

    for(int i = 0; i < nlinhas; i++){
        free(mat[i]);
    }
    free(mat);

    mat = NULL; // boa pratica 
    
    return 0;
}