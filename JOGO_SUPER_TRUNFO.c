#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1, codigo1[4], cidade1[50];
    long long int populacao1;
    int pontos1;
    float area1, pib1, densidade1, pibpercapita1, superpoder1;

    // Dados para a primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", cidade1); // Para ler até o primeiro Enter
    printf("Populacao: ");
    scanf("%lld", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 * 1e9 / populacao1; // PIB em reais
    superpoder1 = (float)populacao1 + area1 + pib1 * 1e9 + pontos1 + pibpercapita1 + (1 / densidade1);

    // Dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lld\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    // Variáveis para a segunda carta
    char estado2, codigo2[4], cidade2[50];
    long long int populacao2;
    int pontos2;
    float area2, pib2, densidade2, pibpercapita2, superpoder2;

    // Entrada para segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", cidade2);
    printf("Populacao: ");
    scanf("%lld", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 * 1e9 / populacao2; // PIB em reais
    superpoder2 = (float)populacao2 + area2 + pib2 * 1e9 + pontos2 + pibpercapita2 + (1 / densidade2);

    // Exibição da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lld\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparações das cartas
    printf("\nComparacao de Cartas:\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);

    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);

    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);

    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);

    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}