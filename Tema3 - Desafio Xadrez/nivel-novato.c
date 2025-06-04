#include <stdio.h>

int main() {
    //Movimentando a peça Torre 5 casas para a direita com estrutura for
    printf("*** Movimento da Torre ***\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("Direita\n");
    }
    
    //Movimentando a peça Bispo 5 casas para cima à direita com estrutura while
    int i = 1;
    printf("\n*** Movimento da Bispo ***\n");
    while (i <= 5)
    {
        printf("Cima, Direita\n");
        i++;
    }
    

    //Movimentando a peça Rainha 8 casa para a esquerda com estrutura do/while
    int j = 1;
    printf("\n*** Movimento da Rainha ***\n");
    do
    {
        printf("Esquerda\n");
        j++;
    } while (j <= 8);
    


    return 0;
}