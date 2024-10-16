#include <stdio.h>
int main() {
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;

  /* (a) */
  valor = 10;  //o conteúdo guardado de 'valor' é '10'
  p1 = &valor; //'p1' guarda o endereço de memória de 'valor'
  *p1 = 20;    //o conteúdo guardado de 'valor' é atualizado para '20', uma vez que está no msm endereço de memória
  printf("%d \n", valor); // imprime '20'
  
  //'*p1' desreferencia o ponteiro 'p1' para acessar 'valor' e o atualiza
  
  
  
  /* (b) */
  temp = 26.5; //o conteúdo guardado de 'temp' é '26.5'
  p2 = &temp;  //'p2' guarda o endereço de memória de 'temp'
  *p2 = 29.0;  //o conteúdo guardado de 'temp' é atualizado para '29.0', uma vez que está no msm endereço de memória
  printf("%.1f \n", temp); // imprime '29.0' com 1 casa decimal '%.1f'
  
  //'*p2' desreferencia o ponteiro 'p2' para acessar 'temp' e o atualiza
  
  
  
  /* (c) */
  p3 = &nome[0]; // endereço do 1° caractere de 'nome'
  aux = *p3;     // dereferecia 'p3' para acessar o conteúdo do 1° caractere de 'nome'
  printf("%c \n", aux); // imprime 'P'
  
 // |P|o|n|t|e|i|r|o|s|
 // |0|1|2|3|4|5|6|7|8|
  
  
  
  /* (d) */
  p3 = &nome[4];  // endereço do 5° caractere de 'nome'
  aux = *p3;      // dereferecia 'p3' para acessar o conteúdo do 5° caractere de 'nome'
  printf("%c \n", aux); // imprime 'e'
  
  
  
  /* (e) */
  p3 = nome;  // em linguagem C, o nome de um vetor de string é o endereço do 1° caractere de 'nome'
              // 'p3': tipo char*
              // '*p3': dereferecia 'p3' que aponta para o 1° caractere 'P'
  printf("%c \n", *p3);
  
  
  
  /* (f) */
  p3 = p3 + 4;      // o caractere atualizado por último foi nome[0] => &nome[0] + 4 = &nome[4] => 'e'
  printf("%c \n", *p3);
  
  
  
  /* (g) */
  p3--;       // o caractere atualizado por último foi nome[4] => &nome[4] - 1 = &nome[3] => 't'
  printf("%c \n", *p3);
  
  
  
  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;       // o nome de um vetor 'vetor' é um ponteiro para o 1° elemento => vetor[0] = 31;
  idade = *p4;
  printf("%d \n", idade);
  
  
  
  /* (i) */
  p5 = p4 + 1;     // o caractere atualizado por último foi vetor[0] => &vetor[0] + 1 = &vetor[1] => '45'
  idade = *p5;
  printf("%d \n", idade);
  
  
  
  /* (j) */ 
  p4 = p5 + 1;   //novo valor para 'p4' => &vetor[1] + 1 = &vetor[2] => '27'
  idade = *p4;
  printf("%d \n", idade);
  
  
  
  /* (l) */
  p4 = p4 - 2;   //novo valor para 'p4' => &vetor[2] - 2 = &vetor[0] => '31'
  idade = *p4;
  printf("%d \n", idade);
  
  
  
  /* (m) */ 
  p5 = &vetor[2] - 1;  //novo valor para 'p5' => &vetor[2] - 1 = &vetor[1] => '45'
  printf("%d \n", *p5);
  
   
  
  /* (n) */
  p5++;   //novo valor para 'p5' => &vetor[1] + 1 = &vetor[2] => '27'
  printf("%d \n", *p5);
  return(0);
}
