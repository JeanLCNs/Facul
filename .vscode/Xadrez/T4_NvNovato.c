#include <stdio.h>

int main() {
    // Definição das constantes de movimento
    const int MOV_TORRE = 5;
    const int MOV_BISPO = 5;
    const int MOV_RAINHA = 8;

    // --- MOVIMENTAÇÃO DA TORRE ---
    // Utilizando a estrutura FOR: Ideal quando sabemos o número exato de iterações.
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= MOV_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n"); // Quebra de linha para organizar a saída

    // --- MOVIMENTAÇÃO DO BISPO ---
    // Utilizando a estrutura WHILE: Executa enquanto a condição for verdadeira.
    printf("Movimento do Bispo:\n");
    int b = 0;
    while (b < MOV_BISPO) {
        printf("Cima Direita\n");
        b++;
    }
    printf("\n");

    // --- MOVIMENTAÇÃO DA RAINHA ---
    // Utilizando a estrutura DO-WHILE: Garante que o bloco seja executado pelo menos uma vez.
    printf("Movimento da Rainha:\n");
    int r = 1;
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= MOV_RAINHA);
    printf("\n");

    return 0;
}
