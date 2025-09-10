#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Novato - Movimentação das Peças
    const int MovimentoBispo = 5 ;
    const int MovimentoRainha = 8;
    const int MovimentoTorre = 5;

    // Implementação de Movimentação do Bispo
    printf( "Movimento do Bispo \n\n");

int i = 1; 

while (i <= MovimentoBispo)
{
    printf("Cima, Direita.\n");
     i++;
   
}
    // Implementação de Movimentação da Torre
    printf( "\n\n Movimento da Torre \n\n");
for (i = 1; i <= MovimentoTorre; i++)
{
   
    printf("Direita\n");

}

    // Implementação de Movimentação da Rainha
    printf( "\n\n Movimento da Rainha \n\n");
i = 1; 
while (i <= MovimentoRainha){

    printf("Esquerda\n");
    i++;
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
