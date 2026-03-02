#include <stdio.h>

/**
 * BATALHA NAVAL - NÍVEL MESTRE
 * Representação: 0 (Água), 3 (Navio), 1 (Habilidade/Fogo)
 */

#define TAM_TAB 10
#define TAM_HAB 5

void exibirTabuleiro(int tabuleiro[TAM_TAB][TAM_TAB]) {
    printf("\n      TABULEIRO ESTRATÉGICO\n");
    printf("    0 1 2 3 4 5 6 7 8 9\n");
    for (int i = 0; i < TAM_TAB; i++) {
        printf("%d | ", i);
        for (int j = 0; j < TAM_TAB; j++) {
            if (tabuleiro[i][j] == 3) printf("N "); // Navio
            else if (tabuleiro[i][j] == 1) printf("X "); // Habilidade (Valor 1 na matriz de efeito)
            else printf(". "); // Água
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAM_TAB][TAM_TAB] = {0};
    
    // Posicionando alguns navios (conforme nível anterior)
    for(int i=0; i<3; i++) tabuleiro[1][1+i] = 3; // Horizontal
    for(int i=0; i<3; i++) tabuleiro[4+i][1] = 3; // Vertical

    // --- DEFINIÇÃO DAS HABILIDADES ---
    int habilidadeCone[TAM_HAB][TAM_HAB] = {0};
    int habilidadeCruz[TAM_HAB][TAM_HAB] = {0};
    int habilidadeOctaedro[TAM_HAB][TAM_HAB] = {0};

    // 1. CONSTRUINDO CONE (Triângulo apontando para baixo)
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            // Lógica: Em cada linha i, preenchemos da coluna (centro-i) até (centro+i)
            if (i == 0 && j == 2) habilidadeCone[i][j] = 1;
            else if (i == 1 && j >= 1 && j <= 3) habilidadeCone[i][j] = 1;
            else if (i == 2) habilidadeCone[i][j] = 1; 
        }
    }

    // 2. CONSTRUINDO CRUZ
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (i == 2 || j == 2) habilidadeCruz[i][j] = 1;
        }
    }

    // 3. CONSTRUINDO OCTAEDRO (Losango)
    int centro = TAM_HAB / 2;
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB
