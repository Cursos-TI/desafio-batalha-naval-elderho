#include <stdio.h>

// ###########################################################
// DEFINIÇÃO DE TAMANHOS FIXOS
// ###########################################################
#define TAM 10  // tamanho fixo do tabuleiro (10x10)

// ###########################################################
// FUNÇÃO PRINCIPAL
// ###########################################################
int main() {

    // ###########################################################
    // DECLARAÇÃO E INICIALIZAÇÃO DO TABULEIRO
    // ###########################################################
    int tabuleiro[TAM][TAM];

    // Preenche o tabuleiro com 0 (representa água)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ###########################################################
    // HABILIDADE 1: CONE (em formato triangular)
    // ###########################################################
    // O cone aponta para baixo, com o topo na linha 0, coluna 2
    // e se expandindo até a linha 2.
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if ((i == 0 && j == 2) ||
                (i == 1 && j > 0 && j < 4) ||
                (i == 2 && j >= 0 && j < 5)) {
                tabuleiro[i][j] = 5; // valor 5 representa o cone
            }
        }
    }

    // ###########################################################
    // HABILIDADE 2: CRUZ (em formato de +)
    // ###########################################################
    // O centro da cruz está na linha 5, coluna 2
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if ((i == 4 && j == 2) || 
                (i == 5 && j < 5) || 
                (i == 6 && j == 2)) {
                tabuleiro[i][j] = 6; // valor 6 representa a cruz
            }
        }
    }

    // ###########################################################
    // HABILIDADE 3: OCTAEDRO (em formato de losango)
    // ###########################################################
    // O centro do losango está na linha 8, coluna 7
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if ((i == 7 && j == 7) ||
                (i == 8 && j > 5 && j < 9) ||
                (i == 9 && j == 7)) {
                tabuleiro[i][j] = 8; // valor 8 representa o octaedro
            }
        }
    }

    // ###########################################################
    // EXIBIÇÃO DO TABULEIRO NO CONSOLE
    // ###########################################################
    printf(">>>>> TABULEIRO DE BATALHA NAVAL (NÍVEL MESTRE) <<<<<\n\n");

    // Cabeçalho de colunas (A–J)
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

    // Impressão do tabuleiro linha a linha
    for (int i = 0; i < TAM; i++) {
        printf("%2d| ", i); // imprime o número da linha
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // ###########################################################
    // FINALIZAÇÃO
    // ###########################################################
    printf("\n>>> Habilidades aplicadas com sucesso! <<<\n");

    return 0;
}
