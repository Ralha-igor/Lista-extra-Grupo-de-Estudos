#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

char pedra(char usuario, char computador);
char papel(char usuario, char computador);
char tesoura(char usuario, char computador);


int main()
{
    int opcao, empate;


    printf("\n Escolha uma opcao pra jogar\n [1] Papel\n [2] Pedra\n [3] Tesoura:\n\n ");
    scanf("%i", &opcao);

switch(opcao){

    case 1: pedra(opcao,empate);
    printf("\n ")
    break;
}


}
