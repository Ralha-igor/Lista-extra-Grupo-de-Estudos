#include <stdio.h>
#include <stdlib.h>

float calculoArea1(float ladoQuadrado, float perimetroQuadrado);
float calculoArea2(float baseRetangulo, float alturaRetangulo);
float calculoArea3(float baseTriangulo, float alturaTriangulo);
float calculoArea4(float raioCirculo, float comprimentoCirculo);

int main()
{
       float lado1, lado2;
       int opcao;

        printf("\n Digite uma das opcoes para calcular a area e o perimetro: \n[1] para Quadrado: \n[2] para Rerangulo: \n[3] para Triangulo:  \n[4] para Circulo:\n");
        scanf("\n%i", &opcao);

        printf("\n Digite o valor de um lado Quadrado:\n Digite o valor da Base do Retangulo:\n Digite o valor do Comprimento da Base do Triangulo:\n Digite o Raio do Circulo:\n\n");
        scanf("\n%f", &lado1);
        printf("\n Digite o valor do outro lado do Quadrado:\n Digite a Altura do Retangulo:\n Digite a Altura do Triangulo:\n Digite o Comprimento do Circulo\n\n");
        scanf("\n%f", &lado2);
       // printf("\n");
        //scanf("\n%f", &);



    switch(opcao){

        case 1: calculoArea1(lado1, lado2);

                printf("\n\n O resultado eh\n: %.2f\n\n", calculoArea1(lado1,lado2));
                break;

        case 2: calculoArea2(lado1, lado2);
                printf("\n\n O resultado eh\n: %.2f\n\n",calculoArea2(lado1,lado2));
                break;

        case 3: calculoArea3(lado1, lado2);
                printf("\n\n O resultado eh: %.2f\n\n",calculoArea3(lado1,lado2));
                break;

        case 4: calculoArea4(lado1, lado2);
                printf("\n\n O resultado eh\n: %.2f\n\n",calculoArea4(lado1,lado2));
                break;


        default: printf("\n Digite uma opcao valida");
    }



}



float calculoArea1(float ladoQuadrado, float perimetroQuadrado)
{
        float calculoArea1, calculoPerimetro1;
        calculoArea1 = (ladoQuadrado + ladoQuadrado);
        calculoPerimetro1 = (ladoQuadrado * 4);
        return ( calculoArea1, calculoPerimetro1);
}
//https://br.neurochispas.com/geometria/perimetro-e-area-de-um-quadrado-formulas-e-exercicios/
//https://escolakids.uol.com.br › Matemática

float calculoArea2(float baseRetangulo, float alturaRetangulo)

{
        float calculoArea2, calculoPerimetro2;
        calculoArea2 = (baseRetangulo * alturaRetangulo);
        calculoPerimetro2 = (baseRetangulo + alturaRetangulo + baseRetangulo + alturaRetangulo);
        return (calculoArea2, calculoPerimetro2);
}
//ttps://mundoeducacao.uol.com.br › area-retangulo

float calculoArea3(float baseTriangulo, float alturaTriangulo)
{
        float calculoArea3, calculoPerimetro3;
        calculoArea3 = (baseTriangulo * alturaTriangulo)/2;
        calculoPerimetro3 = (alturaTriangulo + alturaTriangulo);
        return (calculoArea3, calculoPerimetro3);
}
//https://mundoeducacao.uol.com.br › area-triangulo

float calculoArea4(float raioCirculo, float comprimentoCirculo)
{
        float calculoArea4, calculoPerimetro4;
        calculoArea4 = (3.141592653 * raioCirculo * raioCirculo);
        calculoPerimetro4 = (comprimentoCirculo * (3.141592653 * raioCirculo))/2 ;
        return (calculoArea4, calculoPerimetro4);
}
//https://mundoeducacao.uol.com.br › perimetro-circulo
//https://pt.khanacademy.org › basic-geo › area-of-a-circle




/*a  minha duvida é como declarar as variaveis e pedir ao usuario os lados que devemos colocar já que
as figuras geometrica tem lados diferentes.*/



/*float areaQuadr,perimQuadrado, areaRetang, perimRetang, areaTriang, perimTriang, areaCirculo,perimCirculo, resultado;

        printf("\n Digite a area do quadrado:\n ");
        scanf("\n%f", &areaQuadr);
        printf("\n Digite a perimetro do quadrado:\n ");
        scanf("\n%f", &perimQuadrado);

        printf("\n Digite a area do Retangulo:\n ");
        scanf("\n%f", &areaRetang);
        printf("\n Digite a perimetro do Retangulo:\n ");
        scanf("\n%f", &perimRetang);

        printf("\n Digite a area do Triangulo:\n ");
        scanf("\n%f", &areaTriang);
        printf("\n Digite a perimetro do Triangulo:\n ");
        scanf("\n%f", &perimTriang);

        printf("\n Digite a area do Circulo:\n ");
        scanf("\n%f", &areaCirculo);
        printf("\n Digite a perimetro do Circulo:\n ");
        scanf("\n%f", &perimCirculo);
*/w3
