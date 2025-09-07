#include <stdio.h>

int main(){

    char estado_carta1;
    char codigo_carta1[4];
    char nome_cidade1[50];
    unsigned long int populacao_carta1;
    float area_carta1;
    float 
    pib_carta1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    char estado_carta2;
    char codigo_carta2[4];
    char nome_cidade2[50];
    unsigned long int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    int vitoria_populacao;
    int vitoria_area;
    int vitoria_pib;
    int vitoria_pontos;
    int vitoria_densidade;
    int vitoria_pib_per_capita;
    int vitoria_super_poder;

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado_carta1);
    
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao_carta1);

    printf("Digite a area (em km2): ");
    scanf("%f", &area_carta1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib_carta1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    printf("--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado_carta2);
    
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao_carta2);

    printf("Digite a area (em km2): ");
    scanf("%f", &area_carta2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib_carta2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n\n");

    densidade_populacional1 = (float)populacao_carta1 / area_carta1;
    pib_per_capita1 = (pib_carta1 * 1000000000) / populacao_carta1;
    super_poder1 = (float)populacao_carta1 + area_carta1 + pib_carta1 + (float)pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);

    densidade_populacional2 = (float)populacao_carta2 / area_carta2;
    pib_per_capita2 = (pib_carta2 * 1000000000) / populacao_carta2;
    super_poder2 = (float)populacao_carta2 + area_carta2 + pib_carta2 + (float)pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    vitoria_populacao = populacao_carta1 > populacao_carta2;
    vitoria_area = area_carta1 > area_carta2;
    vitoria_pib = pib_carta1 > pib_carta2;
    vitoria_pontos = pontos_turisticos1 > pontos_turisticos2;
    vitoria_densidade = densidade_populacional1 < densidade_populacional2;
    vitoria_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    vitoria_super_poder = super_poder1 > super_poder2;
    
    printf("--- Comparacao de Cartas ---\n");

    printf("Populacao: %s venceu (%d)\n", (vitoria_populacao ? "Carta 1" : "Carta 2"), vitoria_populacao);
    printf("Area: %s venceu (%d)\n", (vitoria_area ? "Carta 1" : "Carta 2"), vitoria_area);
    printf("PIB: %s venceu (%d)\n", (vitoria_pib ? "Carta 1" : "Carta 2"), vitoria_pib);
    printf("Pontos Turisticos: %s venceu (%d)\n", (vitoria_pontos ? "Carta 1" : "Carta 2"), vitoria_pontos);
    printf("Densidade Populacional: %s venceu (%d)\n", (vitoria_densidade ? "Carta 1" : "Carta 2"), vitoria_densidade);
    printf("PIB per Capita: %s venceu (%d)\n", (vitoria_pib_per_capita ? "Carta 1" : "Carta 2"), vitoria_pib_per_capita);
    printf("Super Poder: %s venceu (%d)\n", (vitoria_super_poder ? "Carta 1" : "Carta 2"), vitoria_super_poder);
    
    return 0;
}