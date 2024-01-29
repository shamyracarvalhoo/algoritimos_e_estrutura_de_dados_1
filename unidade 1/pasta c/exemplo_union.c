// Segunda, 22 de janeiro 
// exemplo 1 

#include <stdio.h>
#include <stdlib.h>


typedef union documentos{
    char rg[15];
    char cpf[15];
}Documentos;


typedef struct pessoa {
    char nome [20];
    int idade; 
    Documentos doc; // variável para armazenar o cpf ou o rg 
}Pessoa;

void dados_pessoa(Pessoa * p){
    /* 
    Função que preenche os dados de uma variável 
    do tipo Pessoa (struct)
    */
    int opcao;
    printf ("informe o nome: \t");
    scanf (" %[^\n]", p->nome);
    printf (" informe a idade:" /n);
    scanf ("%d", &p->idade);
    printf ("Digite 1 para CPF ou 2 para RG");
    scanf ("%d", &opcao);{
    }
    if (opcao)
    scanf ("%[^\n]", p->doc.cpf);
    } 
    else{
        scanf ("%[^\n]", p->doc.rg);
    }

int main (void){
  Pessoa pessoa;
  dados_pessoa (&pessoa); // a função recebe o endereço da variável 
    return 0; 
}

