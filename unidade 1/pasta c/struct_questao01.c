#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario {
   char nome[30];
   float salario;
   int identificador;
   char cargo[20];
}Funcionario;

void divisoria(){
    printf("===========================\n");
}

void preencha(Funcionario * funcionar){
    printf("Digite o nome: ");
    scanf(" %[^\n]", funcionar->nome); 
    printf("Informe o salario: ");
    scanf("%f", &funcionar->salario);
    printf("Digite o identificador: ");
    scanf("%d", &funcionar->identificador);
    printf("Digite o cargo que ocupa: ");
    scanf(" %[^\n]", funcionar->cargo);

}

void imprima(Funcionario * funcionar, int quantidade_func){
    printf("Nome: %s\n", funcionar->nome);
    printf("Salario: %.2f\n", funcionar->salario);
    printf("Identificador: %d\n", funcionar->identificador);
    printf("Cargo: %s\n", funcionar->cargo);
}

void altera_salario(Funcionario * funcionar, float novo_salario){
    funcionar->salario = novo_salario;
}

void maiorSalario(Funcionario * funcionar, int quantidade_func){
    int contador;
    float maiorsalario = funcionar[0].salario;
    int id;
    for (contador = 0; contador < quantidade_func; contador++){
        if (funcionar[contador].salario > maiorsalario){
            maiorsalario = funcionar[contador].salario;
            id = contador;
        }
    }
    printf("\nO maior salario é de %.2f do funcionario com cargo %s\n", maiorsalario, funcionar[id].cargo);
}

void menorSalario(Funcionario * funcionar, int quantidade_func){
    int contador;
    float menorsalario = funcionar[0].salario;
    int id;
    for (contador = 0; contador < quantidade_func; contador++){
        if (funcionar[contador].salario < menorsalario){
            menorsalario = funcionar[contador].salario;
            id = contador;
        }
    }
    printf("O menor salario é de %.2f do funcionario com cargo %s\n", menorsalario, funcionar[id].cargo);
}

int main(){
   int quantidade_func = 4;

   Funcionario * funcionar = (Funcionario*)malloc(quantidade_func * sizeof(Funcionario));

    int contador;

    printf("INFORME OS DADOS:\n");
    divisoria();
    for (contador = 0; contador < quantidade_func; contador++){
        preencha(&funcionar[contador]);
        divisoria();
    }

    printf("DADOS DOS FUNCIONARIOS:\n");
    divisoria();
    for (contador = 0; contador < quantidade_func; contador++){
        imprima(&funcionar[contador], quantidade_func);
        divisoria();
    }

    maiorSalario(funcionar, quantidade_func);
    menorSalario(funcionar, quantidade_func);
    divisoria();

    free(funcionar);
    return 0;
}