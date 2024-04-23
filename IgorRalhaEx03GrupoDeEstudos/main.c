#include <stdio.h>
#include <stdlib.h>

float adicao(float num1, float num2);
float subtracao(float num1, float num2);
float multiplicacao(float num1, float num2);
float divisao(float num1, float num2);

int main()
{
    float num1,num2, recebe;
    int opcao;

    printf("\n Digite [1] para adicao, [2] para subtracao, [3] para multiplicacao e [4] para divisao\n");
    scanf("\n%d", &opcao);

    printf("\n Digite um numero que deseja  :\n\n");
    scanf("%f", &num1);
    printf("\n Digite outro numero que deseja :\n\n");
    scanf("%f", &num2);

    switch(opcao){

        case 1: adicao(num1,num2);
                printf("\n\n O Resultado da sua soma eh\n: %.2f\n\n", adicao(num1,num2));
                break;

        case 2: subtracao(num1,num2);
                printf("\n\n O Resultado da sua subtracao eh\n: %.2f\n\n",subtracao(num1,num2));
                break;

        case 3: multiplicacao(num1,num2);
                printf("\n\n O Resultado da sua multiplicao eh: %.2f\n\n",multiplicacao(num1,num2));
                break;

        case 4: divisao(num1,num2);
                printf("\n\n O Resultado da sua divisao eh\n: %.2f\n\n",divisao(num1,num2));
                break;

        default: printf("\n Digite um número válido");
    }

}

 float adicao(float num1, float num2)
    {
        float soma;
        soma = num1 + num2;

        return soma;
    }
    float subtracao(float num1, float num2)
    {
        float subtracao;
        subtracao = num1 - num2;

        return subtracao;
    }
    float multiplicacao(float num1, float num2)
    {
        float multiplicacao;
        multiplicacao= num1 * num2;
        return multiplicacao;
    }
    float divisao(float num1, float num2)
    {
        float divisao;
        divisao = num1 / num2;
        return divisao;
    }



    /*{
        float soma, num1,num2;

        soma = num1 + num2;

        return soma;
    }

    {

        float menos;

        menos = num1 - num2;


        return menos;
    }
    {
        float mult;

        mult = num1 * num2;

        return mult;
    }

    {
        float div;

        div =  num1 / num2;

        return div;
    }
*/
