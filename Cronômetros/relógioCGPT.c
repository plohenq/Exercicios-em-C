#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Estrutura de dados onde guardei todas as variáveis
struct Tempo 
{
    int horas;
    int minutos;
    int segundos;
};
// Criarei duas funções 'void' para melhorar a leitura
void atualizarTempo(struct Tempo *t)
{
    t -> segundos++;
    //acessei os campos da estrutura com o operador '->'
    if(t -> segundos == 60)
    {
        t -> segundos = 0;
        t -> minutos = 1;
    }

    if(t -> minutos == 60)
    {
        t -> minutos = 0;
        t -> horas = 1;
    }

    if(t -> horas == 24)
    {
        t -> horas = 0;
    }
}

void mostrarTempo(struct Tempo t)
{
    system("cls");
    printf("RELOGIO MASSA\n\n");
    // Acessei diretamente os campos com o operador ('.')
    printf("%02d : %02d : %02d", t.horas, t.minutos, t.segundos);
}

int main(void)
{
    // Criei uma variável com a declaração da minha estrutura
    struct Tempo tempo = {0,0,0};
    // E determinei seus valores 
    while(1)
    {
        mostrarTempo(tempo);
        Sleep(1000);
        // Precisei de um operador, pois a função continha um ponteiro modificando o valor da variável
        atualizarTempo(&tempo);
    }

    return 0;
}