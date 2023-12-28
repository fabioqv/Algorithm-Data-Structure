#include <stdio.h>// adicionei a biblioteca padrão

int main(void)
{
    int x, *p;
    x = 100;
    p = &x; // Correção: atribuir o endereço de x a p
    printf("Valor de p = %p\tValor de *p = %d",p, *p);

    return 0;//adicionei o return 0
}

/*
a) Esta mensagem é de erro ou advertência? advertência

b) Por que o compilador emite tal mensagem?  porque o tipo de dado atribuído a p é incompatível 
com o tipo de p. Na atribuição de x a p, devemos atribuir o endereço(usando o '&') não o valor de x.

c) Compile e execute o programa. A execução foi bem sucedida? não

d) Modifique o trecho de código acima, de modo que nenhuma mensagem seja emitida
pelo compilador.

e) Compile e execute novamente o programa. A execução foi bem sucedida?
*/