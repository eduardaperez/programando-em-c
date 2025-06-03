#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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

    if (entrada1 > entrada2){
        printf("\nCARTA 1 VENCEU! \n");
        return 1;
    } else if(entrada1 < entrada2) {
        printf ("\nCARTA 2 VENCEU! \n");
        return 2;
    } else{
        printf("\nEMPATE!\n");
        return 0;
    }

}

void resultadoFinal(int resultado1, int resultado2){

    if (resultado1 == 1 && resultado2 == 1){
        printf("\n*** Parebéns!!! Você venceu!!!! ***\n");
    } else if (resultado1 == 0 && resultado2 == 0){
        printf("\n*** Que pena... Você perdeu! :c ***\n");
    } else {
        printf("\n*** Empatou! ***\n");
    }
    
    
    
}

int main() {
    char estado1, codigoCarta1[4], cidade1[30];
    char estado2[2], codigoCarta2[5], cidade2[30];
    int populacao1, pontosTuristicos1;
    int populacao2, pontosTuristicos2;
    float area1, pib1;
    float area2, pib2;
    int opcao1, opcao2;
    srand(time(0));


    printf("-------------SUPER TRUNFO----------------\n");

    //criação da carta do jogador
    printf("Crie sua carta: \n");

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

    int criarEstado = rand() % 8;
    switch (criarEstado) {
    case 0:
        strcpy(estado2, "A");
        break;
    case 1:
        strcpy(estado2, "B");
        break;
    case 2:
        strcpy(estado2, "C");
        break;
    case 3:
        strcpy(estado2, "D");
        break;
    case 4:
        strcpy(estado2, "E");
        break;
    case 5:
        strcpy(estado2, "F");
        break;
    case 6:
        strcpy(estado2, "G");
        break;
    case 7:
        strcpy(estado2, "H");
        break;
    }

    sprintf(codigoCarta2, "%s%02d", estado2, rand() % 4 + 1); // Cria o código da carta
    sprintf(cidade2, "Cidade de %s", codigoCarta2);  // Cria o nome da cidade
    populacao2 = rand() % 37000000;
    area2 = rand() % 82000;
    pib2 = rand() % 1406000000000;
    pontosTuristicos2 = rand() % 100;

    //calculando os outros atributos
    float densidadePopulacional1 = densidadePopulacional(populacao1, area1), densidadePopulacional2 = densidadePopulacional(populacao2, area2), pibPerCapta1 = pibPerCapta(pib1, populacao1), pibPerCapta2 = pibPerCapta(pib2, populacao2), superPoder1 = superPoder(populacao1, pontosTuristicos1, area1, pib1), superPoder2 = superPoder(populacao2, pontosTuristicos2, area2, pib2);
    
    //Escolha do primeiro atributo para competir
    printf("\n*** Escolha o primeiro atributo com qual gostaria de competir:***\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - Sair\n");
    printf("Escolha o número da sua opção: ");
    scanf("%d", &opcao1);

    //Escolha do segundo atributo para competir
    printf("\n*** Escolha o segundo atributo com qual gostaria de competir:***\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - Sair\n");
    printf("Escolha o número da sua opção: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("\nAs opções devem ser diferentes!!!\n");
    } else {
        int resultado1, resultado2;
        //Apresentação das cartas
        printf("\n ------ CARTAS DADAS ------\n");
        
        printf("\n* CARTA 1: *\n");
        printf("Estado: %c \nCódigo: %s \nCidade: %s \n", estado1, codigoCarta1, cidade1);
        printf("População: %d \nÁrea: %.2f \nPIB: %.2f \nNúmero de Pontos Turísticos: %d \n", populacao1, area1, pib1, pontosTuristicos1);
        printf("Densidade Populacional: %.2f \nPIB Per Capta: %.2f \n", densidadePopulacional1, pibPerCapta1);
        printf("SUPER PODER: %.2f \n", superPoder1);
        
        printf("\n* CARTA 2: *\n");
        printf("Estado: %s \nCódigo: %s \nCidade: %s \n", estado2, codigoCarta2, cidade2);
        printf("População: %d \nÁrea: %.2f \nPIB: %.2f \nNúmero de Pontos Turísticos: %d \n", populacao2, area2, pib2, pontosTuristicos2);
        printf("Densidade Populacional: %.2f \nPIB Per Capta: %.2f \n", densidadePopulacional2, pibPerCapta2);
        printf("SUPER PODER: %.2f \n", superPoder2);
        printf("\n");
        
        //apresentação do vencedor
        printf("\n ------ VENCEDOR ------ \n");
        
        printf("\nCarta 1 - Cidade: %s(%s)", cidade1, codigoCarta1);
        printf("\nCarta 2 - Cidade: %s(%s)\n", cidade2, codigoCarta2);
        
        switch (opcao1)
        {
            case 1:
            printf("\nPopulação: \n");
            printf("Carta 1 = %d x ", populacao1);
            printf("Carta 2 = %d\n", populacao2);
            resultado(populacao1, populacao2);
            resultado1 = populacao1 > populacao2 ? 1 : 0;

            break;
    
            case 2:
            printf("\nÁrea: \n");
            printf("Carta 1 - %.2f x ", area1);
            printf("Carta 2 - %.2f\n", area2);
            resultado(area1, area2);
            resultado1 = area1 > area2 ? 1 : 0;

            break;
    
            case 3:
            printf("\nPIB: \n");
            printf("Carta 1 - %.2f x ", pib1);
            printf("Carta 2 - %.2f\n", pib2);
            resultado(pib1, pib2);
            resultado1 = pib1 > pib2 ? 1 : 0;

            break;
    
            case 4:
            printf("\nPontos Turísticos: \n");
            printf("Carta 1 - %d x ", pontosTuristicos1);
            printf("Carta 2 - %d\n", pontosTuristicos2);
            resultado(pontosTuristicos1, pontosTuristicos2);
            resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;

            break;
    
            case 5:
            printf("\nDensidade Populacional: \n");
            printf("Carta 1 - %.2f x ", densidadePopulacional1);
            printf("Carta 2 - %.2f\n", densidadePopulacional2);
            resultado(1.0f / densidadePopulacional1, 1.0f / densidadePopulacional2);
            resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;

            break;
    
            case 6:
    
            break;
            
            default:
            printf("Opção invalida");
            break;
        }

        switch (opcao2)
        {
            case 1:
            printf("\nPopulação: \n");
            printf("Carta 1 = %d x ", populacao1);
            printf("Carta 2 = %d\n", populacao2);
            resultado(populacao1, populacao2);
            resultado2= populacao1 > populacao2 ? 1 : 0;

            break;
    
            case 2:
            printf("\nÁrea: \n");
            printf("Carta 1 - %.2f x ", area1);
            printf("Carta 2 - %.2f\n", area2);
            resultado(area1, area2);
            resultado2= area1 > area2 ? 1 : 0;

            break;
    
            case 3:
            printf("\nPIB: \n");
            printf("Carta 1 - %.2f x ", pib1);
            printf("Carta 2 - %.2f\n", pib2);
            resultado(pib1, pib2);
            resultado2= pib1 > pib2 ? 1 : 0;

            break;
    
            case 4:
            printf("\nPontos Turísticos: \n");
            printf("Carta 1 - %d x ", pontosTuristicos1);
            printf("Carta 2 - %d\n", pontosTuristicos2);
            resultado(pontosTuristicos1, pontosTuristicos2);
            resultado2= pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;

            break;
    
            case 5:
            printf("\nDensidade Populacional: \n");
            printf("Carta 1 - %.2f x ", densidadePopulacional1);
            printf("Carta 2 - %.2f\n", densidadePopulacional2);
            resultado(1.0f / densidadePopulacional1, 1.0f / densidadePopulacional2);
            resultado2= densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;

            break;
    
            case 6:
    
            break;
            
            default:
            printf("Opção invalida");
            break;
        }

        resultadoFinal(resultado1, resultado2);

    }
    
    
   

    return 0;
}
