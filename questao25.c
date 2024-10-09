//Memory leak, ou vazamento de memória, é um problema que ocorre em
//sistemas computacionais quando uma parte da memória, alocada para uma determinada
//operação, não é liberada quando se torna desnecessária. Na linguagem C, esse tipo de problema
//é quase sempre relacionado ao uso incorreto das funções malloc( ) e free( ). Esse erro de
//programação pode levar a falhas no sistema se a memória for completamente consumida. Um
//dos trechos abaixo apresenta um vazamento de memória. Identifique-o e justifique sua
//resposta.

//(E)
void f(int n){
  char *m = malloc(10);
  char *n = malloc(10);
  free(m); //memória de'm' foi liberada // programa quebrado para 'm'
  m = n; //não é possível submeter mais 'm' a qualquer ação uma vez que ele deixa de existir quando não possui endereço 
  free(m);
  free(n);
}
