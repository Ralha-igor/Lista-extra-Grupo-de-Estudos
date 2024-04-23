#include <stdio.h>
#include <stdlib.h>

int verificaAnoBissexto(int ano);

int main()
{
    int anoAtual;
    int Recebe;

    printf("digite o ano atual: ");
    scanf("%d", &anoAtual);

    //Recebe = verificaAnoBissexto(anoAtual);
    //printf("O ano eh bissexto \n\n", Recebe);
    verificaAnoBissexto(anoAtual);

    if(verificaAnoBissexto(anoAtual) == 1)
    {
        printf("\n\n o ano eh bissexto\n\n");

    }
    else
    {
        printf("nao eh um ano bissexto");

    }
    return 0;
}

int verificaAnoBissexto(int ano){

    int anoB;
    int resto;

    resto = ano % 4;

    int resultado = 0;

    if (resto == 0){
        //printf("\no ano eh bissexto\n\n");
        resultado = 1;
    }
        else {
            //printf("nao eh um ano bissexto");
        }


        return resultado;

}
