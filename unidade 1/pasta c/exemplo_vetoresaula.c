#include <stdio.h>
#include <stdlib.h>

int main(void){
    

    int * vetor = (int *) malloc(3 * sizeof(int)); 
    
    if (vetor == NULL){ 
        printf("ERRO! Memória insuficiente, não foi possível alocar.");
        exit(1); 
    }
    else{
        printf("Alocacao bem sucedida.");
    }


    free(vetor); 
    return 0;
}