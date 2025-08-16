#include <stdio.h>

int main() {
    // Variáveis da carta 01
    char estado1;
    char codigo1[5];
    char nomecidade1[100];
    float area1;
    float densidade1;
    float pib1;
    int pontosturisticos1;
    float pibpercapita1;
    float inversodadensidade1;
    float superpoder1;
    unsigned long int populacao1;

    // Variáveis da carta 02
    char estado2;
    char codigo2[5];
    char nomecidade2[100];
    float area2;
    float densidade2;
    float pib2;
    int pontosturisticos2;
    float pibpercapita2;
    float inversodadensidade2;
    float superpoder2;
    unsigned long int populacao2;

    // Entrada de dados carta 01
    printf("=== CADASTRO DA CARTA 01 ===\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta 01 (A01): ");
    scanf("%s", codigo1);
    getchar();
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomecidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    // Calculos carta 01
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / (float)populacao1;
    inversodadensidade1 = 1 / densidade1;
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + pibpercapita1 + inversodadensidade1;

    printf("\n");

    // Entrada de dados carta 02
    printf("=== CADASTRO DA CARTA 02 ===\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta 02 (A02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomecidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    // Calculos carta 02
    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / (float)populacao2;
    inversodadensidade2 = 1 / densidade2;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + pibpercapita2 + inversodadensidade2;

    printf("\n");

    // Exibição da carta 01
    printf("=== CARTA 01 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);
    printf("Super poder: %.2f\n", superpoder1);

    printf("\n");

    // Exibição da carta 02
    printf("=== CARTA 02 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    printf("Super poder: %.2f\n", superpoder2);

    printf("\n");

    // Comparação das cartas
    printf("Comparacao das cartas:\n");
    if (superpoder1 > superpoder2) {
        printf("A carta vencedora e: CARTA 01\n");
    } else if (superpoder2 > superpoder1) {
        printf("A carta vencedora e: CARTA 02\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}
