#include <stdio.h>
#include <stdlib.h> 


int main(void){

    int tamanho = 5, contador;
    int *vetor = (int *) malloc(tamanho * sizeof(int)); 
    
    if (vetor == NULL){ 
        exit(1); 
    }
    else{
        printf("Alocação concluída com sucesso\n");
    }

    // Ler os dados do vetor:
    printf("Informe os valores do vetor: \n");
    for (contador = 0; contador < tamanho; contador ++){
        scanf("%i", &vetor[contador]);  
    }

    free(vetor);
    return 0;
}

