#include <stdio.h>

/**
 * Desafio Batalha Naval: Posicionamento de Navios
 * Tabuleiro: 10x10
 * Navios: Tamanho 3 (Representados pelo valor 3)
 * Água: Representada pelo valor 0
 */

int main() {
    // 1. Representação do Tabuleiro (Matriz 10x10 inicializada com 0)
    int tabuleiro[10][10] = {0};
    int tamanhoNavio = 3;

    // 2. Definição das coordenadas iniciais (Requisito funcional)
    // Navio Horizontal: Linha 2, começa na Coluna 3
    int horizontalLinha = 2, horizontalColunaInicio = 3;
    
    // Navio Vertical: Começa na Linha 5, Coluna 8
    int verticalLinhaInicio = 5, verticalColuna = 8;

    // --- Posicionamento do Navio Horizontal ---
    // Verificação de limites simples: Coluna inicial + tamanho não pode exceder 10
    if (horizontalColunaInicio + tamanhoNavio <= 10) {
        for (int j = 0; j < tamanhoNavio; j++) {
            tabuleiro[horizontalLinha][horizontalColunaInicio + j] = 3;
        }
    }

    // --- Posicionamento do Navio Vertical ---
    // Verificação de limites: Linha inicial + tamanho não pode exceder 10
    // Também validamos se a posição já não está ocupada (valor != 3)
    if (verticalLinhaInicio + tamanhoNavio <= 10) {
        for (int i = 0; i < tamanhoNavio; i++) {
            // Verifica sobreposição antes de inserir
            if (tabuleiro[verticalLinhaInicio + i][verticalColuna] != 3) {
                tabuleiro[verticalLinhaInicio + i][verticalColuna] = 3;
            }
        }
    }

    // 3. Exibição do Tabuleiro (Loops aninhados)
    printf("     BATALHA NAVAL - TABULEIRO\n");
    printf("   0 1 2 3 4 5 6 7 8 9\n"); // Guia de colunas
    
    for (int i = 0; i < 10; i++) {
        printf("%d  ", i); // Guia de linhas
        for (int j = 0; j < 10; j++) {
            // Imprime o valor da célula seguido de um espaço para legibilidade
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Quebra de linha ao fim de cada linha da matriz
    }

    return 0;
}
