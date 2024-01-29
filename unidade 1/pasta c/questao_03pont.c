include <stdio.h>

int main(void) {
 int a, b, c, d; // declarando variáveis do tipo inteiro
 int *p1; //declarando um ponteiro 
 int *p2 = &a; //cria um ponteiro para uma variável e atribui a esse ponteiro o endereço da variável a 
 int *p3 = &c; //cria um ponteiro para uma variável e atribui a esse ponteiro o endereço da variável C
 p1 = p2; //iguala o ponteiro p1 com p2
 *p2 = 10; //atribui o valor 10 ao p2
 b = 20; // b recebe 20
 int **pp; //cria um ponteiro de um ponteiro
 pp = &p1; //o ponteiro do ponteiro pp pega o endereço de p1
 *p3 = **pp; //Valor apontado por p3 recebe o valor apontado por pp 
 int *p4 = &d; // p4 recebe o endereço de d
 *p4 = b + (*p1)++; //p4 vai receber o valor de b+10 

 printf("%d\t%d\t%d\t%d\n", a, b, c, d); // saída: 11, 20, 10, 30

 return 0;
}
