// com o método de ordenação
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Inclui a biblioteca para medir tempo

int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void ordenar(int *matriz, int qt, int (*compar)(const void*, const void*)) {
    for (int i = 0; i < qt - 1; i++) {
        for (int j = 0; j < qt - i - 1; j++) {
            if (compar(&matriz[j], &matriz[j + 1]) > 0) {
                // Troca os elementos
                int k = matriz[j];
                matriz[j] = matriz[j + 1];
                matriz[j + 1] = k;
            }
        }
    }
}

int main() {
    int qt;
    printf("QUANTOS VALORES: ");
    scanf("%d", &qt);

    int *valores = (int *)malloc(qt * sizeof(int));
    if (valores == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    for (int i = 0; i < qt; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    clock_t start = clock(); // Começa a contagem do tempo
    ordenar(valores, qt, comparar);
    clock_t end = clock(); // Termina a contagem do tempo

    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Tempo de execução (método de ordenação): %f segundos\n", time_spent);

    printf("Ordem crescente:\n");
    for (int i = 0; i < qt; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    free(valores);
    return 0;
}

//Com qsort()

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Inclui a biblioteca para medir tempo

int comparar(const void *a, const void *b) {
    return (*(float*)a > *(float*)b) - (*(float*)a < *(float*)b);
}

int main() {
    int qt;
    printf("QUANTOS VETORES: ");
    scanf("%d", &qt);

    float *valores = (float *)malloc(qt * sizeof(float));
    if (valores == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    // Ler os valores
    for (int i = 0; i < qt; i++) {
        scanf("%f", &valores[i]);
    }

    clock_t start = clock(); // Começa a contagem do tempo
    qsort(valores, qt, sizeof(float), comparar);
    clock_t end = clock(); // Termina a contagem do tempo

    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Tempo de execução (qsort()): %f segundos\n", time_spent);

    printf("Ordem crescente:\n");
    for (int i = 0; i < qt; i++) {
        printf("%2f ", valores[i]);
    }
    printf("\n");

    free(valores);
    return 0;
}

//TESTE (método de ordenação)
// QUANTOS VALORES: 2
// Número 1: 87
// Número 2: 64
// Tempo de execução (método de ordenação): 0.000002 segundos
// Ordem crescente:
// 64 87 


//TESTE qsort()
// QUANTOS VETORES: 2
// 87
// 64
// Tempo de execução (qsort()): 0.000005 segundos
// Ordem crescente:
// 64.000000 87.000000

//CONCLUSÃO
// chamar uma função gasta mais tempo de execução do que cria-la manual
