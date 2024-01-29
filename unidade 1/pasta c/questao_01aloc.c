#include <stdio.h>
#include <stdlib.h>

int main(void){

    int tamanho_do_vetor;
    float mascGostou = 0;
    float mascNaoGostou =0;
    float femGostou = 0;
    float femNaoGostou =0;

        printf("Quantas pessoas voce quer pesquisar: ");
        scanf("%d",&tamanho_do_vetor);

    int *vetor_de_resposta_do_tipo_de_sexo = (int *) malloc(tamanho_do_vetor * sizeof(int));
    int *vetor_de_opinioes = (int *) malloc(tamanho_do_vetor *sizeof(int));

    if(vetor_de_resposta_do_tipo_de_sexo == NULL && vetor_de_opinioes == NULL){
        printf("ERRO DE LOCAÇÃO DE MEMORIA\n");
        exit(1);
    }

    for (int i = 0; i < tamanho_do_vetor; i++){
        printf("Digite o sexo da pessoa %d -> "
        "1- Masculino  2- Feminino: ", i + 1);
        // armazenando o sexo da pessoa
        scanf("%d",&vetor_de_resposta_do_tipo_de_sexo[i]);

        printf("Digite a opiniao sobre o produto %d -> "
        "1 - Gostou  2 - Nao Gostou: ", i + 1);
        // armazenando a opiniao da pessoa
        scanf("%d",&vetor_de_opinioes[i]);
    }

    for (int i = 0; i < tamanho_do_vetor; i++){

        if(vetor_de_resposta_do_tipo_de_sexo[i] == 2 && vetor_de_opinioes[i] == 1){
            femGostou++;
        }

        else if(vetor_de_resposta_do_tipo_de_sexo[i] == 1 && vetor_de_opinioes[i] == 2){
            femNaoGostou++;

        }
    }

    femGostou = (femGostou / tamanho_do_vetor) * 100;
    femNaoGostou = (femNaoGostou / tamanho_do_vetor) * 100;
    mascGostou = (mascGostou / tamanho_do_vetor) * 100;
    mascNaoGostou = (mascNaoGostou / tamanho_do_vetor) * 100;

        printf("O total de pessoas que responderam a pesquisa foi: %d\n",tamanho_do_vetor);
        printf("A porcentagem de pessoas do sexo feminino que gostaram do produto foi: %.2f porcento\n", femGostou);

        printf("A porcentagem de pessoas do sexo masculino que nao gostaram do produto foi: %.2f porcento\n", mascNaoGostou);

    free(vetor_de_resposta_do_tipo_de_sexo);
    free(vetor_de_opinioes);
    return 0;

}