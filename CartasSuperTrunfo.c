#include <stdio.h>

int main() {
    // Declaração de Variáveis
    char estado1[50], estado2[50];
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepopulacional1;
    float densidadepopulacional2;
    float pibpercapita1; 
    float pibpercapita2; 
    float superpoder1, superpoder2;

    // Cadastro Carta 1
    printf("Cadastro da Carta 1\n");

    printf("Digite o Estado: ");
    scanf("%s", estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Cadastro Carta 2
    printf("\nCadastro da Carta 2\n");

    printf("Digite o Estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    densidadepopulacional1 = (float) populacao1 / area1;
    densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita1 = (float) pib1 / populacao1;
    pibpercapita2 = (float) pib2 / populacao2;
    superpoder1 = (float) populacao1 + pontosturisticos1 + pib1 + area1 + (1 /densidadepopulacional1) + pibpercapita1;
    superpoder2 = (float) populacao2 + pontosturisticos2 + pib2 + area2 + (1 /densidadepopulacional2) + pibpercapita2;


    // Leitura Das Cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f bilhões de reais\n", pibpercapita1);
    printf("Super Poder: %f\n", superpoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f bilhões de reais\n", pibpercapita2);
    printf("Super Poder: %f\n", superpoder2);

    // Comparação das Cartas
    printf("\nComparação entre as cartas:\n");
    printf("A população vencedora é: %d\n", populacao1 > populacao2);
    printf("A área vencedora é: %d\n", area1 > area2);
    printf("O PIB vencedor é: %d\n", pib1 > pib2);
    printf("O ponto turístico vencedor é: %d\n", pontosturisticos1 > pontosturisticos2);
    printf("A densidade vencedora é: %d\n", densidadepopulacional1 < densidadepopulacional2);
    printf("O PIB per capita vencedor é: %d\n", pibpercapita1 > pibpercapita2);
    printf("O Super Poder vencedor é: %d\n", superpoder1 > superpoder2);


return 0;
}