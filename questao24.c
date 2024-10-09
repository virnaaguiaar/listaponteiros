24. Crie uma função capaz de realizar multiplicação matricial da forma C = AxB. A função deve
receber 6 argumentos: os ponteiros para as matrizes A, B e C, o número de linhas e colunas de A
e o número de colunas de B (assuma que o número de coluna de A é igual ao número de linhas
de B). O resultado da multiplicação deve ficar armazenado em C. Crie um programa para testar
sua implementação, capaz de utilizar a função de multiplicação e imprimir as três matrizes. A
função criada para multiplicação não deve realizar nenhum tipo de saída de dados no terminal.
Exemplo: para multiplicar duas matrizes (A e B) de dimensões 2x3 e 3x4, respectivamente (o
resultado deve ficar armazenado em C).
multiplica_matrizes(A, B, C, 2, 3, 4);

void multiplica_matrizes(int *A, int *B, int *C, int c_a, int l_a, int c_b){
  for(int l=1, l<= c_a, l++){
    for(int c=1, c<= c_b, c++){
      C[l][c] += A[l][c] * B[l][c];
    }
  }
}

printf("NÚMEROS DE LINHAS DA MATRIZ A: \n");
scanf("%d", l_a\n);

printf("NÚMEROS DE COLUNAS DA MATRIZ A: \n");
scanf("%d", c_a\n);

printf("NÚMEROS DE COLUNAS DA MATRIZ B: \n");
scanf("%d", c_b\n);


for(int l=1, l<= l_a, l++){
  for(int c=1, c<=c_a, c++){
    scanf("%d", &A[i][j]);
  }
}

for(int l=1, l<= c_a, l++){
  for(int c=1, c<= c_b, c++){
    scanf("%d", &B[i][j]);
  }
}

// Inicializando a matriz resultante com zeros
for(int l=1; l <= l_a; l++){
  for(int c=1; c<= c_b; c++){
    C[l][c] = 0;
  }
}








/////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void multiplica_matrizes(int *A, int *B, int *C, int linhasA, int colunasA, int colunasB) {
    // Inicializa a matriz C com zeros
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            C[i * colunasB + j] = 0; // C[i][j] = 0
        }
    }

    // Realiza a multiplicação
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            for (int k = 0; k < colunasA; k++) {
                C[i * colunasB + j] += A[i * colunasA + k] * B[k * colunasB + j];
            }
        }
    }
}

void imprime_matriz(int *M, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", M[i * colunas + j]);
        }
        printf("\n");
    }
}

int main() {
    // Exemplo de matrizes A (2x3) e B (3x4)
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][4] = {{7, 8, 9, 10}, {11, 12, 13, 14}, {15, 16, 17, 18}};
    int C[2][4]; // Matriz resultado (2x4)

    // Chama a função de multiplicação
    multiplica_matrizes((int *)A, (int *)B, (int *)C, 2, 3, 4);

    // Imprime as matrizes A, B e C
    printf("Matriz A:\n");
    imprime_matriz((int *)A, 2, 3);
    
    printf("Matriz B:\n");
    imprime_matriz((int *)B, 3, 4);
    
    printf("Matriz C (Resultado):\n");
    imprime_matriz((int *)C, 2, 4);

    return 0;
}

   
