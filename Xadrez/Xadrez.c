#include <stdio.h>

// TORRE =============================

void moverTorre(int casas, int atual) {
    if (atual >= casas) return;  
    printf("Direita\n");          
    moverTorre(casas, atual + 1); 
}

// BISPO 

void moverBispo(int casasVerticais, int casasHorizontais, int atualV, int atualH) {
    if (atualV >= casasVerticais) return; 

    
    for (int h = 0; h < casasHorizontais; h++) {
        printf("Direita\n");
    }

    printf("Cima\n"); 
    moverBispo(casasVerticais, casasHorizontais, atualV + 1, 0); 
}

//  RAINHA 

void moverRainha(int casas, int atual) {
    if (atual >= casas) return;

    printf("Cima-Direita\n");
    moverRainha(casas, atual + 1);
}

// CAVALO 

void moverCavalo(int movimentos) {
    int movVertical = 2; 
    int movHorizontal = 1; 

    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < movVertical + movHorizontal; j++) {
            if (j < movVertical) {
                printf("Cima\n");
                continue; 
            }
            if (j >= movVertical && j < movVertical + movHorizontal) {
                printf("Direita\n");
            }
        }
        printf("Movimento em L completo!\n\n");
    }
}


int main() {
    
    int casasTorre = 4;
    int casasBispoV = 3;
    int casasBispoH = 2;
    int casasRainha = 3;
    int movimentosCavalo = 2;

    // Torre 
    printf(" Movimento da TORRE \n");
    moverTorre(casasTorre, 0);
    printf("\n");

    // Bispo 
    printf(" Movimento do BISPO \n");
    moverBispo(casasBispoV, casasBispoH, 0, 0);
    printf("\n");

    // Rainha 
    printf(" Movimento da RAINHA \n");
    moverRainha(casasRainha, 0);
    printf("\n");

    //  Cavalo 
    printf(" Movimento do CAVALO \n");
    moverCavalo(movimentosCavalo);
    printf("\n");

    return 0;
}
