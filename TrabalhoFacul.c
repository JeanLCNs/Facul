#include <stdio.h>
#include <string.h>

int main() {

    /* =====================
       CARTA 1
       ===================== */
    char estado1;
    char codigo1[5];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pibPerCapita1, superPoder1;

    /* =====================
       CARTA 2
       ===================== */
    char estado2;
    char codigo2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pibPerCapita2, superPoder2;

    /* =====================
       ENTRADA - CARTA 1
       ===================== */
    printf("Cadastro da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);

    getchar();

    printf("Nome da cidade: ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    /* =====================
       CÁLCULOS - CARTA 1
       ===================== */
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;

    superPoder1 =
        (float)populacao1 +
        area1 +
        pib1 +
        pontos1 +
        pibPerCapita1 +
        (1.0f / densidade1);


    /* =====================
       ENTRADA - CARTA 2
       ===================== */
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex: A01): ");
    scanf("%s", codigo2);

    getchar();

    printf("Nome da cidade: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    /* =====================
       CÁLCULOS - CARTA 2
       ===================== */
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;

    superPoder2 =
        (float)populacao2 +
        area2 +
        pib2 +
        pontos2 +
        pibPerCapita2 +
        (1.0f / densidade2);


    /* =====================
       COMPARAÇÕES
       ===================== */
    printf("\nComparacao de Cartas:\n\n");

    printf("Populacao: Carta %d venceu (%d)\n",
           populacao1 > populacao2 ? 1 : 2,
           populacao1 > populacao2);

    printf("Area: Carta %d venceu (%d)\n",
           area1 > area2 ? 1 : 2,
           area1 > area2);

    printf("PIB: Carta %d venceu (%d)\n",
           pib1 > pib2 ? 1 : 2,
           pib1 > pib2);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
           pontos1 > pontos2 ? 1 : 2,
           pontos1 > pontos2);

    /* densidade: MENOR vence */
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           densidade1 < densidade2 ? 1 : 2,
           densidade1 < densidade2);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           pibPerCapita1 > pibPerCapita2 ? 1 : 2,
           pibPerCapita1 > pibPerCapita2);

    printf("Super Poder: Carta %d venceu (%d)\n",
           superPoder1 > superPoder2 ? 1 : 2,
           superPoder1 > superPoder2);

    return 0;
}
