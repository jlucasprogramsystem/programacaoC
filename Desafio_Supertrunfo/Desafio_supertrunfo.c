#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    int escolha;

    // Cadastro carta 1

    printf("*** Jogo Super Trunfo ***\n");
    printf("\n Carta 01 \n");

    printf("Digite a primeira letra do Estado 1: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (de 01 a 04): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da Cidade: ");
    scanf(" %49s", nome1);

    printf("Digite a População da Cidade 1: ");
    scanf("%d", &populacao1);

    printf("Digite a Área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos Turísticos da Cidade 1: ");
    scanf("%d", &pontosturisticos1);

    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 * 1000000000 / populacao1; // PIB em reais

    printf("\nResumo da Carta 1:\n");
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    // Cadastro carta 2
    printf("\n--- Carta 02 ---\n");

    printf("Digite a primeira letra do Estado 2: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (de 01 a 04): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da Cidade: ");
    scanf(" %49s", nome2);

    printf("Digite a População da Cidade 2: ");
    scanf("%d", &populacao2);

    printf("Digite a Área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos Turísticos da Cidade 2: ");
    scanf("%d", &pontosturisticos2);

    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 * 1000000000 / populacao2;

    printf("\nResumo da Carta 2:\n");
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    // Menu de comparação (usando if / else if)
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB Per Capita\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        if (populacao1 > populacao2)
            printf("Cidade %s venceu pela maior população!\n", nome1);
        else if (populacao2 > populacao1)
            printf("Cidade %s venceu pela maior população!\n", nome2);
        else
            printf("Empate na população!\n");
    } 
    else if (escolha == 2) {
        if (area1 > area2)
            printf("Cidade %s venceu pela maior área!\n", nome1);
        else if (area2 > area1)
            printf("Cidade %s venceu pela maior área!\n", nome2);
        else
            printf("Empate na área!\n");
    } 
    else if (escolha == 3) {
        if (pib1 > pib2)
            printf("Cidade %s venceu pelo maior PIB!\n", nome1);
        else if (pib2 > pib1)
            printf("Cidade %s venceu pelo maior PIB!\n", nome2);
        else
            printf("Empate no PIB!\n");
    } 
    else if (escolha == 4) {
        if (pontosturisticos1 > pontosturisticos2)
            printf("Cidade %s venceu pelo maior número de pontos turísticos!\n", nome1);
        else if (pontosturisticos2 > pontosturisticos1)
            printf("Cidade %s venceu pelo maior número de pontos turísticos!\n", nome2);
        else
            printf("Empate nos pontos turísticos!\n");
    } 
    else if (escolha == 5) {
        if (densidadepopulacional1 > densidadepopulacional2)
            printf("Cidade %s venceu pela maior densidade populacional!\n", nome1);
        else if (densidadepopulacional2 > densidadepopulacional1)
            printf("Cidade %s venceu pela maior densidade populacional!\n", nome2);
        else
            printf("Empate na densidade populacional!\n");
    } 
    else if (escolha == 6) {
        if (pibpercapita1 > pibpercapita2)
            printf("Cidade %s venceu pelo maior PIB per capita!\n", nome1);
        else if (pibpercapita2 > pibpercapita1)
            printf("Cidade %s venceu pelo maior PIB per capita!\n", nome2);
        else
            printf("Empate no PIB per capita!\n");
    } 
    else {
        printf("Opção inválida!\n");
    }

    return 0;
}