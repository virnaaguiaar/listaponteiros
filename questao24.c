#include <stdio.h>
#include <stdlib.h>

void multiplica_matrizes(int *A, int *B, int *C, int c_a, int l_a, int c_b){
  //inicializar
  for(int l=0; l< c_a; l++){
    for(int c=0; c< c_b; c++){
      C[l * c_b + c] = 0;
    }
  }

  //multiplicar
  for(int l=0; l< c_a; l++){
    for(int c=0; c< c_b; c++){
        for(int k=0; k<c_a; k++){
          C[l * c_b + c] += A[l * c_a + k] * B[k * c_b + c];
        }
    }
  }

}

int main(){

  int l_a, c_a, c_b;
  
  printf("NÚMEROS DE LINHAS DA MATRIZ A: \n");
  scanf("%d", &l_a);
  
  printf("NÚMEROS DE COLUNAS DA MATRIZ A: \n");
  scanf("%d", &c_a);
  
  printf("NÚMEROS DE COLUNAS DA MATRIZ B: \n");
  scanf("%d", &c_b);
  
  //alocar memória p matrizes
  int *A = malloc(l_a* c_a* sizeof(int));
  int *B = malloc(c_a* c_b* sizeof(int));
  int *C = malloc(l_a* c_b* sizeof(int));

  //preencher matriz
  printf("OS %d ELEMENTOS DA MATRIZ A: ", l_a * c_a);
  for(int l=0; l< l_a; l++){
    for(int c=0; c< c_a; c++){
      scanf("%d", &A[l * c_a + c]);
    }
  }

  printf("OS %d ELEMENTOS DA MATRIZ B: ", c_a * c_b);
  for(int l=0; l< c_a; l++){
    for(int c=0; c< c_b; c++){
      scanf("%d", &B[l * c_b + c]);
    }
  }
  
  // chamar multiplicacao
  multiplica_matrizes(A, B, C, l_a, c_a, c_b);

  // mostrar multiplicacao; matriz C
  printf("MATRIZ C:\n");
  for (int l = 0; l < l_a; l++) {
      for (int c = 0; c < c_b; c++) {
          printf("%d ", C[l * c_b + c]);
      }
      printf("\n");
  }

  // Liberando memória
  free(A);
  free(B);
  free(C);

  return 0;
}
