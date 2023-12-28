#include <stdio.h>

    int f (int mat [3][3]) {

    return (mat [0][0]* mat [1][1]* mat [2][2]) + 
           (mat [0][1]* mat [1][2]* mat [2][0]) + 
           (mat [0][2]* mat [1][0]* mat [2][1]) - 
           (mat [0][1]* mat [0][1]* mat [2][2]) - 
           (mat [0][0]* mat [1][2]* mat [2][1]) - 
           (mat [0][2]* mat [1][1]* mat [2][0]);  
}
    
    int main ( void ) {
    
        int m [3][3] = {
            {0, 1, 0}, {3, 1, -1}, {4, 0, 1}
        };

        int de = f ( m ) ;

        printf (" Resultado = \t %d", de ) ;


    return 0;
}
/*
    O seguinte programa cria uma variável onde armazena uma matriz de 3 por 3 (3 linhas e 3 colunas),
após isso é dado os valores que permanecerão armazenados dentro da matriz, e então cria uma função 
onde realiza cálculos como multiplicação, soma e divisão entre os números da matriz. especificamente
na função é dado a localização dos valores para a realização de cada cálculo, um exemplo de indice dado 
é mat [0][0] sendo "mat" o nome da váriavel na função e [0][0] a localização do valor que seria = 0, 
os indices [0][0] é o mesmo que 1ª coluna e 1ª linha ou seja a ordem de contagem no programa é a partir
do 0. Exemplo: 0, 1, 2, 3, 4... No cálculo é usado o parentes para priorizar as multiplicações de cada 
número dentro do parentes e logo depois, realiza a soma e subtração no fim dando o resultado final = -5. 

saída = -5.

*/