#include <stdio.h>
char *a[] = {"AGOSTINHO", "MEDEIROS", "BRITO", "JUNIOR"};
char **b[] = {a + 3, a + 2, a + 1, a};
char ***c = b;
int main() {
  printf("%s ", **++c); 
          // c incrementado é b[1] = a+2; desreferenciado tem o conteúdo "BRITO"
  printf("%s ", *--*++c + 3); 
          // o novo valor de c = b[1] e vira b[2]=a+1; MEDEIROS; 
          // decrementa em 1: a+1(-1)=a=a[0] AGOSTINHO
          // inicia do 4º caractere STINHO
  printf("%s ", *c[-2] + 3);
          //
  printf("%s ", c[-1][-1] + 1); 
  return 0;
}

