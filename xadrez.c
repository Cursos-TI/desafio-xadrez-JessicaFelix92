#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); //Função recursiva Torre
    }
}

void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispo(casas - 1); //Função recursiva Bispo
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1); //Função recursiva Rainha
     }
}    

int main(){

    // Declarando variáveis constantes 
    int casaTorre = 5, casaBispo = 5, casaRainha = 8, casaCavalo = 1;

    //Torre: mover 5 casas para a direita
    printf("Movimento da Torre:\n");
    moverTorre(casaTorre);

    printf("\n");

    //Bispo: mover 5 casas para cima e direita
    printf("Movimento do Bispo:\n");
    moverBispo(casaBispo);
    //Bispo: mover 5 casas para a cima e direita (loop aninhado)
    printf("Movimento do Bispo com loop aninhado:\n");
    for (int i = 0; i < casaBispo; i++) { // vertical (cima)
        for (int j = 0; j < 1; j++) {      // horizontal (direita)
        printf("Cima, Direita\n");
    }

}
    printf("\n");
    
    //Rainha: mover 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    moverRainha(casaRainha);

    printf("\n");

    //Cavalo: mover duas casas para cima e uma casa para a direita (loops aninhados: avançado)
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < casaCavalo; i++) {
            for (int j = 0; j < 3; j++) {
                if (j < 2) {
                printf("Cima\n");
                continue;
             } 
             
             if (j == 2) {                       
            printf("Direita\n");
            break;                           
        }
    }
}
    return 0;
}
