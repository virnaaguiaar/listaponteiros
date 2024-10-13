#include <stdio.h>

int main(){
  int qt;
  printf("QUANTOS VETORES: ");
  scanf("%d", &qt);

  float *valores = (float *)malloc(qt* sizeof(float));
  for(int i=0; i<qt; i++){
    printf("Número %d: "), i+1;
    scanf("%f", &valores[i]);
  }
  
  for(int i=0; i< qt - 1; i++){
    for(int j=0; j < qt - i - 1; j++){
      if(valores[j] > valores[j+1]){
        float temp=valores[j];
        valores[j] = valores[j+1];
        valores[j+1] = temp;
      }
    }
  }

  printf("Ordem crescente:\n");
  for(int i=0; i<qt; i++){
    printf("%2f ", valores[i]);
  }
  printf("\n");
  free(valores);

  return 0;
}
