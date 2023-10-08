/*crie um vetor que peça para o usuário digitar 6 números
o programa deve imprimir os 6 números digitados e depois
imprimir os mesmos números na ordem invertida*/

#include <stdio.h>

int main(void)
{
    int numeros[6];
    int i;

    printf("\n");

    for(i = 0; i < 6; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros digitados\n\n");

    for(i = 0; i < 6; i++)
    {
        printf("%d numero digitado: %d\n", i + 1, numeros[i]);
    }

    printf("\nNumeros Invertidos\n\n");

    for(i = 5; i >= 0; i--)
    {
        printf("%d Numero: %d\n", i + 1, numeros[i]);
    }

    return 0;
}