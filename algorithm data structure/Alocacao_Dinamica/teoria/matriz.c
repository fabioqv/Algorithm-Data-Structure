#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // matriz estatica
    // int matriz[2][2];
    // int m[2][2] = {{0}, {1}, {2}, {3}};
    //   *(*(matri+i )+j) mesma coisa^
    // os elementos da matriz são acessados com indexação dupla: mattriz[i][j]. 
    // O primeiro indice, i, acessa a linha, e o segundo, j, acessa a coluna.
    
    // ALOCANDO MATRIZES DINAMICAMENTE

    int linhas = 3, colunas = 3, i, j;

    // alocando vetor de ponteiros

    int **matriz = (int **)malloc(linhas * sizeof(int *));

    // alocando cada linha da matriz

    for (i = 0; i < linhas; i++)
    {
        matriz[i] = (int **)malloc(colunas * sizeof(int *));
    }
    
    //liberando memoria alocada

    for (i = 0; i < linhas;i++){
        free(matriz);
    }
    free(matriz);

        return 0;
}