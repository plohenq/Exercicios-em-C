//Cronômetro Progressivo = 1 2 3 4 5 6 7 8 9 10

#include <stdio.h>
#include <stdlib.h>     //permite a utilização dos comandos system 'cls' e 'pause' 
#include <windows.h>   //permite a utilização do comando 'Sleep'

int main(){
    int tempo=0, horas=0, minutos=0, segundos=0;
    printf("CRONOMETRO:\n\n");

    while(tempo<1){
        printf("CRONOMETRO:\n\n");
        printf("%02d : %02d : %02d", horas, minutos, segundos);  //%02d para preencher o 0 a esquerda
        Sleep(1000);
        system("cls");
        segundos++;

        if(segundos==60){
            segundos=0;
            minutos++;
        }
        if(minutos==60){
            minutos=0;
            horas++;
        }
        if(horas==24){
            horas=0;
        }



    }


    return 0;
}