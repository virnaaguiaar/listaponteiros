#include <string.h>     // strcpy; strlen = manipulação de strings
#include <stdio.h>      // printf; puts = entrada/saída padrão
#include <stdlib.h>     // malloc; free; exit = utilitários

void funcao(char** str){
  str++;       // não altera o ponteiro original // aponta para a próxima posição de 'char*'
}                  // str aponta para um local diferente dentro da 'funcao'

int main(){
  char *str = (void *)malloc(50*sizeof(char));
  //[aponta p/ o início do bloco] = [desnecessário] || [aloca dinamicamente um bloco de memória de 50 bytes (49 caracteres + nulo)]; e retorna um ponteiro para o início do bloco

  strcpy(str, "Agostinho");     // copia a string 'Agostinho' para a memória apontada por 'str' // então str contem 'Agostinho'

  funcao(&str);             //não afeta o ponteiro original 'str'em 'main'

  puts(str);                // imprime string que 'str' aponta // imprime 'Agostinho

  free(str);                // libera a memória alocada para 'str' (evitar vazamento de memória)
  return 0;
}


//sugestao:

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void funcao(char** str){
  *char ++;
}
int main(){
  char *str = (char*)malloc(50*sizeof(char));
  strcpy(str, "Agostinho");
  funcao(&str);
  puts(str);
  free(str);
  return 0;
}
