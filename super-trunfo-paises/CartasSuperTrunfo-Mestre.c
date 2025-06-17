#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Permite acentos no Windows

    char codigo1[5], cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    float densidade1, pib_per_capita1;

    char codigo2[5], cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    float densidade2, pib_per_capita2;

    // Entrada da primeira cidade
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da primeira cidade: ");
    scanf(" %[^\n]s", cidade1);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n");

    // Entrada da segunda cidade
    printf("Digite o código da segunda carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da segunda cidade: ");
    scanf(" %[^\n]s", cidade2);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    printf("\n==== Cartas Cadastradas ====\n");

    // Carta 1
    printf("\n📌 Carta 1 - %s (%s)\n", cidade1, codigo1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.6f bilhões/hab\n", pib_per_capita1);

    // Carta 2
    printf("\n📌 Carta 2 - %s (%s)\n", cidade2, codigo2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.6f bilhões/hab\n", pib_per_capita2);

    printf("\n==== Comparações ====\n");

    printf("🏙️ População: %s tem mais habitantes.\n",
           (populacao1 > populacao2) ? cidade1 : cidade2);

    printf("📏 Área: %s é maior em território.\n",
           (area1 > area2) ? cidade1 : cidade2);

    printf("💰 PIB: %s tem economia mais forte.\n",
           (pib1 > pib2) ? cidade1 : cidade2);

    printf("📸 Pontos Turísticos: %s tem mais atrações.\n",
           (pontos_turisticos1 > pontos_turisticos2) ? cidade1 : cidade2);

    printf("👥 Densidade Populacional: %s é mais densamente povoada.\n",
           (densidade1 > densidade2) ? cidade1 : cidade2);

    printf("💵 PIB per Capita: %s tem renda per capita maior.\n",
           (pib_per_capita1 > pib_per_capita2) ? cidade1 : cidade2);

    // Super poder da Carta 1
    float maior_atributo = populacao1;
    char super_poder[30] = "População";

    if (area1 > maior_atributo) {
        maior_atributo = area1;
        sprintf(super_poder, "Área");
    }
    if (pib1 > maior_atributo) {
        maior_atributo = pib1;
        sprintf(super_poder, "PIB");
    }
    if (pontos_turisticos1 > maior_atributo) {
        maior_atributo = pontos_turisticos1;
        sprintf(super_poder, "Pontos Turísticos");
    }
    if (densidade1 > maior_atributo) {
        maior_atributo = densidade1;
        sprintf(super_poder, "Densidade Populacional");
    }
    if (pib_per_capita1 > maior_atributo) {
        maior_atributo = pib_per_capita1;
        sprintf(super_poder, "PIB per Capita");
    }

    printf("\n💥 Super Poder da Carta 1: %s\n", super_poder);

    return 0;
}