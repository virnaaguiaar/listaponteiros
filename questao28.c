Terceiro printf("%s ", *c[-2] + 3);

c[-2]: Acessa o elemento que está dois elementos antes de c, ou seja, b[0] ("JUNIOR").
*c[-2] retorna o ponteiro a[3] ("JUNIOR").
*c[-2] + 3: Avança 3 posições na string "JUNIOR", resultando em "IOR".
Portanto, imprime: IOR.
Quarto printf("%s ", c[-1][-1] + 1);:

c[-1]: Acessa o elemento que está um elemento antes de c, ou seja, b[2] ("MEDEIROS").
c[-1][-1] é o mesmo que *c[-1], que resulta em a[1] ("MEDEIROS").
c[-1][-1] + 1: Avança 1 posição na string "MEDEIROS", resultando em "EDEIROS".
Portanto, imprime: EDEIROS.*/include <stdio.h>
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


