#include <stdio.h>
#include <stdlib.h>


    int verificarNumeroPrimo(int numInteiro, int divisao);


int main()
{
    int numero;

    printf("\n Digite valor de um numero inteiro para saber se ele eh primo:\n\n");
    scanf("%i", &numero);
                // o numero 2 representa o valor da divisao que esta declarado no parametro fora do main
        if (verificarNumeroPrimo(numero, 2 )){
            printf("\n Eh um numero primo\n\n");
        }
        else
        {
            printf("\n Nao eh um numero primo");
        }

    return 0;
}

 int verificarNumeroPrimo(int numInteiro, int divisao){

                // retorna que nao eh primo, pois chegou em 0
        if(numInteiro <= 1){
           return 0;
           }
                // caso encontrar um divisor ele ira retornar 1 e dizer que o numero eh primo
        if (divisao == numInteiro ){
            return 1;
        }
            //esta verificando se o parametros são iguais a 0
        if ( numInteiro % divisao == 0){
            return 0;
        }

        //{
            //printf("\E eh numero primo\n\n", num);
           // resultado = 1;
        //else
         //   printf("\n Nao eh primo");

   return verificarNumeroPrimo(numInteiro, divisao + 1);
}
