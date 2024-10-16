#include <stdio.h>
int main(){
 unsigned int x[4][3] = {{1, 2, 3}, 
                         {4, 5, 6},
                         {7, 8, 9}, 
                        {10, 11, 12}};
 printf("%p, %p, %p", x+3, *(x+3), *(x+2)+3);
}

// x+3: x representa o endereço do primeiro elemento da matriz ( 1ª linha, 1ª coluna), 
//      ao implementar 3, a representação passa a ser o endereço do 1º elemento da quarta linha //int

// *(x+3): x representa o endereço do primeiro elemento da matriz ( 1ª linha, 1ª coluna), 
//         ao implementar 3, a representação passa a ser o 1º elemento da quarta linha,
//         ao fim o * revela o conteúdo desse endereço //int*
  
// *(x+2)+3: *(x+2) representa o conteúdo do 1º elemento da terceira coluna;
//           ao implementar 3, é percorrido pela linha 3 unidades, 
//           chegando ao 1º elemento da quarta linha //int

// CONCLUSÃO: como todos apontam para o mesmo elemento e o formato %p em C é utilizado  
// para imprimir endereços de memória, então, o valor das três saídas é o mesmo
