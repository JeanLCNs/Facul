#include <stdio.h>
#include <string.h>

/**
 * DESAFIO SUPER TRUNFO - LÓGICA DE COMPARAÇÃO
 * Objetivo: Cadastrar duas cartas e comparar a Densidade Populacional.
 * Regra Especial: Na densidade, o menor valor vence.
 */

int main() {
    /* =====================
       DECLARAÇÃO DE VARIÁVEIS
       ===================== */
    // Dados da Carta 1
    char estado1, codigo1[5], cidade1[50];
    int populacao1, pontos1;
    float area1, pib1, densidade1, pibPerCapita1;

    // Dados da Carta 2
    char estado2, codigo2[5], cidade2[50];
    int populacao2, pontos2;
    float area2, pib2, densidade2, pibPerCapita2;

    /* =====================
       ENTRADA DE DADOS - CARTA 1
       ===================== */
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);
    getchar(); // Limpa o buffer para usar fgets
    printf("Nome da Cidade: ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Cálculos da Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;

    /* =====================
       ENTRADA DE DADOS - CARTA 2
       ===================== */
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    getchar();
    printf("Nome da Cidade: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos da Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    /* =====================
       EXIBIÇÃO DOS DADOS
       ===================== */
    printf("\n=================================");
    printf("\nRESUMO DAS CARTAS:");
    printf("\nCarta 1: %s | Densidade: %.2f hab/km²", cidade1, densidade1);
    printf("\nCarta 2: %s | Densidade: %.2f hab/km²", cidade2, densidade2);
    printf("\n=================================\n");

    /* =====================
       LOGICA DE COMPARAÇÃO
       Atributo: Densidade Populacional
       Vencedor: Menor Valor
       ===================== */
    printf("\nComparacao de cartas (Atributo: Densidade Populacional):\n\n");

    if (densidade1 < densidade2) {
        printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade1);
        printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade2);
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } 
    else if (densidade2 < densidade1) {
        printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade1);
        printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade2);
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } 
    else {
        printf("As duas cidades possuem a mesma densidade populacional!\n");
        printf("Resultado: Empate!\n");
    }

    return 0;
}
