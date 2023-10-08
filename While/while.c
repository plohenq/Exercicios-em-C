/*Problema: João tem 1.50 cm de altura e cresce 2cm por ano
  enquanto Maria tem 1.10cm e cresce 3cm por ano
  Em quantos anos Maria ira passar João em centímetros?
*/
#include <stdio.h>

int main(void)
{
    int joao;                       //criei 3 váriaveis no parâmetro 'int' para os elementos
    int maria;                      //realizei o cálculo usando números inteiros
    int ano;

    joao = 150;                     //atribui valores para as variáveis
    maria = 110;
    ano = 0;

while(maria <= joao)
{                                       //usei a estrutura de repetição 'while' para a condição:
    joao = joao + 2;                    //enquanto 'maria' for menor ou igual a 'joao'.
    maria = maria + 3;                  //nessa condição: 'joao' ira somar 2.
    ano = ano + 1;                      //'maria' vai somar 3 e o 'ano' irá somar 1 .
}
    //%d indica que printf() deve colocar um inteiro na tela.
    printf("Altura da Maria: %d\n", maria);   
    printf("Altura do Joao: %d\n", joao);
    printf("Tempo em Anos: %d", ano);

    return 0;                               
}