#include <stdio.h> //printf; scanf
#include <stdlib.h>

// Função para alocar uma matriz tridimensional
int*** alocarMatriz(int altura, int largura, int profundidade) { //Declara uma função que retorna um ponteiro para um ponteiro de ponteiro de inteiros. parâmetros: dimensões da matriz.
    int ***matriz = (int ***)malloc(altura * sizeof(int **)); //tamanho necessário para armazenar altura
    for (int i = 0; i < altura; i++) { //laço para percorrer cada camada
        matriz[i] = (int **)malloc(largura * sizeof(int *)); //calcula o tamanho necessário para largura
        for (int j = 0; j < largura; j++) { //laço para percorrer cada linha da camada atual
            matriz[i][j] = (int *)malloc(profundidade * sizeof(int)); // tamanho necessário para armazenar profundidade inteiros.
        }
    }
    return matriz; // Após alocar as dimensões, a função retorna o ponteiro da matriz tridimensional
}

// Função para liberar a memória da matriz tridimensional
void liberarMatriz(int ***matriz, int altura, int largura) {
    for (int i = 0; i < altura; i++) { //laço para percorrer cada camada
        for (int j = 0; j < largura; j++) { // percorre cada linha da camada
            free(matriz[i][j]); //libera a memória alocada para o vetor de inteiros
        }
        free(matriz[i]); //Libera a memória alocada para o vetor de ponteiros de cada camada
    }
    free(matriz); // libera a memória alocada para o vetor principal que armazena os ponteiros das camadas
}

// Função para imprimir um plano da matriz
void imprimirPlano(int **plano, int largura, int profundidade) {
    for (int i = 0; i < largura; i++) { //laço para percorrer cada linha do plano
        for (int j = 0; j < profundidade; j++) { //laço para percorrer cada elemento da linha
            printf("%d ", plano[i][j]); //imrpime cada elemento da linha com espacamento
        }
        printf("\n"); //formatar a saída
    }
}

int main() {
    int altura, largura, profundidade; //Declarar variáveis para armazenar as dimensões da matriz

    // Solicitar ao usuário as dimensões da matriz
    printf("Digite a altura da matriz: ");
    scanf("%d", &altura);
    printf("Digite a largura da matriz: ");
    scanf("%d", &largura);
    printf("Digite a profundidade da matriz: ");
    scanf("%d", &profundidade);

    // Alocar a matriz tridimensional
    int ***matriz = alocarMatriz(altura, largura, profundidade);

    // Inicializar todos os elementos da matriz com zero
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            for (int k = 0; k < profundidade; k++) {
                matriz[i][j][k] = 0; // Inicializa com 0 (ausência de objeto)
            }
        }
    }

    // Modificar um elemento da matriz
    int x, y, z;
    printf("Digite as coordenadas (x, y, z) para modificar o estado (0 ou 1): ");
    scanf("%d %d %d", &x, &y, &z); //pedir as 3 corrdenadas para achar a posição do que se quer modificar
  
    printf("Digite o valor (0 ou 1): ");
    int valor;
    scanf("%d", &valor); //modificar o estado do elemento
    
    // Acesso à matriz: matriz[x][y][z]
    // verifica se as coordenadas dadas fazem juz ao tamanho real da matriz
    if (x >= 0 && x < altura && y >= 0 && y < largura && z >= 0 && z < profundidade) {
        matriz[x][y][z] = valor; //coordenadas ok
    } else {
        printf("Coordenadas fora dos limites da matriz!\n"); //coordenadas mirabolantes; erro
    }

    // Solicitar a impressão de um plano da matriz
    int plano;
    printf("Digite o plano que deseja imprimir (0 a %d): ", altura - 1);
    scanf("%d", &plano);
  
    if (plano >= 0 && plano < altura) { //plano dentro do limite real
        printf("Plano %d:\n", plano);
        imprimirPlano(matriz[plano], largura, profundidade);
    } else {
        printf("Plano fora dos limites!\n");
    }

    // Liberar a memória alocada
    liberarMatriz(matriz, altura, largura); //Libera a memória alocada para a matriz antes de terminar o programa

    return 0;
}
