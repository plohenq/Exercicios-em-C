#include <stdio.h>

int main (void)
{
    int valor = 5;
    int *p;

    p = &valor;

    printf("Valor incial: %d\n", valor);
    printf("Endereco de valor: %p\n", p);
    printf("Valor no endereco: %d\n", *p);

    *p = 10;

    printf("Valor novo: %d", valor);


    return 0;
}