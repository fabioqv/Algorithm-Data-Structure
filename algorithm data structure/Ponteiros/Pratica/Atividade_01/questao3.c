#include <stdio.h>

int main ( ) {

    int N_ant , N_prox , N , N_atual
        N_ant = N_atual =1;

    for( i =1 ,i <= N , i ++) {
        N_prox = N_ant + N_atual ;
        N_ant = N_atual ;
        N_atual = N_prox ;

    printf ("Fim do laco !\n") ;

return
}

/* 
    1° erro, há uma quebra de linha na linha 5, e mesmo sendo proposital faltou iniciar outro
    int na linha 6 e faltou um ";" na linha 5.

    2° erro, não é possivel fazer duas váriaveis receber um mesmo valor de uma só vez, 
    exemplo: a = b = 1;,
    tal ação não é permitida e está na linha 6.

    3° erro, na linha 8 no laço for está sendo utilizado "," ao invés de ";" o que acaba 
    causando erro, especicamente nessa parte: ( i =1 ,i <= N , i ++). E o correto seria
    (i =1 ;i <= N ; i ++) levando em consideração as váriaveis estando elas todas corretas.

    4° erro,  na linha 8 ainda no laço for o N está sendo utilizado como limitador para o i,
    sendo que o N não tem nenhum valor atribuido causando um erro no laço.

    5° erro, todas as váriaveis sendo chamadas no laço for irão acabar causando erro, pois foram
    criadas e armazenadas valores nelas incorretamente;

    6° erro, por fim, faltou encerrar o laço for com "}" com a falta disso acabou colidindo com o 
    fechamento do corpo do código causando erro e problemas para a inicialização do programa.
*/