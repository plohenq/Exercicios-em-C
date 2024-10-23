#include <stdio.h>

struct Ponto 
{
    float x;
    float y;
};

void deslocarPonto (struct Ponto *p, float dx, float dy)
{
    p->x += dx;
    p->y += dy;
}

int main (void)
{
    struct Ponto ponto1; // ponto 1 usando a estrutura
    struct Ponto ponto2; // ponto 2 usando a estrutura

    // Coordenadas ponto 1
    printf("Coordenada x do ponto 1: ");
    scanf("%f", &ponto1.x);

    printf("Coordenada y do ponto 1: ");
    scanf("%f", &ponto1.y);

    printf("Coordenadas Atuais do ponto 1: (x: %.2f, y: %.2f)\n", ponto1.x, ponto1.y);

    // Coordenadas ponto 2
    printf("Coordenada x do ponto 2: ");
    scanf("%f", &ponto2.x);

    printf("Coordenada y do ponto 2: ");
    scanf("%f", &ponto2.y);

    printf("Coordenadas Atuais do ponto 2: (x: %.2f, y: %.2f)\n", ponto2.x, ponto2.y);

    // Deslocamento ponto 1
    float dx1, dy1, dx2, dy2;
    printf("Deslocamento x do ponto 1: ");
    scanf("%f", &dx1);

    printf("Deslocamento y do ponto 1: ");
    scanf("%f", &dy1);

    deslocarPonto(&ponto1, dx1, dy1);

    printf("Novas coordenadas do ponto 1: (x: %.2f, y: %.2f)\n", ponto1.x, ponto1.y);

    // Deslocamento ponto 2
    printf("Deslocamento x do ponto 2: ");
    scanf("%f", &dx2);

    printf("Deslocamento y do ponto 2: ");
    scanf("%f", &dy2);

    deslocarPonto(&ponto2, dx2, dy2);

    printf("Novas coordenadas do ponto 2: (x: %.2f, y: %.2f)", ponto2.x, ponto2.y);

    return 0;
}