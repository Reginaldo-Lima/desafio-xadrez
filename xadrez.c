#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Iniciante
// 02/06/2025 por Reginaldo Moura

int main() {
    int movimentoBisbo = 5;     // quantidade de casas que o Bispo se movimentará
    int movimentoTorre = 5;     // quantidade de casas que a Torre se movimentará
    int movimentoRainha = 8;    // quantidade de casas que a Rainha se movimentará

    // Implementação de Movimentação do Bispo
    printf("Movimento do Bispo:\n");

    while (movimentoBisbo > 0)
    {
        printf("Cima Direita\n"); //simula o movimeto do Bispo na diagonal

        movimentoBisbo--; //decremento o movimento do Bispo
    }
    

    // Implementação de Movimentação da Torre
    printf("\nMovimento da Torre\n");

    do
    {
        printf("Direita\n"); // simula o movimento da Torre
        movimentoTorre--; // decrementa o movimento da Torre
    } while (movimentoTorre > 0);
    
    // Implementação de Movimentação da Rainha
    printf("\nMovimento da Rainha:\n");
    
    for (; movimentoRainha > 0; movimentoRainha--)
    {
        printf("Esquerda\n"); // simula o movimento da Rainha
    }
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
