#include <stdio.h>
int main(){
  int i=5, *p;
  p = &i;
  printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);

  return 0;
}

// p: 4094

// p+1: 4098

// *p + 2: 7

// **&p: 5

//3**p: 15

//**&p + 4: 9
