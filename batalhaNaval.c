#include <stdio.h>

/*
    Desafio - Batalha Naval
    Nível Aventureiro
    Criando navios na diagonal
*/

#define LINHAS 10 
#define COLUNAS 10

int main() {
    
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    int tabuleiro [LINHAS][COLUNAS];

    // Iniciando o tabuleiro com todas as posições sendo 0
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            tabuleiro[i][j] = 0;
        }
        
    }

    // Criando navio 1 - horizontal (linha 3, colunas 4,5,6)
    int linha1 = 3;
    int coluna1 = 4;

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha1][coluna1 + i] = 3;
    }

    // Criando navio 2 - vertical (coluna 2, linhas 6,7,8)
    int linha2 = 6;
    int coluna2 = 2;

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha2 + i][coluna2] = 3;
    }

    // Criando navio 3 - diagonal da esquerda para a direita (começa em [0][0])
    int linhadiagonal1 = 0;
    int colunadiagonal1 = 0;

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linhadiagonal1 + i][colunadiagonal1 + i] = 3;
    }

    // Criando navio 4 - diagonal da direita para a esquerda (começa em [0][9])
    int linhadiagonal2 = 5;
    int colunadiagonal2 = 9;

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linhadiagonal2 + i][colunadiagonal2 - i] = 3;
    }

    // Exibir o tabuleiro na tela 
    // Cabeçalho das colunas
    printf("    ");
    for (int j = 0; j < COLUNAS; j++) 
    {
        printf("%c ", 'A' + j);
    }
    printf("\n");

    printf("  ---------------------\n");

    // Exibir cada linha
    for (int i = 0; i < 10; i++) 
    {
        printf("%d | ", i); 
        for (int j = 0; j < 10; j++) 
        {
            printf("%d ", tabuleiro[i][j]); 
        }
        printf("\n");
    }

    return 0;

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    
}
