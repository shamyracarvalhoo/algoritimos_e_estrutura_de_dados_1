#include<stdio.h>

typedef enum genero{
    masculino
    feminino 
}Genero;

typedef struct pessoa{
    char nome [20];
    int idade;
    Genero genero_pessoa;
}Pessoa;

void get_dados(Pessoa * pessoa){
    printf("Informe o nome: \n");
    scanf("%[^\n]", pessoa->nome);
    printf("Informe a idade: \n");
    scanf("%d", &pessoa->idade);
    printf("Informe o genero:\n0-Masculino\n1-Feminino\n");
    scanf("%d", &pessoa->genero_pessoa);
}

void imprime_pessoa(Pessoa * pessoa){
    printf("Nome: %s\nIdade: %d\nGenero: %s\n", pessoa->nome, pessoa->idade, pessoa->genero_pessoa==masculino?"Masculino":"Feminino");
}

int main(void){
    Pessoa * p;
    get_dados(&p);
    imprime_pessoa(&p);
    return 0;
}

// questão 1 lista union e enum