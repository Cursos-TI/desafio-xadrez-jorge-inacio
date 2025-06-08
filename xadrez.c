#include <stdio.h>

// Definição das constantes de movimento.
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    // Movimentação do Bispo (diagonal superior direita)
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    
    printf("\n");

    // Movimentação da Torre (para a direita)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimentação da Rainha (para a esquerda)
    printf("Movimento da Rainha:\n");
    for (int i = 0; i < MOV_RAINHA; i++) {
        printf("Esquerda\n");
    }

    return 0;
}