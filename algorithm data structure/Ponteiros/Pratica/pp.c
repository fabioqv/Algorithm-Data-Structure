#include <stdio.h>

int main(void){

    int a,b,c,d; //declaração das variaveis;
    int *p1; //declaração de um ponteiro para inteiros;
    int *p2 = &a; // declara outro ponteiro de inteiro e atribui o endereço de a;
    int *p3 = &c; // declara outro ponteiro de inteiro e atribui o endereço de c;
    p1 = p2; // p1 vai receber o valor que p2 armazena, que é o endereço de a, ent podemos modificar a apatir de p1; 
    *p2 = 10; // vai ser atribuido ao conteudo de p2 o valor 10;
    b = 20; // é atribuido o valor 20 a b;
    int **pp;// é declarado um ponteiro para um ponteiro de inteiro;
    pp = &p1; // pp vai receber o endereço de p1;
    *p3 = **pp;// o conteudo de p3(valor armazenado em c), vai receber o conteudo armazenado no conteudo do conteudo de p1(valor de a, a agora recebe o valor de c)
    int *p4 = &d; //é declarado p4 e atribuido o endereço de d

    return 0;
}