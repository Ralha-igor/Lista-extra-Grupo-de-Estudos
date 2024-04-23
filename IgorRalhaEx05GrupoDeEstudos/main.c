#include <stdio.h>
#include <stdlib.h>

float valorMonetario(float dollar);

int main()
{
    float converter, resultado;


    printf("\n Digite o Valor que deseja converter: ");
    scanf("%f", &converter);

    resultado = valorMonetario(converter);
    printf("\n A conversao de dolar para euro eh: \n%2.f\n", resultado);

return 0;
}

float valorMonetario(float dollar){

    float taxaCambioEuro = 0.9208, convercacao;



    convercacao = dollar * taxaCambioEuro;

    return convercacao;


}
