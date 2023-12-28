#include <stdio.h>

int main ( ) {
    int i ;

    for ( i =1 ; i <= 100 ; i *=100) {
        if ( i ==30 ) {
    break ;
        } else {
        printf ("%2d\n" ,2* i ) ;
        }
    }

    printf ("Fim do laco !\n") ;
    return 0;
}

/*

    Saída = 200.

    no codigo o laço for é feito da seguinte forma :
    i recebe 1 e enquanto i for menor ou igual a 100, o i é multiplicado por 100
    como i é menor que 100 vai entrar no laço e terá o valor igual a 100. Dentro
    do laço tem um caso se que diz o seguinte, se i for igual a 30 o porgrama encerra,
    mas como i é igual a 100 vai para o else que é o senão onde o valor de i será multiplicado
    por 2 resultando na saída 200.
    
*/