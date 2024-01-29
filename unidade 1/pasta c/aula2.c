#include <stdio.h>

// enumeração 

#define TRUE 0
#define FALSE 1

typedef enum bool {
    true,
    false
} Bool; 

int main (void){
   Bool resposta;
   printf("Você gosta de algoritmos? \n 0- True\n 1- False\n");
   scanf("%d", &resposta);
   if(resposta==true){
    printf ("Boa escolha!\n");
   }
   else if (resposta==false){
    printf("Que pena :( \n)");
   }

 return 0; 
}  