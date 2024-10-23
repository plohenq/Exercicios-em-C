#include <stdio.h>

struct Ponto 
{
    float x;
    float y;z
};

void deslocarPonto (struct Ponto *p, float dx, float dy)
{
    p->x += dx;
    p->y += dy;
}

int main (void)
{
    struct Ponto ponto1;

    printf("Coordenada x: ");
    scanf("%f", &ponto1.x);

    printf("Coordenada y: ");
    scanf("%f", &ponto1.y);

    printf("Coordenadas Atuais: (x: %.2f, y: %.2f)\n", ponto1.x, ponto1.y);

    float dx, dy;
    printf("Deslocamento x: ");
    scanf("%f", &dx);

    printf("Deslocamento y: ");
    scanf("%f", &dy);

    deslocarPonto(&ponto1, dx, dy);

    printf("Novas Coordenadas: (x: %.2f, y: %.2f)", ponto1.x, ponto1.y);

    return 0;
}