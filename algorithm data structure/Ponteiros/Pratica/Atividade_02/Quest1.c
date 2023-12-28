#include <stdio.h>

int main(void) {

    int x, y, *p; //Declaração de três variáveis inteiras: x, y e um ponteiro int p.
    y = 0; //Atribuição de 0 à variável y.
    p = &y; //O ponteiro p recebe o endereço de y.
    x = *p; //x recebe o valor apontado por p, que é o valor de y (0).
    x = 4; //x é atribuído o valor 4.
    (*p)++; //Incrementa o valor apontado por p (que é o valor de y) em 1. Agora y é 1.
    --x; //Decrementa x em 1. Agora x é 3.
    (*p) += x; //Adiciona o valor de x ao valor apontado por p (que é o valor de y). Agora y é 4.
    printf("valor de x: %d.\t valor de y: %d.\t valor de p: %p",x,y,*p);
    
    return 0;   //Saída (valor de x: 3. valor de y: 4. valor de p: 4)
}