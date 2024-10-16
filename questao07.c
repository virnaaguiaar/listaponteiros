int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco\n");
  for(i = 0 ; i <= 4 ; i++){ //laço de 0 a 4
    printf("i = %d",i); //imprime o índice atual
    printf(" vet[%d] = %.1f",i, vet[i]);  //imprime o valor do vetor na posição i
    printf(" *(f + %d) = %.1f",i, *(f+i)); //imprime o valor na posição i usando o ponteiro
    
    printf(" &vet[%d] = %X",i, &vet[i]); //imprime o endereço da posição i do vetor
    printf(" (f + %d) = %X",i, f+i); //imprime o endereço no ponteiro f na posição i
    printf("\n"); //nova linha
  }
  return 0;
}


//SAÍDA
// contador/valor/valor/endereco/endereco
// i = 0 vet[0] = 1.1 *(f + 0) = 1.1 &vet[0] = 0x7ffeed0c0a20 (f + 0) = 0x7ffeed0c0a20
// i = 1 vet[1] = 2.2 *(f + 1) = 2.2 &vet[1] = 0x7ffeed0c0a24 (f + 1) = 0x7ffeed0c0a24
// i = 2 vet[2] = 3.3 *(f + 2) = 3.3 &vet[2] = 0x7ffeed0c0a28 (f + 2) = 0x7ffeed0c0a28
// i = 3 vet[3] = 4.4 *(f + 3) = 4.4 &vet[3] = 0x7ffeed0c0a2c (f + 3) = 0x7ffeed0c0a2c
// i = 4 vet[4] = 5.5 *(f + 4) = 5.5 &vet[4] = 0x7ffeed0c0a30 (f + 4) = 0x7ffeed0c0a30

//como pode-se notar os endereços de memória da posição i do vetor e do ponteiro f na posição i são iguais
