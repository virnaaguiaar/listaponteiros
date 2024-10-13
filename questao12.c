12. Qual será a saída do seguinte programa
#include <stdio.h>
void main(){
  int const *x = 3;
  printf("%d", ++(*x));
}


possui erro de compilaçao
primeiramente, em C não se pode atribuir diretamente um valor inteiro a um ponteiro;
em segundo, o programa quebraria pois nao se pode incrementar um valor constante.


  sujestão:
  #include <stdio.h>
  int main(){
    int x=3;
    printf("%d", ++x);
    return 0;
  }
