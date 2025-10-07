#include<stdio.h>

    int main(){

        char estado1, estado2;
        char codigo1[10], codigo2[10];
        char nome1[50], nome2[50];
        int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int pontosturisticos1, pontosturisticos2;
        float densidadepopulacional1, densidadepopulacional2;
        float pibpercapita1, pibpercapita2;

        printf("\n Carta 01: \n");
        
        printf("Digite a primeira letra do Estado 1:\n");
        scanf("%c",&estado1);
        printf("Estado: %c\n", estado1);

        printf("Digite o código da carta: de 01 a 04 \n");
        scanf(" %s",codigo1);
        printf("Código da carta: %c%s\n", estado1, codigo1);

        printf("Digite o nome da Cidade: \n");
        scanf("%s", nome1);
        printf("Nome da Cidade: %s\n", nome1);

        printf("Digite a População da Cidade 1: \n");
        scanf("%d", &populacao1);
        printf("População: %d\n", populacao1);

        printf("Digite a Área da cidade: \n");
        scanf(" %f", &area1);
        printf("Área: %f km²\n", area1);

        printf("Digite o PIB da cidade1: \n");
        scanf("%f",&pib1);
        printf("PIB: %f bilhões de reais\n", pib1);

        printf("Digite o número de pontos Turísticos da Cidade1: \n");
        scanf("%d", &pontosturisticos1);
        printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);

        densidadepopulacional1= populacao1 / area1;        
        printf("Densidade Populacional: %f hab/km² \n", densidadepopulacional1);        
        
        pibpercapita1 = pib1 / populacao1;            
        printf("PIB per Capita: %f reais\n", pibpercapita1);        

        printf("\n Carta 2: \n");    

        printf("Digite a primeira letra do Estado2: \n");
        scanf(" %c", &estado2);
        printf("Estado 2: %c\n", estado2);

        printf("Digite o código da carta: de 01 a 04\n");
        scanf(" %s", codigo2);
        printf("Código: %c%s\n",estado2, codigo2);
        
        printf("Digite o nome da Cidade2: \n");
        scanf("%s", nome2);
        printf("Nome da cidade: %s\n", nome2);

        printf("Digite a população da Cidade2: \n");
        scanf("%d", &populacao2);
        printf("População: %d\n",populacao2);

        printf("Digite a Área da Cidade2: \n");
        scanf("%f", &area2);
        printf("Área: %f km²\n",area2);

        printf("Digite o PIB da Cidade2: \n");
        scanf("%f", &pib2);
        printf("PIB: %f bilhões de reais\n", pib2);

        printf("Digite o Número de Pontos Turísticos: \n");
        scanf("%d", &pontosturisticos2);
        printf("Número de Pontos Turísticos: %d\n",pontosturisticos2);

        densidadepopulacional2= populacao2 / area2;        
        printf("Densidade Populacional: %f hab/km² \n", densidadepopulacional2);        
        
        pibpercapita1 = pib2 / populacao2;            
        printf("PIB per Capita: %f reais\n", pibpercapita2);        

    
     return 0;

}