#include <stdio.h>

/*
A aritmética de ponteiros é um recurso da linguagem C que permite manipular endereços de memória 
usando operações aritméticas.Isso é útil para trabalhar com arrays e estruturas de dados, entre outras coisas.

Existem quatro operações aritméticas que você pode realizar em ponteiros:

Incremento (++): Aumenta o valor do ponteiro em uma unidade do tipo de dados para o qual ele aponta.
Decremento (--): Diminui o valor do ponteiro em uma unidade do tipo de dados para o qual ele aponta.
Adição (+): Adiciona um valor inteiro ao ponteiro, movendo-o para frente na memória.
Subtração (-): Subtrai um valor inteiro do ponteiro, movendo-o para trás na memória.
Aqui está um exemplo simples de como a aritmética de ponteiros pode ser usada:
*/

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr; // p aponta para o primeiro elemento do array

    printf("%d\n", *p); // imprime 1

    p++;                // incrementa o ponteiro
    printf("%d\n", *p); // imprime 2

    p += 2;             // adiciona 2 ao ponteiro
    printf("%d\n", *p); // imprime 4

    p--;                // decrementa o ponteiro
    printf("%d\n", *p); // imprime 3

    printf("usando aritmetica de ponteiro(mostra o terceiro elemento): %d\n\n", *(arr + 2));

    int v[5] = {44, 55, 32, 33, 44};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
        printf("(v + %d) = %p, *(v + %d) = %d\n\n", i, (v + i), i, *(v + i));
    }

    return 0;
}

/*
Neste exemplo, um ponteiro p é inicializado para apontar para o primeiro elemento de um array. 
Em seguida, o ponteiro é incrementado e decrementado, e um valor é adicionado a ele, para 
acessar diferentes elementos do array.

    ##Quest 01##
Suponha que v é um vetor. Descreva a diferença conceitual entre as expressões v[2] e v+2.

Em C, v[2] e v+2 são conceitualmente diferentes.

v[2] é uma expressão que acessa o terceiro elemento do vetor v.
A indexação em C começa em 0, então v[0] é o primeiro elemento, v[1] é o segundo, e v[2] é o terceiro.

Por outro lado, v+2 é uma operação de aritmética de ponteiros.
Se v é um ponteiro para o primeiro elemento de um vetor (como é comum em C), v+2 é um ponteiro para
o terceiro elemento do vetor.
Note que v+2 não é o valor do terceiro elemento, mas um ponteiro para ele.
Para obter o valor, você precisaria desreferenciar o ponteiro, como em *(v+2), que é equivalente a v[2].

## IMPRIMIR USANDO ARITMÉTICA DE PONTEIROS ##

Para imprimir o valor do terceiro elemento do vetor usando v+2, você precisaria desreferenciar o ponteiro.
Aqui está como você faria isso:

printf("%d\n", *(v+2));

Neste exemplo, v+2 é um ponteiro para o terceiro elemento do vetor, e o operador * é usado para desreferenciar 
o ponteiro, ou seja, obter o valor para o qual o ponteiro está apontando.
Portanto, *(v+2) obtém o valor do terceiro elemento do vetor, que é então impresso com printf.

Se você fizer:

printf("%d\n", v+2);

o que será impresso não será o valor do terceiro elemento do vetor, mas sim o endereço de memória do terceiro 
elemento do vetor.
Isso ocorre porque v+2 é um ponteiro para o terceiro elemento do vetor, não o valor do terceiro elemento.
Se você quiser imprimir o endereço de memória, você deve usar o especificador de formato %p 
e fazer um cast para void*, assim:

printf("%p\n", (void*)(v+2));

Isso imprimirá o endereço de memória do terceiro elemento do vetor.

##Quest 02##

Suponha que os elementos do vetor v são do tipo int e cada int ocupa 4 bytes no seu computador. 
Se o endereço de v[0] é 55000, qual o valor da expressão v+3. 

v+1 = 55000 + 4 = 55004;
v+2 = 55004 + 4 = 55008;
v+3 = 55008 + 4 = 55012;

*/