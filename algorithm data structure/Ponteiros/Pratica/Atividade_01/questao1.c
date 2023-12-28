/* 
Implemente uma função que receba como parâmetro um vetor de números inteiros (vet) de tamanho
n e inverta a ordem dos elementos armazenados nesse vetor.
*/

#include <stdio.h>

int inverter( int a){
    
    int n[a];
    int i;

    for (i = 0; i < a; i++){
            printf("Informe o %do valor \n", i+1);
                scanf("%d", &n[i]);
        }

        for (i = a; i > 0; i--){
            printf("%d \n", n[i-1]);
        }

}

int main() {
    int x;

    printf("Informe quantos valores pretende inserir \n");
        scanf("%d", &x);

inverter(x);
}