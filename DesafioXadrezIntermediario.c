#include <stdio.h>

// Definição das constantes de movimento
#define MOV_CAVALO_BAIXO 2
#define MOV_CAVALO_ESQUERDA 1

int main() {
    printf("Movimento do Cavalo:\n");

    // Primeira parte do movimento: descendo
    for (int i = 0; i < MOV_CAVALO_BAIXO; i++) {
        printf("Baixo\n");
    }

    // Segunda parte do movimento: para a esquerda
    int j = 0;
    while (j < MOV_CAVALO_ESQUERDA) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
