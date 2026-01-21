#include <stdio.h>
#include <string.h>

int main() {

    /* =====================
       DECLARAÇÃO - CARTA 1
       ===================== */
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;

    /* =====================
       DECLARAÇÃO - CARTA 2
       ===================== */
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;

    /* =====================
       ENTRADA - CARTA 1
       ===================== */
    printf("Cadastro da Carta 1:\n");

    printf("Informe o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    getchar(); // limpa buffer

    printf("Informe o nome da cidade: ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Informe a populacao: ");
    scanf("%d", &populacao1);

    printf("Informe a area (km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB: ");
    scanf("%f", &pib1);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    /* CÁLCULOS - CARTA 1 */
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;


    /* =====================
       ENTRADA - CARTA 2
       ===================== */
    printf("\nCadastro da Carta 2:\n");

    printf("Informe o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o codigo da carta (ex: A01): ");
    scanf("%s", codigo2);

    getchar(); // limpa buffer

    printf("Informe o nome da cidade: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Informe a populacao: ");
    scanf("%d", &populacao2);

    printf("Informe a area (km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    /* CÁLCULOS - CARTA 2 */
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;


    /* =====================
       SAÍDA - CARTA 1
       ===================== */
    printf("\n=========================");
    printf("\n        CARTA 1");
    printf("\n=========================\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);


    /* =====================
       SAÍDA - CARTA 2
       ===================== */
    printf("\n=========================");
    printf("\n        CARTA 2");
    printf("\n=========================\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
