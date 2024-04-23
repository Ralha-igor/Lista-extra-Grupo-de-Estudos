#include <stdio.h>
#include <stdlib.h>

float convercao (float farenheit, float celsius);
float convercao2(float celsius, float fahrenheit);

int main()
{
    float fahrenheitLocal, celsiusLocal;
    int opcao;

    printf("\n Digite [1] para calcular fahrenheit para celsius ou [2] de celsius para fahrenheit\n");
    scanf("\n%d", &opcao);


  /*    printf("\nDigite o valor de fahrenheit");
        scanf("%f", & fahrenheitLocal);
        printf("\nDigite o valor de fahrenheit");
        scanf("%f", & celsiusLocal);
*/

   switch(opcao){

        case 1:     //celsius para fahrenheit
                printf("\n Digite o valor de fahrenheit\n");
                scanf("\n%f", &fahrenheitLocal);

                convercao(fahrenheitLocal, celsiusLocal);
                printf("\n A conversao de fahrenheit para celsius eh: %.2f\n", convercao2(fahrenheitLocal, celsiusLocal));
                break;


                    //fahrenheit para celsius
        case 2:
                printf("\n Digite o valor de celsius\n");
                scanf("\n%f", &celsiusLocal);

                convercao2(fahrenheitLocal, celsiusLocal);
                printf("\n A conversao de celsius para fahrenheit eh: %.2f\n",convercao2(fahrenheitLocal, celsiusLocal));

                break;


        default: printf("\n Digite um numero valido");
    }


}

float convercao(float fahrenheit, float celsius)


{
    float calcular;

    calcular = (celsius * 1.8) + 32 ;

    return calcular;
}

float convercao2(float celsius, float fahrenheit)

{
    float calcular2;

    calcular2 =  (fahrenheit - 32) * 5/9;

    return calcular2;
}

