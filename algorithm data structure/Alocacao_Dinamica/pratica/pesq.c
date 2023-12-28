#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // declarando variaveis e a variavel 'n' que ira armazenar o numero de 
    //entrevistados e em seguida pedindo o valor;
    
    int n, i;
    float qtdHomens = 0.0, qtdMulheres = 0.0, porcentagemHomens = 0.0, porcentagemMulheres = 0.0;
    printf("Informe o numero de entrevistados: ");
    scanf("%d", &n);

    // declarando os arrys para armazenar as respostas;
    char *sexo = (char *)malloc(n * sizeof(char));
    char *pesquisa = (char *)malloc(n * sizeof(char));

    if (sexo == NULL || pesquisa == NULL)
    {
        printf("Erro na alocação de memoria");
        exit(1);
    }
    // leitura das respostas;
    for (i = 0; i < n; i++)
    {
        printf("%d° entrevistado:\n", i + 1);
        printf("informe o seu sexo (M/F): ");
        scanf(" %c", &sexo[i]);
        printf("Gostou do produto? (S/N): ");
        scanf(" %c", &pesquisa[i]);
    }

    for (i = 0; i < n; i++)
        if (sexo[i] == 'M')
        {
            if (pesquisa[i] == 'N')
            {

                qtdHomens++;
            }
        }
        else
        {
            if (pesquisa[i] == 'S')
            {
                qtdMulheres++;
            }
        }

    porcentagemMulheres = qtdMulheres / 100 * n;
    porcentagemHomens = qtdHomens / 100 * n;

    printf("cerca de %.2f%% das mulheres gostaram do produto\n", porcentagemMulheres);
    printf("cerca de %.2f%% dos homens nao gostaram do produto\n", porcentagemHomens);

    return 0;
}