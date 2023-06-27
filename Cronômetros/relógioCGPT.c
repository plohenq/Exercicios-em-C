#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct Tempo {           //estrutura de dados onde guardei todas as variáveis
    int horas;
    int minutos;
    int segundos;
};

void atualizarTempo(struct Tempo *t) {        //crieri duas funções 'void' para melhorar a
    t->segundos++;                            //leitura do código

    if(t->segundos==60) {                     //acessei os campos da estrutura com o operador '->'
        t->segundos=0;
        t->minutos=1;
    }
    if(t->minutos==60) {
        t->minutos=0;
        t->horas=1;
    }
    if(t->horas==24) {
        t->horas=0;
    }
}

void mostrarTempo(struct Tempo t) {
    system("cls");
    printf("RELOGIO MASSA\n\n");             //acessei diretamente os campos com o operador ('.')
    printf("%02d : %02d : %02d", t.horas, t.minutos, t.segundos);
}

int main() {
    struct Tempo tempo = {0,0,0};     //criei uma variável com a declaração da minha estrutura
                                      //e determinei seus valores 
    while(1) {
        mostrarTempo(tempo);
        Sleep(1000);
        atualizarTempo(&tempo);        //precisei de um operador pois, a função continha um
    }                                  //ponteiro que modificava o valor da variável na main



    return 0;
}