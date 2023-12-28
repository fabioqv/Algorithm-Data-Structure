//Escreva uma função que receba dois números positivos por parâmetro 
//e retorne a soma dos N números inteiros existentes entre eles.

#include <stdio.h>

    int soma ( int a, int b){
        int r = 0;

        if (a > b){
        b = b+1;

            while (a > b){
                    a = a-1;
                    r = r + a;
                }
        } else {
        a = a+1;

            while (a < b){
                b = b-1;
                r = r + b;
            }
        }
    return r;
    }

int main() {
    int x, y, total;

    printf("Informe dois valores \n");
        scanf("%d %d", &x, &y);
    
    total = soma(x,y);

    printf("%d \n",total);

}