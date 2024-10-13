#include <stdio.h>
int main(){
  int a, b;
  int x, y, z;
  scanf("%d %d", &a, &b); // 10; 1
  x = a; y = b; z = a + b; // x = a = 10 = 1010; y = b = 1 = 0001; z = 11 = 1011
  while (a) { // | ou; & e; ^ xou
  x = x | b; // 1010 + 0001 = 1011
  y = y ^ a; // 1010 + 0001 = 1011
  z = z & (a+b); // 1011 + 1011 = 1011
  a = a >> 1; // direita 1010 -> 0101 = 5
  b = b << 1; // esquerda 0001 -> 0010 = 2
  }
  printf ("%d %d %d\n", x, y, z);
  return 0;
}
Após a chamada desse programa, caso o usuário entre com os valores 10 e 1, nessa ordem, qual
será, exatamente, o valor da saída do programa? Explique, PASSO-A-PASSO, os cálculos
realizados pelo programa para chegar a esse resultado
