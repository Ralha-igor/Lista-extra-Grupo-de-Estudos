#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>


int main()
{
     int intervaloInicial, intervaloFinal, valorAleatorio,i;

    printf("\n Digite algum numero inteiro para especificar o valor final do intervalo de numeros aleatorios: ");
    scanf("\n%i", &intervaloFinal);

    for (i = 0; i < 10; i++){
    valorAleatorio = rand() % intervaloFinal;
    printf("\n O valor aleatorio gerado eh: %i", valorAleatorio);
    }
    return 0;
}


//https://www.youtube.com/watch?v=_szJ-wAazg0
//Sintaxe estudada diante dos slide de aula e alguns video no youtube como por exemplo link acima
// na maioria dos codigos, tem uma referencia de estudos, normalmente videos e pesquisas.



/*
{
    int intervaloInicial, intervaloFinal;

    printf("\n Digite o primeiro numero inteiro para especificar o valor inicial do intervalo de numeros aleatorios: ");
    scanf("\n%i", &intervaloInicial);

    printf("\n Digite o Segundo numero inteiro para especificar o valor final do intervalo de numeros aleatorios: ");
    scanf("\n%i", &intervaloFinal);

    int i;

    for(i = 0; i < 10; i++){
        printf("\n %i", rand( intervaloInicial)% intervaloFinal);

    }
    return 0;
}
*/
