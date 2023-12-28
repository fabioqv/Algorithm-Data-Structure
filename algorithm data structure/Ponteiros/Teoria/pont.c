#include <stdio.h>
#include <stdlib.h> /* Essa biblioteca possui funções envolvendo alocação 
                    de memória, controle de processos, conversões e outras.*/
int main()
{

    /* DECLARAÇÃO DE UM PONTEIRO */
    // (tipo_da_variavel_que_sera_apontada) *(nome_da_variavel_ponteiro);
    // EXEMPLO: int *ponteiro;

    /* TIPOS DE PONTEIROS */
    // int *ponteiro_int; ponteiro de inteiro
    // float *ponteiro_float; ponteiro de real
    // char *ponteiro _chat; ponteiro de caractere
    // int **ponteiro_ponteiro_intero // ponteiro de ponteiro inteiro

    // printf("O ponteiro: %p \n", ponteiro);

    // Acesso ao endereço de uma variável
    int num = 2;
    int *ponteiro_de_num;

    ponteiro_de_num = &num; // "&" é usado para enviar um endereço.

    printf("O endereço: %p\n", ponteiro_de_num);

    // Indereção de ponteiros com *

    float var = 3.14;
    float *pont = &var;
    float pi = *pont; //Para mexer com os valores utiliza *pont.
                      //Para mexer apenas com o endereço utiliza pont.

    printf("o valor de pi: %f\n", pi);

    // ponteiro nulo NULL
    // um ponteiro nulo é um ponteiro que não aponta para nenhum objetivo.
    // é usado para indicar ausencia de um valor

    char *point;
    point = NULL;

    // Compatibilidade e conversões entre ponteiros
    /* a conversão entre diferentes tipos de ponteiros 
    pode ser usado para acessar a memoria e dados de forma segura.*/

    float number;
    int *pointer;
    pointer = &number;
    pointer = (int *)&number;


    int a = 10;
    int *p1 = NULL;
    int *p2;

    p1 = &a;
    p2 = p1; /*Nesta parte, o endereço armazenado em p1 esta sendo armazenado tambem
                em p2, ou seja, se o endereo de "a" for igual a 5aff então p1 vai ter
                armazenado nele o endereço 5aff e o p2 a mesma coisa. pois ele não pegou 
                o endereço de p1 e se o endereço que esta armazenado nele que é da variavel a*/ 

    *p2 = 4; /*Ja nesta parte, p2 altera o valor da variavel no qual ele aponta. como dito no exemplo
                anterior, o p2 aponta para o mesmo endereço que p1 aponta,ou seja, a variavel "a". Então
                resumindo p2 altera o valor do endereço 5aff que é a variavel a, se "a" é igual a 10 e p2 
                esta alterando o valor do endereço para 4, então "a" a partir da linha 63 tem o valor 4.*/

    return 0;
}