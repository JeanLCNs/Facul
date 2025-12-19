#include <stdio.h>

int main() {

    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // ============================
    // CARTA 1
    // ============================
    printf("Cadastro da Carta 1:\n");

    printf("\nInforme o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o codigo da carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", cidade1); // Ler todos os caracteres até encontrar um ENTER(\n)

    printf("Informe a populacao: ");
    scanf(" %d", &populacao1);

    printf("Informe a area (em km²): ");
    scanf(" %f", &area1);

    printf("Informe o PIB: ");
    scanf(" %f", &pib1);

    printf("Informe o numero de pontos turisticos: ");
    scanf(" %d", &pontos1);


    // ============================
    // CARTA 2
    // ============================
    printf("\nCadastro da Carta 2:\n");

    printf("\nInforme o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o codigo da carta (ex: A01): ");
    scanf(" %s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", cidade2); // Ler todos os caracteres até encontrar um ENTER(\n)

    printf("Informe a populacao: ");
    scanf(" %d", &populacao2);

    printf("Informe a area (em km²): ");
    scanf(" %f", &area2);

    printf("Informe o PIB: ");
    scanf(" %f", &pib2);

    printf("Informe o numero de pontos turisticos: ");
    scanf(" %d", &pontos2);


    // ============================
    // EXIBIÇÃO
    // ============================

    printf("\n\n=========================\n");
    printf("         CARTA 1\n");
    printf("=========================\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);


    printf("\n=========================\n");
    printf("         CARTA 2\n");
    printf("=========================\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);

    return 0;
}
