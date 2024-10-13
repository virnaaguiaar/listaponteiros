#include <stdio.h>
#include <stdlib.h>

// Função de comparação para ordenar em ordem crescente
int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b); // Retorna a diferença entre os dois inteiros
}

// Função para ordenar um array de inteiros
void ordenar(int *matriz, int qt, int (*compar)(const void*, const void*)) {
    for (int i = 0; i < qt - 1; i++) {
        for (int j = 0; j < qt - i - 1; j++) {
            // Usa a função de comparação para decidir se deve trocar os elementos
            if (compar(&matriz[j], &matriz[j + 1]) > 0) {
                // Troca os elementos
                int temp = matriz[j];
                matriz[j] = matriz[j + 1];
                matriz[j + 1] = temp;
            }
        }
    }
}

int main() {
    int qt;

    // Ler o número de inteiros
    printf("QUANTOS VALORES:  ");
    scanf("%d", &qt);

    // Alocar memória para os inteiros
    int *valores = (int *)malloc(qt * sizeof(int));
    if (valores == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1; // Retorna um erro
    }

    // Ler os inteiros
    for (int i = 0; i < qt; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // Ordenar os inteiros usando a função ordenar
    ordenar(valores, qt, comparar);

    // Exibir os inteiros ordenados
    printf("Ordem crescente:\n");
    for (int i = 0; i < qt; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    // Liberar memória
    free(valores);

    return 0; // Finaliza o programa
}
