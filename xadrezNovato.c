#include <stdio.h>

int main() {

    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int opcao;

    printf("** Jogo de Xadrez **\n");
    printf("1. Mover Torre \n");
    printf("2. Mover Bispo \n");
    printf("3. Mover Rainha \n");
    printf("4. Sair do Jogo \n");
    printf("Escolha uma opção \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Você escolheu a torre...\n");
        while (torre <= 5)
        {
            printf("horizontal à Direia\n");
            torre++;
        }
        
        break;

        case 2:
        printf("Você escolheu o bispo...\n");
        do {
            printf("Vertical - Cima, direita\n");
            bispo++;
        } while (bispo <= 5);

        break;
        
        case 3:
        printf("Você escolheu a rainha...\n");
        for (rainha; rainha <= 8; rainha++)
        {
            printf("horizontal à esquerda\n");
        }

        break;
        
        case 4:
        printf("Você saiu do jogo...\n");
        break;

        default: 
        printf("opção inválida.");
        break;

        return 0 ;

    }



}