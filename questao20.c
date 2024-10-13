// ESTUDO DA FUNÇÃO qsort()
// void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))


#include <stdio.h>
#include <stdlib.h>

// Função de comparação para qsort
int comparar(const void *a, const void *b) {
    return (*(float*)a > *(float*)b) - (*(float*)a < *(float*)b); // Se *a for maior que *b, retorna 1 (a depois de b)
}                                                                // Se *a for menor que *b, retorna -1 (a antes de b)

int main() {
   
    int qt; //iniciar a variável para o número de valores que o usuário que colocar em ordem
    printf("QUANTOS VETORES: ");
    scanf("%d", &qt); // Ler o número de valores

    
    float *valores = (float *)malloc(qt* sizeof(float)); // Alocar memória para os valores

    
    if (valores == NULL) { // Verificar se a alocação foi bem-sucedida
      printf("Erro na alocação de memória.\n"); //mensagem de erro de alocação
      return 1; // Retorna um erro
    }
    
    // Ler os valores
    for(int i=0; i<qt; i++){ //estrutura de repetição para pedir cada valor ao usuário
        scanf("%f", &valores[i]); //pedir cada valor
    }
    
    
    qsort(valores, qt, sizeof(float), comparar); // Ordenar os valores


    printf("Ordem crescente:\n");
    for(int i=0; i<qt; i++){ //estrutura de repetição para mostrar cada valor ao usuário em ordem
        printf("%2f ", valores[i]); //estrutura de repetição para pedir cada valor ao usuárioimprime o valor em ordem
    }
    printf("\n");
    free(valores); //liberar memória

    return 0;
}
