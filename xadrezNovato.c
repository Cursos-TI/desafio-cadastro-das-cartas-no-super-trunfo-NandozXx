#include <stdio.h>

int main() {

    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int cavalo = 1;
    int opçao;

            //Entrada de dados.

    printf("** Jogo de Xadrez **\n");              
    printf("1. Mover Torre \n");
    printf("2. Mover Bispo \n");
    printf("3. Mover Rainha \n");
    printf("4. Mover o Cavalo \n");
    printf("5. Sair do Jogo \n");
    printf("Escolha uma opção \n");
    scanf("%d", &opçao);

            //Menu.    

    switch (opçao)
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

                //menu da movimentação do cavalo.
        case 4:
        printf("Você escolheu o cavalo!!!\n");
        printf("Escolha a movimentação...\n");
        printf("1. Para cima à direita\n");
        printf("2. Para cima à esquerda\n");
        printf("3. Para baixo à direita\n"),
        printf("4. Para baixo à esquerda\n");
        printf("Escolha: \n");
        scanf("%d", &opçao);
             
            switch (opçao)
            {
            case 1:
                printf("Você escolheu está opção... \n");
                while (cavalo--)
                {
                for (cavalo; cavalo < 2; cavalo++)
                    {
                        printf("Cima \n");
                    }
                    printf("Direita \n");
                   break;
                }
                break;

                case 2:
                printf("Você escolheu está opção... \n");
                while (cavalo--)
                {
                for (cavalo; cavalo < 2; cavalo++)
                    {
                        printf("Cima \n");
                    }
                    printf("Esquerda \n");
                   break;
                }
                break;

                case 3:
                printf("Você escolheu está opção... \n");
                while (cavalo--)
                {
                for (cavalo; cavalo < 2; cavalo++)
                    {
                        printf("Baixo \n");
                    }
                    printf("Direita \n");
                   break;
                }
                break;

                case 4:
                printf("Você escolheu está opção... \n");
                while (cavalo--)
                {
                for (cavalo; cavalo < 2; cavalo++)
                    {
                        printf("Baixo \n");
                    }
                    printf("Esquerda \n");
                   break;

                   default: 
                   printf("Opção inválida.");
                   break;
                }
                break;
     
            
            }
            break;
        
        case 5:
        printf("Você saiu do jogo...\n");
        break;

        default: 
        printf("opção inválida.");
        break;

        return 0 ;

    }



}
