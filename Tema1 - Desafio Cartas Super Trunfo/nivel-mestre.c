#include <stdio.h>

float densidadePopulacional(int populacao, float area) {
    float densidade = populacao/area;

    return densidade;
}

float pibPerCapta(float pib, int populacao) {
    float pibPerCapta = pib/populacao;

    return pibPerCapta;
}

float superPoder(int populacao, int pontosTuristicos, float area, float pib) {
    float pontos = populacao + pontosTuristicos + area + pib + pibPerCapta(pib, populacao) + (1/densidadePopulacional(populacao, area));

    return pontos;
}


int resultado(float entrada1, float entrada2){
    int resultado = entrada1 > entrada2;

    if (resultado == 1){
        printf("Carta 1 venceu ");
    } else {
        printf ("Carta 2 venceu ");
    }

    return resultado;
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
    printf("\n");
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
    printf("SUPER PODER: %.2f \n", superPoder(populacao1, pontosTuristicos1, area1, pib1));

    printf("\nCARTA 2:\n");
    printf("Estado: %c \nCódigo: %s \nCidade: %s \n", estado2, codigoCarta2, cidade2);
    printf("População: %d \nÁrea: %.2f \nPIB: %.2f \nNúmero de Pontos Turísticos: %d \n", populacao2, area2, pib2, pontosTuristicos2);
    printf("Densidade Populacional: %.2f \nPIB Per Capta: %.2f \n", densidadePopulacional(populacao2, area2), pibPerCapta(pib2, populacao2));
    printf("SUPER PODER: %.2f \n", superPoder(populacao2, pontosTuristicos2, area2, pib2));
    printf("\n");

    //apresentação do vencedor
    printf("\n ------VENCEDOR------ \n");
    printf("\n");
    
    printf("População: ");
    printf("(%d) \n", resultado(populacao1, populacao2));
    printf("Área: ");
    printf("(%d) \n", resultado(area1, area2));
    printf("PIB: ");
    printf("(%d) \n", resultado(pib1, pib2));
    printf("Pontos Turísticos: ");
    printf("(%d) \n", resultado(pontosTuristicos1, pontosTuristicos2));

    printf("Densidade Populacional: ");
    printf("(%d) \n", resultado(1.0f / densidadePopulacional(populacao1, area1), 1.0f / densidadePopulacional(populacao2, area2)));
    printf("PIB Per Capta: ");
    printf("(%d) \n", resultado(pibPerCapta(pib1, populacao1), pibPerCapta(pib2, populacao2)));

    printf("SUPER PODER: ");
    printf("(%d) \n", resultado(superPoder(populacao1, pontosTuristicos1, area1, pib1), superPoder(populacao2, pontosTuristicos2, area2, pib2)));
    printf("\n");


    return 0;
}