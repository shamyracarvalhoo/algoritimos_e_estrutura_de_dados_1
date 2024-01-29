#include <stdio.h>

int main (){
    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) +=
}

// o valor de p deve ser 0 já que ele é um ponteiro que aponta para y.
// o valor de x e y devem ser respectivamente 4 e 1.
