#include <stdio.h>

int main() {
    int i, j;
    int navio = 3; // Tamanho fixo do navio
    int matriz[10][10] = {0}; // Inicializa a matriz com zeros

    // Posiciona um navio horizontalmente (linha 2, colunas 4 a 6)
    for (i = 0; i < navio; i++)
        matriz[2][4 + i] = navio;

    // Posiciona um navio verticalmente (coluna 7, linhas 5 a 7)
    for (i = 0; i < navio; i++)
        matriz[5 + i][7] = navio;

    // Exibe o tabuleiro
    printf(" *B A T A L H A  N A V A L*\n\n");
    printf("   A B C D E F G H I J\n");
    for (i = 0; i < 10; i++) {
        printf("%2d ", i);
        for (j = 0; j < 10; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }

    return 0;
}

