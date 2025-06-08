#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


int main() {
    // Número de casas que cada peça irá se mover
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    int i;

    // Movimento Torre
    printf("Movimento da Torre (5 casas para a direita):\n");

    for (i = 0; i < movimentoTorre; i++) {
        printf("direita\n");
    }

    printf("\n");

    // Movimento Bispo
    printf("Movimento do Bispo (5 casas na diagonal para cima e direita):\n");

    i = 0;
    while (i < movimentoBispo) {
        printf("cima, direita\n");
        i++;
    }

    printf("\n");

    // Movimento Rainha
    printf("Movimento da Rainha (8 casas para a esquerda):\n");

    i = 0;
    do {
        printf("esquerda\n");
        i++;
    } while (i < movimentoRainha);

    return 0;
}
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

