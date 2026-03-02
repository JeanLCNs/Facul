#include <stdio.h>

/**
 * Desafio Batalha Naval: Navios Diagonais
 * Tabuleiro: 10x10
 * Navios: Tamanho 3 (Valor 3)
 * Água: Valor 0
 */

int main() {
    int tabuleiro[10][10] = {0};
    int tam = 3;

    // 1. NAVIO HORIZONTAL (Linha 1, Coluna 1 a 3)
    for (int j = 0; j < tam; j++) {
        tabuleiro[1][1 + j] = 3;
    }

    // 2. NAVIO VERTICAL (Linha 4 a 6, Coluna 1)
    for (int i = 0; i < tam; i++) {
        tabuleiro[4 + i][1] = 3;
    }

    // 3. NAVIO DIAGONAL PRINCIPAL (Descendo: Linha e Coluna aumentam)
    // Coordenada inicial: (2, 5) -> (3, 6) -> (4, 7)
    int l_diag1 = 2, c_diag1 = 5;
    for (int i = 0; i < tam; i++) {
        // Validação de limites para diagonal
        if (l_diag1 + i < 10 && c_diag1 + i < 10) {
            tabuleiro[l_diag1 + i][c_diag1 + i] = 3;
        }
    }

    // 4. NAVIO DIAGONAL SECUNDÁRIA (Subindo/Inversa: Linha aumenta, Coluna diminui)
    // Coordenada inicial: (7, 5) -> (8, 4) -> (9, 3)
    int l_diag2 = 7, c_diag2 = 5;
    for (int i = 0; i < tam; i++) {
        // Validação: Linha cresce, Coluna decresce
        if (l_diag2 + i < 10 && c_diag2 - i >= 0) {
            // Verifica sobreposição antes de marcar
            if (tabuleiro[l_diag2 + i][c_diag2 - i] == 0) {
                tabuleiro[l_diag2 + i][c_diag2 - i] = 3;
            }
        }
    }

    // --- EXIBIÇÃO DO TABULEIRO ---
    printf("      BATALHA NAVAL - INTERMEDIÁRIO\n");
    printf("    0 1 2 3 4 5 6 7 8 9\n");
    printf("    -------------------\n");

    for (int i = 0; i < 10; i++) {
        printf("%d | ", i); // Índice lateral
        for (int j = 0; j < 10; j++) {
            // Condicional para melhorar a estética: 0 vira '.' e 3 vira 'N'
            if (tabuleiro[i][j] == 3) {
                printf("3 "); 
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
