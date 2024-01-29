#include <stdio.h>
#include <stdlib.h>

int main(void){

    int quantDeQuestoes;
        printf("Digite a quantidade de questoes: ");
        scanf("%d",&quantDeQuestoes);

    char *gabarito = (char *) malloc((quantDeQuestoes) * sizeof(char));
        
    
        printf("Digite o gabarito da prova: ");
        scanf("%s", gabarito);

    float *notasDosAlunos = (float *) malloc(10 * sizeof(float));
    for (int i = 0; i < 10; i++){
        
        char *respostasDoAluno = (char *) malloc((quantDeQuestoes + 1) * sizeof(char));

        printf("Respostas do aluno %d: ", i + 1);
        scanf("%s", respostasDoAluno);

        float nota = 0;
        for (int j = 0; j < quantDeQuestoes; j++){
            if (respostasDoAluno[j] == gabarito[j]){
                nota += 10.0 / quantDeQuestoes;
            }
        }
        notasDosAlunos[i] = nota;
        printf("Nota do aluno %d: %.2f\n", i + 1, nota);
        free(respostasDoAluno);
    }
        int aprovados = 0;
            for (int i = 0; i < 10; i++){
                if (notasDosAlunos[i] >= 6.0){
                    aprovados++;
                }
            }

        float porcentagemAprovacao = (float)aprovados / 10.0 * 100.0;
        printf("\nPorcentagem de aprovacao: %.2f%%\n", porcentagemAprovacao);
        free(gabarito);
        free(notasDosAlunos);

        return 0;    
    }


