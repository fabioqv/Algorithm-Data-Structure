#include <stdio.h>

int main(void)
{

    int x, y;
    y = 2;
    int *p1, *p2;
    p1 = &y;
    x = 1;
    p2 = p1; // p2 vai guardar o msm endereço de p1(y), podemos alterar y pelo p1 ou p2;
    (*p1)++; // coloca o parenteses para acessar o conteudo primeiro e dps incrementar;
    printf("%d, %d", x, y);
                    //Saída (1, 3)
    return 0;
}

//É importante desenhar a memoria e imaginar como o programa ira executar passo a passo para não se perder.