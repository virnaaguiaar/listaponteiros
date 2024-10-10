18. O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e
escreva um pequeno programa exemplificando o uso deste recurso. Explique seu programa,
comentando cada uma das linhas de código.


  Uma variável que armazmena o endereço de uma função
        -> Permite chamar uma função indiretamente através do ponteiro


//SUGESTÃO:

#include <stdio.h>

int some(int a, int b){
  return a + b;
}

int main(){
  int(*PonteiroSoma)(int, int);
  PonteiroSoma = some;
  int n1, n2;

  printf("DIGITE O PRIMEIRO NÚMERO: ");
  scanf("%d", &n1);

  printf("DIGITE O SEGUNDO NÚMERO: ");
  scanf("%d", &n2);

  int result = PonteiroSoma(n1, n2);

  printf("RESULTADO: %d\n", result);
  
  return 0;
}
