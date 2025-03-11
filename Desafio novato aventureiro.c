#include <stdio.h>

int main() {

    char estadoA;
    char estadoB;
    char codigoA[10];
    char codigoB[10];
    char cidadeA[50];
    char cidadeB[50];
    float areaA, areaB, pibA, pibB;
    int populacaoA, populacaoB, pontos_turisticosA, pontos_turisticosB;
    float densidadeA, densidadeB, pibpercapitaA, pibpercapitaB;
 
    densidadeA = 56467242 / 3975;
    pibA = 7747000000 / 3975000;
    densidadeB = 1571000 / 3942;
    pibB = 4296800 / 3975;


    printf("\nCodigo da Carta: 01");
    printf("\nEstado: Paraiba");
    printf("\nCidade: Joao Pessoa");
    printf("\nÁrea: 56.467.242 km² ");
    printf("\nPib: 77.470 bilhões");
    printf("\nPopulação: 3.975 milhões");
    printf("\nPontos Turísticos: 30");
    printf("\nDensidade Populacional: %.2f hab/km²", densidadeA);
    printf("\nPib per capita: %.2f reais\n", pibA);
    
    


    printf("\nCodigo da Carta: 02");
    printf("\nEstado: Amazonas");
    printf("\nCidade: Manaus");
    printf("\nÁrea: 1.571.000 km²");
    printf("\nPib: 42.968 milhões");
    printf("\nPopulação: 3,942 milhões");
    printf("\nPontos Turísticos: 20");
    printf("\nDensidade Populacional: %.2f hab/km²", densidadeB);
    printf("\nPib per capita: %.2f reais\n", pibB);
    printf("\n");
    



    return 0;





}
