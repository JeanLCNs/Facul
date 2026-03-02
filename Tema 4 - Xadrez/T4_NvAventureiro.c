#include <stdio.h>

int main() {
    // --- MOVIMENTOS ANTERIORES (Torre, Bispo, Rainha) ---
    
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) printf("Direita\n");
    printf("\n");

    printf("Movimento do Bispo:\n");
    int b = 0;
    while (b < 5) {
        printf("Cima Direita\n");
        b++;
    }
    printf("\n");

    printf("Movimento da Rainha:\n");
    int r = 1;
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= 8);
    printf("\n");

    // --- NOVO: MOVIMENTAÇÃO DO CAVALO ---
    // Objetivo: 2 casas para Baixo e 1 para a Esquerda usando loops aninhados.
    
    printf("Movimento do Cavalo:\n");

    /* Lógica: O loop externo (for) controla a parte vertical (2 casas para baixo).
       O loop interno (while) controla a parte horizontal (1 casa para a esquerda).
       Como o Cavalo faz o "L" completo, o loop interno só precisa rodar 
       após a conclusão do deslocamento vertical ou de forma coordenada.
    */

    for (int baixo = 1; baixo <= 1; baixo++) { // Loop pai (executa uma vez o bloco)
        
        int vertical = 0;
        while (vertical < 2) { // Loop filho 1: Move duas para baixo
            printf("Baixo\n");
            vertical++;
        }
        
        int horizontal = 0;
        while (horizontal < 1) { // Loop filho 2: Move uma para a esquerda
            printf("Esquerda\n");
            horizontal++;
        }
    }

    return 0;
}
