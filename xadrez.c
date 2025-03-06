#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int movimentacaoBispo = 5;
    int movimentacaoTorre = 5;
    int movimentacaoRainha = 8;
    int opcao;
    int i = 0;

    printf("Qual peça você deseja movimentar ?\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            
            while ( i < movimentacaoBispo)
            {
                printf("Bispo movimentou para Cima, Direita\n");
                i++;
            }
        
        break;
    
        case 2:
            
            do
            {
                printf("Torre movimentou para Direita\n");
                i++;
            } while (i < movimentacaoTorre);
        break;
    
        case 3:{
            for (int i = 0; i < movimentacaoRainha; i++)
            {
                printf("Rainha movimentou para Esquerda\n");
            }
            
            break;
        }
        default:
        printf("Opção inválida");
        break;
    }

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

    return 0;
}
