#include <stdio.h>
struct teste{
  //defirnir os membros sem atribuicoes
  int x = 3;
  char nome[] = "jose"; //cade o tamanho?
};
main(){//sem tipo
  struct teste *s; //ponteiro declarado mas não inicializado e sem alocação de memória
  printf("%d", s->x);
  printf("%s", s->nome);
  //sem retorno de função
}

//SUJESTÃO
// #include <stdio.h>
// struct teste{
//   //defirnir os membros sem atribuicoes
//   int x;
//   char nome[10]; //cade o tamanho?
// };
// int main(){//sem tipo
//   struct teste *s = malloc(sizeof(struct teste)); //ponteiro declarado mas não inicializado e sem alocação de memória
  
//   //deu certo?
//   if(s==NULL){
//     print("Erro de alocação\n");
//     return 1;
//   }


//   //inicializar
//   s -> x=3;
//   strcpy(s->nome, "jose"); //copia a string p o nome
  
//   printf("%d", s->x);
//   printf("%s", s->nome);
//   //sem retorno de função
//   free(s);
//   return 0;
// }
