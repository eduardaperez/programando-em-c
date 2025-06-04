#include <stdio.h>

int main() {
    //Movimentando a peça Torre 5 casas para a direita com estrutura for
    printf("*** Movimento da Torre ***\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("Direita\n");
    }
    
    //Movimentando a peça Bispo 5 casas para cima à direita com estrutura while
    printf("*** Movimento da Bispo ***\n");
    int i = 1;
    while (i <= 5)
    {
        printf("Cima, Direita\n");
        i++;
    }
    

    //Movimentando a peça Rainha 8 casa para a esquerda com estrutura do/while
    printf("*** Movimento da Rainha ***\n");
    i = 1;
    do
    {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);
    
    //Movimentando a peça Cavalo 2 casas para baixo e 1 casa para a esquerda, com estruturas aninhadas while e for
    printf("\n");
    printf("*** Movimento do Cavalo ***\n");
    i = 1;
    while (i--) {
        for (int j = 0; j < 2; j++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }

    return 0;
}