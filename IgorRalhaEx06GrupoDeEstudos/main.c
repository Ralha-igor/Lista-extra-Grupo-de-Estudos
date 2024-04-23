#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float montanteFinal(float capital, float tempo, float juros);
//float montanteFinalCalculo(float tempo);

int main()
{
    float valorInicial, tempo, jurosComposto, resultado;

    printf("\n Digite o capital inicial do seu investimento: ");
    scanf("\n%f", &valorInicial);
    printf("\n Digite o tempo do investimento em ano: ");
    scanf("\n%f", &tempo);
    printf("\n Digite o valor do juros em decimal: : ");
    scanf("\n%f", &jurosComposto);

    resultado = montanteFinal(valorInicial, tempo,jurosComposto);
    printf("\n O valor do montante final eh: %.2f\n ", resultado);


}

float montanteFinal(float capital, float tempo, float juros)

{
//float montanteFinalCalculo(float tempo)

    float calc;
  //  float juroscompostos = 0.07

   //calc = (capital * (( 1 + jurosComposto)* tempo));
    calc = capital * pow((1 + juros), tempo);

    return calc;


}


//https://brasilescola.uol.com.br/matematica/juros-compostos.htm
//https://pt.stackoverflow.com/questions/130147/como-usar-a-fun%C3%A7%C3%A3o-pow-potencia-em-c
