// ******************* DESAFIO NIVEL AVENTUREIRO *******************

#include <stdio.h>

// ###########################################################
// DEFINIÇÃO DE TAMANHOS FIXOS (UTILIZANDO #define)
// ###########################################################
#define TAM 10          // tamanho fixo do tabuleiro (10x10)
#define TAM_NAVIO 3     // cada navio ocupa 3 posições

int main() {

    // ###########################################################
    // DECLARAÇÃO E INICIALIZAÇÃO DO TABULEIRO
    // ###########################################################
    int tabuleiro[TAM][TAM];

    // Inicializa o tabuleiro com 0 (representa água)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    int valorNavio = 3; // representa as partes do navio

    // ###########################################################
    // POSICIONAMENTO DOS 4 NAVIOS
    // ###########################################################

    // --- Navio 1: Diagonal Principal (↘ linha++, coluna++) ---
    int linhaD1 = 0, colunaD1 = 0;
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaD1 + i][colunaD1 + i] = valorNavio;
    }

    // --- Navio 2: Horizontal (→) ---
    int linhaH = 4, colunaH = 2;
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaH][colunaH + i] = valorNavio;
    }

    // --- Navio 3: Diagonal Secundária (↙ linha++, coluna--) ---
    int linhaD2 = 6, colunaD2 = 3;
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaD2 + i][colunaD2 - i] = valorNavio;
    }

    // --- Navio 4: Vertical (↓) ---
    int linhaV = 6, colunaV = 8;
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = valorNavio;
    }

    // ###########################################################
    // EXIBIÇÃO DO TABULEIRO
    // ###########################################################
    printf(">>>>> TABULEIRO DE BATALHA NAVAL (NÍVEL AVENTUREIRO) <<<<<\n\n");

    // Cabeçalho com letras das colunas (A–J)
    printf("    ");
    for (char c = 'A'; c < 'A' + TAM; c++) {
        printf("%c ", c);
    }
    printf("\n");

    // Linha separadora
    printf("   ");
    for (int k = 0; k < TAM * 2 - 1; k++) {
        printf("-");
    }
    printf("\n");

    // Exibe o conteúdo do tabuleiro linha por linha
    for (int i = 0; i < TAM; i++) {
        printf("%2d| ", i);
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // ###########################################################
    // FINALIZAÇÃO
    // ###########################################################
    printf("\n>>> Navios posicionados com sucesso! <<<\n");

    return 0;
}
