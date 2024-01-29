#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
    char nome[30];
    int documento;
    int idade;
}Pessoa;

void divisoria(){
    printf("================================\n");
}

void preencher(Pessoa * pesso){
    printf("Digite o nome da pessoa: ");
    scanf(" %[^\n]", pesso->nome);
    printf("Informe o numero do documento: ");
    scanf("%d", &pesso->documento);
    printf("Informe a idade da pessoa: ");
    scanf("%d", &pesso->idade);
}


void imprimir (Pessoa * pesso){
    printf("Nome: %s\n", pesso->nome);
    printf("Documento: %d\n", pesso->documento);
    printf("Idade: %d\n", pesso->idade);
}

void NovaIdade(Pessoa * pesso, int idade_n){
    pesso->idade = idade_n;
}

void pessmaisvelha(Pessoa * pesso, int quantidadePessoas){
    int contador;
    int m_idade = pesso[0].idade;
    int idade = 0;
    for (contador = 0; contador < quantidadePessoas; contador++){
        if (pess[contador].idade > m_idade){
           m_idade = pesso[contador].idade;
           idade = contador;
        }
    }
    printf("\n Pessoa mais velha eh %s tendo %d anos", pesso[idade].nome, m_idade);
}

void pessmaisnova(Pessoa * pesso, int quantidadePessoas){
    int contador;
    int me_idade = pesso[0].idade;
    int idade = 0;
    for(contador = 0; contador < quantidadePessoas; contador++){
        if (pesso[contador].idade < me_idade){
            me_idade = pesso[contador].idade;
            idade = contador;
        }
    }
    printf("\n Pessoa mais nova é %s tendo %d anos\n", pesso[idade].nome, me_idade);
}

int main(){
    
    int quantidadePessoas = 4;

    Pessoa * pesso = (Pessoa*)malloc(quantidadePessoas * sizeof(Pessoa));

    int contador; 

    printf("DADOS DAS PESSOAS:\n");
    divisoria();
    for (contador = 0; contador < quantidadePessoas; contador++){
        preencher(&pesso[contador]);
        divisoria();
    }

    printf("DADOS INFORMADOS:\n");
    divisoria();
    for (contador = 0; contador < quantidadePessoas; contador++){
        imprimir(&pesso[contador]);
        divisoria();
    }

    pessmaisvelha(pesso, quantidadePessoas);
    pessmaisnova(pesso, quantidadePessoas);
    divisoria();

    free(pesso);
    return 0;
}