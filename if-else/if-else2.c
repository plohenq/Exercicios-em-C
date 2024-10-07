/*Um aluno de uma instituição de ensino presta 4 avaliações, têm suas 4 notas somadas e divididas por 4 (média aritmética). Caso a média obtida seja maior ou igual a 70, ele está aprovado. Caso seja inferior a 70, porém superior ou igual a 40, deverá prestar o exame. Finalmente, caso a média seja inferior a 40, estará reprovado.*/

#include <stdio.h>

int main (void)
{
    int media, n1, n2, n3, n4;

    printf("Digite a Primeira Nota:\n");
    scanf("%d", &n1);
    printf("Digite a Segunda Nota:\n");
    scanf("%d", &n2);
    printf("Digite a Terceira Nota:\n");
    scanf("%d", &n3);    
    printf("Digite a Quarta Nota:\n");
    scanf("%d", &n4);

    media = ((n1 + n2 + n3 + n4) / 4);
    printf("media das notas: %d\n", media);

    if (media >= 70)
    {
        printf("Aprovado");
    } 
    else 
    {
        if (media < 70 && media >= 40)
        {
            printf("Prestar Exame");
        }
        else
        {
            if (media < 40)
            {
                printf("Reprovado");
            }
        }
    }

    return 0;
}