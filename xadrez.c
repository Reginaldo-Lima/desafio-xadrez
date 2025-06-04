#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Mestre
// Aplicando recursividade e loops complexos
// 03/06/2025 por Reginaldo Moura

// função recursiva para o movimento do Bispo
void moverBispo(int casas){
    if(casas > 0){ // Caso-base para evitar o loop infinito
        //loop aninhado para o movimento do Bispo em duas dimenções
        for(int i = 1; i > 0; i--){
            for(int j = 1; j > 0; j--){
                printf("Cima "); // primeiro movimento
            }
            printf("Direita\n"); // segundo movimento
        }
        moverBispo(casas - 1); // chama a si própria e decrementa casas em um
    }

} // fim da função moverBispo

// Função recursiva para o movimento da Torre
void moverTorre(int casas){
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
} // fim da função moverTorre

// Função para o movimento da Rainha
void moverRainha(int casas){
    if(casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
} // fim da função moverRainha

// Função main inicializa o programa
int main() {
    int movimentoBispo = 5;     // quantidade de casas que o Bispo se movimentará
    int movimentoTorre = 5;     // quantidade de casas que a Torre se movimentará
    int movimentoRainha = 8;    // quantidade de casas que a Rainha se movimentará
    int movimentoCavalo = 1;    // quantidade de movimentos do Cavalo

    // Implementação de Movimentação do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(movimentoBispo);
    
    // Implementação de Movimentação da Torre
    printf("\nMovimento da Torre\n");
    moverTorre(movimentoTorre);
    
    // Implementação de Movimentação da Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(movimentoRainha);
    
    // Nível Aventureiro - Movimentação do Cavalo
    printf("\nMovimento do Cavalo\n");

    while (movimentoCavalo--){ // loop aninhado para a movimentação em L do Cavalo
        //quando o movimento chegar a 0 a condição será considerada false e encerra o loop 

        for (int i = 1, j = 3; i <= 3 || j > 1; i++, j--){ 
            // Primeiro o Cavalo movimenta 2 casas em uma direção
            printf("Cima\n");

            if(i <= 2){
                continue;
            }

            printf("Direita\n"); // Depois o cavalo se movimenta 1 casa na diagonal
            
            if (i == 3){
                break;
            }
        }
    }

    return 0;
}
