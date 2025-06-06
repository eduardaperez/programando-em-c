#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
    
}

void moverBispo(int casas) {
    if (casas > 0) {
        for (int i = 0; i < 1; i++) { // vertical
            for (int j = 0; j < 1; j++) { // horizontal
                printf("Cima, Direita\n");
            }
        }
        moverBispo(casas - 1);
    }
    
}

void moverRainha(int casas) {
    if (casas > 0)
    {
        printf ("Esquerda\n");
        moverRainha(casas - 1);
    }
    
}

int main() {
    //Movimentando a peça Torre 5 casas para a direita
    printf("*** Movimento da Torre ***\n");
    moverTorre(5);
    printf("\n");
    
    //Movimentando a peça Bispo 5 casas para cima à direita
    printf("*** Movimento da Bispo ***\n");
    moverBispo(5);
    printf("\n");

    //Movimentando a peça Rainha 8 casa para a esquerda
    printf("*** Movimento da Rainha ***\n");
    moverRainha(8);
    printf("\n");
    
    //Movimentando a peça Cavalo 2 casas para cima e 1 casa para a direita
    printf("*** Movimento do Cavalo ***\n");
    int i = 0;
    while (i < 3) {
        i++;

        if (i <= 2) {
            printf("Cima\n");
            continue;
        }

        if (i == 3) {
            printf("Direita\n");
            break;
        }
    }
    printf("\n");
    
    return 0;
}