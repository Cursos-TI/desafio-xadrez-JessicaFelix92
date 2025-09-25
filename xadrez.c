#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


    // Declarando variáveis constantes 
    int casaTorre = 5, casaBispo = 5, casaRainha = 8;
    
    //Torre: mover 5 casas para a direita (for)
    printf("Movimento da Torre:\n");
    for (int t = 0; t < casaTorre; t++)
    {
        printf("Direita\n");
    }

    //Bispo: mover 5 casas para a cima e direita (while)
    int b = 1;
    printf("Movimento do Bispo:\n");
    while (b <= casaBispo)
    {
        printf("Cima, Direita\n");
        b++;
    }
    
    //Rainha: mover 8 casas para a esquerda (do-while)
    int r = 1;
    printf("Movimento da Rainha:\n");
    do
    {
        printf("Esquerda\n");
        r++;
    } while (r <= casaRainha);
    

    return 0;
}
