#include <stdio.h>

int f(int a, int *pb, int **ppc) {
    int b, c;
    **ppc += 1; // Incrementa o valor que ppc (ponteiro para ponteiro) aponta (c); 5+1=6
    c = **ppc;  // Atribui o novo valor de c, agora 6, a c
    *pb += 2;   // Incrementa o valor de b (guardado no endereço c) em 2; 6+2=8
    b = *pb;    // Atribui o novo valor de b, agora 8, a b
    a +=3;      // Incrementa o c original; 5+3=8
    return a + b + c; // 6+8+8=22
}

void main() { // Corrigido para int main
    int c, *b, **a;
    c = 5;       // c é inicializado como 5
    b = &c;      // b aponta para o endereço de c
    a = &b;      // a aponta para o endereço de b
    printf("%d\n", f(c, b, a)); // Chama a função f e imprime o resultado
    getchar();
}
    
