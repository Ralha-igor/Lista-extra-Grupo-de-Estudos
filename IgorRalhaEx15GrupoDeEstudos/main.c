#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void converter(int horas, int minutos);

int main()
{
    int horas,minutos;

    printf("\n Digite um horario em horas no formato de 24horas: ");
    scanf("\n %02i", &horas);
    printf("\n Digite um horario em minutos no formato de 24horas: ");
    scanf("\n %02i", &minutos);


    converter(horas,minutos);

    return 0;
}

void converter(int horas, int minutos)
{
    char periodo[3];

    if(horas < 12){
        sprintf(periodo, "AM");
    } else{
        sprintf(periodo, "PM");
    }

    if(horas == 0){
        horas = 12;
    } else if (horas > 12){
    horas -= 12;
    }
    if (horas < 0 || horas > 23 || minutos < 0 || minutos > 59){
        printf("\n O horario eh invalido!!");
        return;
    }

    printf("\n O horario no formato de 12 horas eh: %02d:%02d %s\n",  horas, minutos, periodo);


}

//https://br-c.org/doku.php?id=sprintf
//https://www.freecodecamp.org/portuguese/news/conversor-de-relogio-de-24-horas/
//
