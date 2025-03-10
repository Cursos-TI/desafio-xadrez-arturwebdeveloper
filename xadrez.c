#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentacaoTorre(int numero){
    if (numero>0)
    {
        printf("Torre movimentou para Direita\n");
        movimentacaoTorre(numero -1);
    }
    
}



int main() {

    int valorMovimentoBispo = 5;
    int valorMovimentoTorre = 5;
    int movimentacaoRainha = 8;
    int movimentacaoCavalo = 3;
    int opcao;
    int i = 0;
    int j = 0;

    printf("Qual peça você deseja movimentar ?\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            
            while (valorMovimentoBispo>0)
            {
                printf("Bispo movimentou na diagonal superior direita\n");
                valorMovimentoBispo --;
            }
            
        
        break;
    
        case 2:
            
         movimentacaoTorre(valorMovimentoTorre);
        break;
    
        case 3:{
            for (int i = 0; i < movimentacaoRainha; i++)
            {
                printf("Rainha movimentou para Esquerda\n");
            }
            
            break;
        }
        
        case 4:
            for ( i = 0; i <1; i++)
            {
                
                while (j<2)
                {
                    printf("Cavalo movimentou para baixo \n");
                    j++;
                }
            printf("Cavalo movimentou para esquerda\n");
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
