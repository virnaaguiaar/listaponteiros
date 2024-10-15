#include <stdio.h>

void send(unsigned long estado) { // a função send recebe um núemro de 64 bits positivos
    printf("Estado enviado: %016lx\n", estado); //imprime o estado em hexadecimal, com 16 dígitos, podendo preencher com zeros à esquerda
}

int main() {
   
    unsigned char m[64] = {       // para cada elemento 1 bit é declarado e inicializado; totalizando 64 elementos para os 64 bits
        0, 1, 0, 1, 0, 1, 0, 1,   // cada elemento representa um estado de um LED (0 = apagado, 1 = aceso)
        1, 0, 1, 0, 1, 0, 1, 0,    
        0, 1, 0, 1, 0, 1, 0, 1,  
        1, 0, 1, 0, 1, 0, 1, 0,  
        0, 1, 0, 1, 0, 1, 0, 1, 
        1, 0, 1, 0, 1, 0, 1, 0,  
        1, 0, 1, 0, 1, 0, 1, 0,  
        1, 0, 1, 0, 1, 0, 1, 0   
    };

    unsigned long out = 0; // out está inicialmente vazio e é criado para guardar o estado
    char bit = 1; // variável da posição do bit atual, inicia com 1 pois a leitura de um bnário é de traz para frente [000...1]

  
    for (int i = 0; i < 64; i++) { // laço para percorrer todos os elementos do vetor m
        if (m[i]) { // verifica se a luz na posição i está acesa; se o bit na posiçãi i é 1
            out = out | bit; //se acusar 1, ou seja, acesa(verdadeiro), o valor de out é atualizado e  bit é 1
        }
        bit = bit << 1; //bit é deslocado em 1 unidade para esquerda, movendo-se para a próxima posição do bit
    }

    send(out); //a função send é chamada com o valor final de out, que contém o estado da matriz de LEDs representado como um número de 64 bits.

    return 0;
}
