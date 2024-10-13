13. Seja x um vetor de 4 elementos, declarado da forma TIPO x[4]. Suponha que depois da
declaração, x esteja armazenado no endereço de memória 4092 (ou seja, o endereço de x[0]).
Suponha também que na máquina seja usada uma variável do tipo char ocupa 1 byte, do tipo
int ocupa 2 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes. Quais serão os
valores de x+1, x+2 e x+3 se:
◦ x for declarado como char?
    x+1 = 4093, x+2 = 4094 e x+3 = 4095
◦ x for declarado como int?
    x+1 = 4094, x+2 = 4096 e x+3 = 4097
◦ x for declarado como float?
    x+1 = 4096, x+2 = 4100 e x+3 = 4104
◦ x for declarado como double?
    x+1 = 4100, x+2 = 4108 e x+3 = 4116
Implemente um programa de computador para testar estas suposições e compare as respostas
oferecidas pelo programa com as respostas que você idealizou

#include <stdio.h>

int main() {
    int x = 4092;

    printf("Char:\n");
    printf("x + 1: %d\n", x + 1);
    printf("x + 2: %d\n", x + 2);
    printf("x + 3: %d\n", x + 3);

    printf("\nInt:\n");
    printf("x + 1: %d\n", x + 2);
    printf("x + 2: %d\n", x + 4);
    printf("x + 3: %d\n", x + 6);

    printf("\nFloat:\n");
    printf("x + 1: %d\n", x + 4);
    printf("x + 2: %d\n", x + 8);
    printf("x + 3: %d\n", x + 12);

    printf("\nDouble:\n");
    printf("x + 1: %d\n", x + 8);
    printf("x + 2: %d\n", x + 16);
    printf("x + 3: %d\n", x + 24);

    return 0;
}
