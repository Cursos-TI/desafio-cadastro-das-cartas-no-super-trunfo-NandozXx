#include <stdio.h>

int main () {

    char estado1, estado2; 
    char codigo1[10],codigo2[10], cidade1[50], cidade2[50]; 
    float area1, area2, pib1, pib2;
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2, pib_per_capita1, pib_per_capita2;
    


    //PRIMEIRA CARTA.

    printf("**Informações da primeira carta.**\n\n");

    printf("uma letra de 'A' a 'H' para representar o primeiro estado.\n");
    printf("Estado: ");
    scanf("%c", &estado1);

    printf("Um número de 1 a 4 para representar a carta.\n");
    printf("Número: ");
    scanf("%2s", codigo1);

    printf("Insira o nome da primeira cidade.\n");
    printf("Cidade: ");
    getchar();
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Insira o número de habitantes da cidade.\n");
    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área territorial da cidade.\n");
    printf("Área km²: ");
    scanf("%f", &area1);

    printf("Insira o valor do produto bruto da cidade.\n");
    printf("Pib: ");
    scanf("%f", &pib1);

    printf("Insira a quantidade de pontos turísticos da cidade.\n");
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");


    //SEGUNDA CARTA.

    printf("**Informações da segunda carta.**\n\n");

    printf("uma letra de 'A' a 'H' para representar o segundo estado.\n");
    printf("Estado: ");
    scanf(" %c", &estado2);


    printf("Um número de 1 a 4 para representar a carta.\n");
    printf("Número: ");
    scanf(" %2s", codigo2);

    printf("Insira o nome da segunda cidade.\n");
    printf("Cidade: ");
    getchar();
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Insira o número de habitantes da cidade.\n");
    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área territorial da cidade.\n");
    printf("Área km²: ");
    scanf("  %f", &area2);

    printf("Insira o valor do produto bruto da cidade.\n");
    printf("Pib: ");
    scanf(" %f", &pib2);

    printf("Insira a quantidade de pontos turísticos da cidade.\n");
    printf("Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos2);
    printf("\n");

    //IMPRESSãO DAS CARTAS.


    printf("**DADOS DA PRIMEIRA CARTA.**\n\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %c%2s\n", estado1, codigo1);
    printf("Cidade: %s", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("Pib: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1 = populacao1 / area1);
    printf("Pib per capita: %.2f reais\n", pib_per_capita1 = pib1 / populacao1);
    printf("\n");

    //IMPRESSÃo DA SEGUNDA CARTA.

    printf("**DADOS DA SEGUNDA CARTA.**\n\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %c%2s\n", estado2, codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("Pib: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2 = populacao2 / area2);
    printf("Pib per capita: %.2f reais\n", pib_per_capita2 = pib2 / populacao2);
    printf("\n");


    //COMRARAÇÃO DAS CARTAS.

    printf("Comparação de cartas: (atributo: Área):\n\n");

    printf("Carta 1 - %.2f\n", area1);
    printf("Carta 2 - %.2f\n", area2);

    if(area1 > area2){
        printf("Resultado - Carta 1 Venceu!!");
    } else {
        printf("Resultado - Carta 2 venceu!!\n");

    }




    return 0;













}