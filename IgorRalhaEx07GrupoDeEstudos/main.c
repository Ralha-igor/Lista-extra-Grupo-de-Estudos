    #include <stdio.h>
    #include <stdlib.h>

    float Crescente(int numero1, int numero2, int numero3);
    float Decrescente (int numero1, int numero2, int numero3);



    int main()


    {
        int num1, num2, num3, resultado1,resultado2;

        printf("\n Digite um numero inteiro: ");
        scanf("%i",  &num1);
        printf("\n Digite outro numero inteiro: ");
        scanf("%i",  &num2);
        printf("\n Digite mais um numero inteiro: ");
        scanf("%i",  &num3);

       // resultado1 = Crescente;
      //resultado2 = Decrescente;
     //   invalido = invalido;

        if ( resultado1 = Crescente(num1, num2, num3)){
            printf("\n A ordem eh crescente: %i\n%i\n%i\n", resultado1);
        } if (resultado2 = Decrescente(num1, num2, num3)){
        printf("\n A ordem eh decrescente: \n%i\n%i\n%i", resultado2);
            }else {
            printf("\n Ordem Invalida:");
                }
    }

    float Crescente(int numero1, int numero2, int numero3)
    float Decrescente (int numero1, int numero2, int numero3)
    {
        int menorM;

        menorM = (numero1 < numero2&&numero1 < numero3&&numero2 < numero3&&numero2 < numero1&&numero1 < numero3&&numero2 < numero3&&numero3 < numero2&&numero3 < numero1&&numero2 > numero1&&numero3 < numero2&&numero1 < numero2&&numero2 > numero3&&numero1 < numero2&&numero1 < numero3&&numero2 < numero3&&numero2 < numero3&&numero1 > numero3&&numero3 > numero2)
            return (numero1, numero2, numero3);

    }

       {
           int maiorM;

        maiorM = (numero1 > numero2&&numero1 > numero3&&numero2 > numero3&&numero2 > numero1&&numero1 > numero3&&numero2 > numero3&&numero3 > numero2&&numero3 > numero1&&numero2 > numero1&&numero3 > numero2&&(numero1 > numero2&&numero2 < numero3&&numero1 > numero2&&numero1 > numero3&&numero2 < numero3&&numero2 > numero3&&numero1 < numero3&&numero3 > numero1)
            return (numero1, numero2, numero3);
       }






























/*
    if  ((numero1 < numero2)&&(numero1 < numero3)&&(numero2 < numero3)&&(numero2 < numero1)&&(numero1 < numero3)&&(numero2 < numero3)&&(numero3 < numero2)&&(numero3 < numero1)&&(numero2 > numero1)&&(numero3 < numero2)&&(numero1 < numero2)&&(numero2 > numero3)&&(numero1 < numero2)&&(numero1 < numero3)&&(numero2 < numero3)&&(numero2 < numero3)&&(numero1 > numero3)&&(numero3 > numero2))
        {
            return Crescemte;
        }


       // if Crescente = ((numero1 < numero2)&&(numero1 < numero3)&&(numero2 < numero3)&&(numero2 < numero1)&&(numero1 < numero3)&&(numero2 < numero3)&&(numero3 < numero2)&&(numero3 < numero1)&&(numero2 > numero1)&&(numero3 < numero2)&&(numero1 < numero2)&&(numero2 > numero3)&&(numero1 < numero2)&&(numero1 < numero3)&&(numero2 < numero3)&&(numero2 < numero3)&&(numero1 > numero3)&&(numero3 > numero2))
       // {
       //     return Crescemte;
      //  }
      {
            if Decrescente = ((numero1 > numero2)&&(numero1 > numero3)&&(numero2 > numero3)&&(numero2 > numero1)&&(numero1 > numero3)&&(numero2 > numero3)&&(numero3 > numero2)&&(numero3 > numero1)&&(numero2 > numero1)&&(numero3 > numero2)&&(numero1 > numero2)&&(numero2 < numero3)&&(numero1 > numero2)&&(numero1 > numero3)&&(numero2 < numero3)&&(numero2 > numero3)&&(numero1 < numero3)&&(numero3 > numero1))
            {
                return Decrescente;
            }
      }

      {
                else
                {
                printf("\n ordem invalida Invalido :", invalido);
                }
    }

*/
