17. O que é memory leak? Crie um exemplo de programa em C que contenha um memory leak e
proponha uma correção para o mesmo.

  
É o vazamento de memória:
  -> o programa usa funções 'malloc()', 'calloc()', 'realloc()', ou seja, aloca memória;
     o consumo excessivo de memória ao longo do tempo pode levar a uma falha do sistema 
          -> e/ou esgotamento dos recursos do sitema;
                -> o que gera o 'memory leak'.
                      -> para evitá-lo deve-se libera a memória utilizada com 'free()'

  
//SUGESTÃO:

#include <stdio.h>
#include <stdlib.h>

int main(){
  int *virna = (int *)malloc(sizeof(int));

  //certeza de que alocou?
  if(virna == NULL){
    printf("Erro de alocação de memória\n");
  }

  *virna = 19;
  printf("Virna: %d\n", *virna);

  //evitar memory leak
  free(virna);

  return 0;
}
