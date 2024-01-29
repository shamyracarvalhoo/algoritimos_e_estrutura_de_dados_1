#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef union tipo{
    char ALIMENTO [20];
    char ELETRÔNICO [20];
    char BEBIDA[20]
     
}Tipo;

typedef struct produtos{
    char nome[30];
    float preco;
    Tipo var_tipo;
}Produto

void divisoria(){
    printf("\n-----------------------------------\n");
}

void preenche(Produto * p){
    int opcao;
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", p->nome);
    printf("Digite o preço do produto: ");
    scanf ( "% f", &p->preco);
    printf ("Digite o tipo do produto: \n");
    printf ("Digite 1 para ALIMENTOS \n");
    printf ("Digite 2 para ELETRÔNICOS \n");
    printf ("Digite 3 para BEBIDAS \n");
    scanf ("%d", &opcao);

    switch (opcao){
    case 1:
        strcpy(p->var_tipo.ALIMENTO, "ALIMENTO");
        break;
    case 2: 
        strcpy(p->var_tipo.BEBIDA, "BEBIDA");
        break;   
    case 3:
        strcpy(p->var_tipo.ELETRONICO, "ELETRONICO");
        break;
    default:
        exit(1);
        break;
    }
 
 }
 void imprime(Produto * p){
    printf("Nome: %s\n", p->nome);
    printf("Preço: %.2f\n", p->preco);
    printf("Tipo: %s\n", p->var_tipo.ALIMENTO);

}

int main (void){
    Produto * p = malloc(sizeof(Produto));
    printf("Digite as informações: \n");
    divisoria();
    preenche(p);
    printf("Dados informados:\n");
    divisoria();
    imprime(p);
    free(p);
    return 0;
} 




