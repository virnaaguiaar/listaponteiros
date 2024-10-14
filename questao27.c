#include <stdio.h>
#define TAM 10
int funcao1(int vetor[], int v){
    int i;
    for (i = 0; i < TAM; i++){ //percorre o vetor
        if (vetor[i] == v) //se o valor do vetor da busca for 15
            return i; //retorna a posição do encontro
    }
    return -1; //retorna erro
}

int funcao2(int vetor[], int v, int i, int f){
    int m = (i + f) / 2; //declara m como a média entre a posição inicial e final
    if (v == vetor[m]) //se o a posição da média contiver o valor 15
        return m; //retorna a posição da média
    if (i >= f)
        return -1; //caso a posição inicial seja maior ou igual a posição final, retorna erro
    if (v > vetor[m]) //caso o valor 15 for maior que o conteúdo da posição da média
        return funcao2(vetor, v, m+1, f); //atualiza a posição do valor inicial para 1 posição 
                                          //a frente da posição da média original e recalcula a funçao
    else //caso seja menor
        return funcao2(vetor, v, i, m-1); //atualiza a posição final em 1 anterior a média original e recalcula
    }

int main(){
    int vetor[TAM] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; //declara o vetor de 10 valores
    printf("%d - %d", funcao1(vetor, 15), funcao2(vetor, 15, 0, TAM-1));
    return 0;
}

// A respeito das funções implementadas, avalie as afirmações a seguir.
// I. O resultado da impressão na linha 24 é: 7 - 7.
// II. A função funcao1(), no pior caso, é uma estratégia mais rápida do que a função funcao2().
// III. A função funcao2() implementa uma estratégia iterativa na concepção do algoritmo.
  // É correto o que se afirma em:
  // a. I, apenas.
  // b. III, apenas.
  // c. I e II, apenas.
  // d. II e III, apenas.
  // e. I, II e III.
  // Justifique sua resposta.
