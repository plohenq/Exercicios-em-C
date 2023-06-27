//Cronômetro regressivo = 10 9 8 7 6 5 4 3 2 1
#include <stdio.h>
#include <stdlib.h>     //permite a utilização dos comandos system 'cls' e 'pause' 
#include <windows.h>   //permite a utilização do comando 'Sleep'

int main(){
    int tempo;

    printf("Digite o numero a ser cronometrado:\n");
    scanf("%d", &tempo);

    while(tempo>=0){
        Sleep(1000);                //Pausa a execução do programa por 1000 milisegundos (1 segundo)
        system("cls");              //Limpa a tela do console
        printf("%d segundos", tempo);

        tempo=tempo-1;

    }

    Sleep(1000);
    system("cls");
    printf("TEMPO ESGOTADO!");


    return 0;
}