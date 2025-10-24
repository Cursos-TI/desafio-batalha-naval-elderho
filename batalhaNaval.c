// ******************* DESAFIO NIVEL NOVATO *******************

#include <stdio.h>

// ###########################################################
// DEFINIÇÃO DOS TAMANHOS DO TABULEIRO E DO NAVIO
// ###########################################################
// int TAM = 10;          // tamanho fixo do tabuleiro (10x10)
// int TAM_NAVIO = 3;     // tamanho fixo dos navios (3 posições cada)

// ###########################################################
// FUNÇÃO PRINCIPAL
// ###########################################################
int main() {

    // ###########################################################
    // DECLARAÇÃO E INICIALIZAÇÃO DO TABULEIRO
    // ###########################################################
    int tabuleiro[10][10]; // matriz que representa o tabuleiro do jogo

    // Preenche o tabuleiro com 0 (representa água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ###########################################################
    // DECLARAÇÃO DOS NAVIOS (USANDO VETORES)
    // ###########################################################
    // Cada posição com valor 3 representa uma parte do navio
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3]   = {3, 3, 3};

    // ###########################################################
    // POSICIONAMENTO DOS NAVIOS NO TABULEIRO
    // ###########################################################
    // Coordenadas iniciais definidas diretamente no código
    int linhaHorizontal = 4;   // linha onde o navio horizontal começa
    int colunaHorizontal = 2;  // coluna onde o navio horizontal começa

    int linhaVertical = 1;     // linha onde o navio vertical começa
    int colunaVertical = 7;    // coluna onde o navio vertical começa

    // --- Posiciona o navio horizontal ---
    // Verifica se cabe dentro do tabuleiro (não ultrapassa o limite)
    if (colunaHorizontal + 3 <= 10) {
        for (int i = 0; i < 3; i++) {
            tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
        }
    }

    // --- Posiciona o navio vertical ---
    if (linhaVertical + 3 <= 10) {
        for (int i = 0; i < 3; i++) {
            tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
        }
    }

    // ###########################################################
    // EXIBIÇÃO DO TABULEIRO NO CONSOLE
    // ###########################################################
    printf(">>>>> TABULEIRO DE BATALHA NAVAL <<<<<\n\n");

    // Cabeçalho com letras das colunas (A–J)
    printf("    "); // espaço para alinhar com os números das linhas
    for (char c = 'A'; c < 'A' + 10; c++) {
        printf("%c ", c);
    }
    printf("\n");

    // Linha separadora
    printf("   ");
    for (int k = 0; k < 10 * 2 - 1; k++) {
        printf("_");
    }
    printf("\n");

    // Exibe o conteúdo do tabuleiro linha por linha
    for (int i = 0; i < 10; i++) {
        printf("%2d| ", i); // imprime número da linha
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // ###########################################################
    // FINALIZAÇÃO DO PROGRAMA
    // ###########################################################
    printf("\n >>>>> Navios posicionados com sucesso! <<<<< \n");

    return 0;
}
