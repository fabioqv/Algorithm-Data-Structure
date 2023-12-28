#include <stdio.h>

/*
        Usando funçoes com ponteiros

        podemos passar ponteiros como argumentos para uma função. isso permite que a função 
        acesse e modifique o valor de uma variavel fora de sua proprio escopo.

        exemplo na linha 27;

        usando ponteiros como retorno de função. isso permite que uma função retorne um 
        endereço de memoria para uma variavel.

        exemplo na linha 36;

        Ponteiros de função:

        Para declarar um ponteiro de função, vc deve especificar o tipo de retorno da 
        função seguido do nome do ponteiro e o tipo de parametro entre parenteses.

        int (*ponteiroSoma)(int, int);

        são usados para apontar para uma função especifica, permitindo que a função possa
        ser chamada diretamente. tambem permitem que a função seja passada como parametro para outras funçoes.


*/

int inc(int *ponteiro)
{
    (*ponteiro)++; // acessa o conteudo(por conta do parenteses), dps incrementa
}

int *cria_variavel(){
    int variavel = 5; // criou uma variavel inteira 

    return &variavel; // retorna o endereço da variavel criada

}

int main()
{
    int variavel1;
    scanf("%d", &variavel1);
    inc(&variavel1);
    printf("valor da variavel: %d", variavel1);
    
    int *ponteiro = cria_variavel(); // o ponteiro recebe o endereço da variavel da função;
    printf("valor da variavel: %d ", *ponteiro);

    return 0;
}

//Exemplo de passagem por referencia:
//passa o ponteiro como parametro(no main enviamos o endereço da variavel como parametro(pedirNums(&a,&b);))
/*void pedirNums(int *a,int *b){
    int x, y;
    printf("função\nInforme o primeiro numero: \n");
    scanf("%d", &x);
    printf("Informe o segundo numero: \n");
    scanf("%d", &y);

    *a = x;
    *b = y;
}

função que retorna dois valores, por meio dos ponteiros
*/