#include <stdio.h>
int main(){
  int i=3,j=5;
  int *p, *q;
  p = &i;
  q = &j;

  printf("p == &i: %d\n", p == &i);
  printf("*p - *q: %d\n", *p - *q);
  printf("**&p: %d\n", **&p);
  printf("3 - *p/(*q) + 7;: %d\n", 3 - *p/(*q) + 7);

  return 0;
}

// p == &i (True = 1: '*p' é o ponteiro da variável 'i' e '&i' é o endereço de memória da variável 'i' que 'p' armazena. Logo 'p' armazena 'i'.)

//*p - *q (3 - 5 = -2: '&i' é o endereço de 'i' => 'p' o armazena => a localização de 'i' guarda o conteúdo de 'i' que está em 'p')

// **&p (3: desreferencia o ponteiro e retorna 'p' => '*p' => retorna 'i=3')
     // da direita para esquerda: (*(*(&(A))))

// 3 - *p/(*q) + 7) (10: 3 - 3/5 + 7 = 10)
