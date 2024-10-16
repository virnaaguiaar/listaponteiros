#include <stdio.h>
#include <stdlib.h>

void soma_vetores(int *v1, int *v2, int *soma, int t){
  for(i=1, i<=t, i++){
    soma[i] = v1[i] + v2[i];
  }
}

int main{
  int t;
  printf("TAMANHO DOS VETORES: ");
  scanf("%d", &t);

  //alocação
  int *v1 = (int *)malloc(t * sizeof(int));
  int *v2 = (int *)malloc(t * sizeof(int));
  int *soma = (int *)malloc(t *sizeof(int)

  //alocação ok?
  if(v1 == NULL || v2 == NULL || soma == NULL){
    printf("Alocação de memória sem êxito\n");
    return 1 //finalizar o programa em caso de erro
  }

  //ler os vetores
  printf("ELEMENTOS DO PRIMEIRO VETOR: \n");
  for (i=0, i<t, i++){
    scanf("%d", &v1[i]);
  }

  printf("ELEMENTOS DO SEGUNDO VETOR: \n");
  for(i=0, i<t, i++){
    scanf("%d", &v2[i]);
  }

  soma_vetores(v1, v2, soma, t);

  printf("RESULTADO DA SOMA: \n");
  for(i=0; i<t; i++){
    prinft("%d ", &soma[i]);
  }
  printf("\n");

  //libera memória
  free(v1);
  free(v2);
  free(soma);
    
  return 0;
}
