#include <stdio.h>
int main(){
  int vet[] = {4, 9, 13};   // estabelece uma lista de 3 elementos
  int i;
  for(i=0;i<3;i++){
   printf("%d ", *(vet+i));
                    // mostra o conteúdo de cada posição na lista em decimal um do lado do outro com espaçamento
  }
}




#include <stdio.h>
int main(){
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
    printf("%X ",vet+i);
        // mostra o endereço de cada posição na lista em hexadecimal um do lado do outro com espaçamento
  }
}
