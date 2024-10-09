#include <stdio.h>    // entrada e saída

void funcao(char **p){    //um ponteiro para um ponteiro de string
  char *t;          // declara um ponteiro para caractere 't'
  t = (p += sizeof(int))[-1];
          //avança pelo tamanho (int = 4 bytes)
          //após o deslocamento, retorna ao índice anterior do vetor de strings
  printf("%s\n", t);    // imprime o conteúdo do vetor de strings
}

int main(){
  char *a[] = { "ab", "cd", "ef", "gh", "ij", "kl"};
                  0     1     2     3     4     5
                                    x  <= -1
  funcao(a);
  return 0;
}
          // imprime 'gh'
