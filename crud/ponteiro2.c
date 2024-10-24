#include <stdio.h>
#include <math.h>

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

float calcularDistancia (struct Ponto *p1, struct Ponto *p2)
{
    float dx = p2->x - p1->x; // Diferença em x
    float dy = p2->y - p1->y; // Diferença em y
    return sqrt(dx * dx + dy * dy);
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

    printf("Novas coordenadas do ponto 2: (x: %.2f, y: %.2f)\n", ponto2.x, ponto2.y);

    float distancia = calcularDistancia(&ponto1, &ponto2);

    printf("A distancia entre x e y e: %.2f", distancia);

    return 0;
}