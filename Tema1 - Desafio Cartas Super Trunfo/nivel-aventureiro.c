#include <stdio.h>

float densidadePopulacional(int populacao, float area) {
    float densidade = populacao/area;

    return densidade;
}

float pibPerCapta(float pib, int populacao) {
    float pibPerCapta = pib/populacao;

    return pibPerCapta;
}

int main() {
    char estado1, codigoCarta1[4], cidade1[30];
    char estado2, codigoCarta2[4], cidade2[30];
    int populacao1, pontosTuristicos1;
    int populacao2, pontosTuristicos2;
    float area1, pib1;
    float area2, pib2;


    printf("-------------SUPER TRUNFO----------------\n");

    //criação da primeira carta
    printf("Crie sua primeira carta: \n");


    printf("Crie um Estado (1 Letra, de A a H): ");
    scanf("%c", &estado1);

    printf("Crie o Código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): ");
    scanf("%s", codigoCarta1);

    printf("Dê um nome à Cidade: ");
    scanf("%s", cidade1);

    printf("Qual a População: ");
    scanf("%d", &populacao1);

    printf("Qual a Área: ");
    scanf("%f", &area1);

    printf("Qual o PIB: ");
    scanf(" %f", &pib1);

    printf("Número de Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);


    //criação da segunda carta
    printf("Crie sua segunda carta:\n");


    printf("Crie um Estado (1 Letra, de A a H): ");
    scanf(" %c", &estado2);

    printf("Crie o Código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): ");
    scanf("%s", codigoCarta2);

    printf("Dê um nome à Cidade: ");
    scanf("%s", cidade2);

    printf("Qual a População: ");
    scanf("%d", &populacao2);

    printf("Qual a Área: ");
    scanf("%f", &area2);

    printf("Qual o PIB: ");
    scanf(" %f", &pib2);

    printf("Número de Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //Apresentação das cartas
    printf("\nCARTA 1:\n");
    printf("Estado: %c \nCódigo: %s \nCidade: %s \n", estado1, codigoCarta1, cidade1);
    printf("População: %d \nÁrea: %.2f \nPIB: %.2f \nNúmero de Pontos Turísticos: %d \n", populacao1, area1, pib1, pontosTuristicos1);
    printf("Densidade Populacional: %.2f \nPIB Per Capta: %.2f \n", densidadePopulacional(populacao1, area1), pibPerCapta(pib1, populacao1));

    printf("\nCARTA 2:\n");
    printf("Estado: %c \nCódigo: %s \nCidade: %s \n", estado2, codigoCarta2, cidade2);
    printf("População: %d \nÁrea: %.2f \nPIB: %.2f \nNúmero de Pontos Turísticos: %d \n", populacao2, area2, pib2, pontosTuristicos2);
    printf("Densidade Populacional: %.2f \nPIB Per Capta: %.2f \n", densidadePopulacional(populacao2, area2), pibPerCapta(pib2, populacao2));
    printf("\n");


    return 0;
}