#include <stdio.h>
#include <stdlib.h>

int main(void){

    char *nome = (char*) malloc(50*sizeof(char)); //aloquei memoria para a string
    //verificar se o espaço foi alocado 
    if(nome ==NULL){
        exit(1);
    }

    printf("Digite seu nome");
    scanf("%[^\n]", nome); // vai ler ate encontrar o \n(enter)
    printf("%s", nome);
    free(nome);
    
    return 0;
}