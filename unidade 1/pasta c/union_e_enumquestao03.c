#include <stdio.h>

enum Meses {
    JANEIRO, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO
};
struct Data {
    int dia;
    enum Meses meses;
    int ano;
};

int main() {
    struct Data data;
    printf("Digite o dia, mes e ano (separados por espacos): ");
    scanf("%d %d %d", &data.dia, (int*)&data.meses, &data.ano);
    printf("Data: %02d/%02d/%04d\n", data.dia, data.meses, data.ano); 


    return 0;
}