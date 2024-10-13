// ESTUDO DA FUNÇÃO qsort()
// void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))


#include <stdio.h>
#include <stdlib.h>

// Função de comparação para qsort

int comparar(const void *a, const void *b) {
    return (*(float*)a > *(float*)b) - (*(float*)a < *(float*)b); // Se *a for maior que *b, retorna 1 (a depois de b)
}                                                                // Se *a for menor que *b, retorna -1 (a antes de b)

int main() {
    int n;

    // Ler o número de valores
    printf("Digite o número de valores: ");
    scanf("%d", &n);

    // Alocar memória para os valores
    float *valores = (float*)malloc(n * sizeof(float));

    // Ler os valores
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }

    // Ordenar os valores
    qsort(valores, n, sizeof(float), comparar);

    // Exibir os valores ordenados
    printf("Valores em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", valores[i]);
    }

    // Liberar memória
    free(valores);

    return 0;
}
