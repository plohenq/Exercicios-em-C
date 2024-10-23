#include <stdio.h>
#include <string.h>

struct Livro
{
    char title[50];
    char autor[20];
    int numPaginas;
};

struct Livro livro1; // Variável criada a partir do modelo 'Pessoa'

int main (void)
{
    char titScan[50], autScan[20];

    printf("\nQual o titulo do livro: ");
    scanf("%s", titScan);

    strcpy (livro1.title, titScan);

    printf("Qual o nome do autor: ");
    scanf("%s", autScan);

    strcpy (livro1.autor, autScan);

    printf("Quantas paginas tem o livro: ");
    scanf("%i", &livro1.numPaginas);

    printf("\nO titulo: %s\nO nome do autor: %s\nQuantidade de paginas: %i", livro1.title, livro1.autor, livro1.numPaginas);

    return 0;
}