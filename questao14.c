#include <stdio.h>

int f(int a, int *pb, int **ppc) {
    int b, c;
    **ppc += 1; // Incrementa o valor que ppc aponta (c)
    c = **ppc;  // Atribui o novo valor de c a c
    *pb += 2;   // Incrementa o valor de b (c) em 2
    b = *pb;    // Atribui o novo valor de b a b
    a += 3;     // Aumenta a em 3 (a função não altera a original)
    return a + b + c; // Erro: a deve ser uma variável inteira
}

int main() { // Corrigido para int main
    int c, *b, **a;
    c = 5;       // c é inicializado como 5
    b = &c;      // b aponta para c
    a = &b;      // a aponta para b
    printf("%d\n", f(c, b, a)); // Chama a função f e imprime o resultado
    getchar();
    return 0; // Retorno adequado da função main
}
