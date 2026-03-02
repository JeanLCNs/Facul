#include <stdio.h>

/**
 * RECURSIVIDADE: Movimento da Torre
 * A função chama a si mesma até que o número de casas seja zero.
 */
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

/**
 * RECURSIVIDADE: Movimento da Rainha
 * Simula o movimento vertical (cima) de forma recursiva.
 */
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

/**
 * RECURSIVIDADE E LOOPS ANINHADOS: Movimento do Bispo
 * O requisito pede o uso de recursão e loops aninhados (Vertical/Horizontal).
 * Aqui, a função 
 */
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        // Loops aninhados simulando o deslocamento de 1 casa na diagonal (1V e 1H)
        for (int v = 0; v < 1; v++) {
            printf("Cima\n");
            for (int h = 0; h < 1; h++) {
                printf("Direita\n");
            }
        }
        moverBispoRecursivo(casas - 1);
    }
}

int main() {
    // Definição das distâncias (conforme requisitos funcionais)
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("--- Movimentação da Torre ---\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("--- Movimentação do Bispo ---\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    printf("--- Movimentação da Rainha ---\n");
    moverRainha(casasRainha);
    printf("\n");

    printf("--- Movimentação do Cavalo (Loops Complexos) ---\n");
    /**
     * LOOPS COMPLEXOS: Movimento em L (2 para cima, 1 para a direita)
     * Utilizando múltiplas variáveis e condições de interrupção (break/continue).
     */
    for (int i = 0, j = 0; i < 3; i++) {
        // Se j atingir o limite do L horizontal, paramos
        if (j > 1) break;

        // Enquanto i for menor que 2, subimos (Movimento Vertical)
        if (i < 2) {
            printf("Cima\n");
            continue; // Pula para a próxima iteração do loop externo
        }

        // Movimento Horizontal após as duas casas para cima
        while (j < 1) {
            printf("Direita\n");
            j++;
        }
    }

    return 0;
}
