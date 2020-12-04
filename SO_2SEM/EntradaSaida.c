#include "EntradaSaida.h"
#include "defines.h"

void captaEntrada(int* pontuacao1, int* pontuacao2){

    char opcao;

    opcao = getchar();

    if(opcao=='s') (*pontuacao1)++;
    else if (opcao == 'k') (*pontuacao2)++;

    return;
}

void imprimeSaida(float* placar, char *nome1, char *nome2){
    
    int i;

    system ("clear");

    printf("O cabo de guerras está valendo!\nPressione 's' para puxar o cabo para a esquerda ou 'k' para puxá-lo para a direita\n");

    printf("\rs");

    if(placar<0){
        for(i=-1*DURACAO_DO_JOGO;i<*placar;i++) printf(" ");
        printf("|"); for(i=0;i<TAMANHO_DA_CORDA;i++) printf("-"); printf("|");
        for(i=0;i<DURACAO_DO_JOGO;i++) printf(" ");
        for(i=0;i<abs(*placar);i++) printf(" ");
    } 

    else{
        for(i=0;i<DURACAO_DO_JOGO;i++) printf(" ");
        for(i=0;i<*placar;i++) printf(" ");
        printf("|"); for(i=0;i<TAMANHO_DA_CORDA;i++) printf("-"); printf("|");
        for(i=(int)*placar;i<DURACAO_DO_JOGO;i++) printf(" ");
    } 

    printf("k\r\n");

    if(placar==0) printf("\rPlacarAtual: 0. Está tudo empatado!\r\n\n");
    else if(placar<0) printf("\rPlacarAtual: %d de vantagem para %s\r\n\n",abs(*placar), nome1);
    else printf("\rPlacarAtual: %d de vantagem para %s\r\n\n",abs(*placar), nome2);

    return;
}
