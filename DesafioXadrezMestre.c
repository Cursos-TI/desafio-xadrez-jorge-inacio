#include <stdio.h>

// Funções recursivas para movimentação das peças.
void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(passos - 1);
}

void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

int main() {
    // Movimentação do Bispo (5 casas na diagonal superior direita)
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    // Movimentação da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Movimentação do Cavalo usando loops com múltiplas variáveis e condições
    printf("Movimento do Cavalo:\n");
    for (int i = 0, j = 0; i < 2 || j < 1; i++, j++) {
        if (i < 2) {
            printf("Cima\n");
            if (i == 1) continue;  // Exemplo de uso de continue
        }
        if (j < 1) {
            printf("Direita\n");
            break;  // Exemplo de uso de break
        }
    }

    return 0;
}