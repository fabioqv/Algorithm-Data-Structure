#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numQuest, i, j, aprovados = 0;
    float notas = 0.0, qtdAprovados;

    // Leitura da quantidade de questões
    printf("Informe a quantidade de questões:");
    scanf("%d", &numQuest);

    // Declarando vetor de caracteres para o gabarito
    char gabarito[numQuest];

    // Leitura do gabarito
    printf("Informe o gabarito:");
    for (i = 0; i < numQuest; i++)
    {
        scanf(" %c", &gabarito[i]);
    }

    // Declarando vetor de ponteiros para strings (respostas dos alunos)
    char **respostas = (char **)malloc(10 * sizeof(char *));
    if (respostas == NULL)
    {
        printf("ERRO!!! Memória insuficiente");
        exit(1);
    }

    // Alocando espaço para cada resposta de aluno
    for (i = 0; i < 10; i++)
    {
        respostas[i] = (char *)malloc(numQuest * sizeof(char));
    }

    // Leitura das respostas dos alunos
    for (i = 0; i < 10; i++)
    {
        printf("Informe as respostas do aluno %d: ", i + 1);
        for (j = 0; j < numQuest; j++)
        {
            scanf(" %c", &respostas[i][j]);
        }
    }

    // Calculando notas
    for (i = 0; i < 10; i++)
    {
        notas = 0.0;
        for (j = 0; j < numQuest; j++)
        {
            if (respostas[i][j] == gabarito[j])
            {
                notas = notas + 10.0 / numQuest;
            }
        }
        printf("Nota do aluno %d: %.2f\n", i + 1, notas);
        if (notas >= 6.0)
        {
            aprovados++;
        }
    }

    // Mostrando a quantidade de alunos aprovados
    qtdAprovados = aprovados * 100 / 10;
    printf("A taxa de aprovação foi de %.2f%%\n", qtdAprovados);

    // Liberando a memória alocada
    for (i = 0; i < 10; i++)
    {
        free(respostas[i]);
    }
    free(respostas);

    return 0;
}