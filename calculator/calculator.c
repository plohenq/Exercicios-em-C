//Calculadora simples: Escreva um programa em C que solicita ao usuário que insira dois números inteiros e realize as quatro operações básicas (adição, subtração, multiplicação e divisão) com esses números. O programa deve exibir o resultado de cada operação.

#include <stdio.h>

int main() {
    int num1, num2;

    // Solicita que o usuário de input de dois números
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Realiza as operações
    printf("Adicao: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtracao: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplicacao: %d * %d = %d\n", num1, num2, num1 * num2);

    // Verifica se o segundo número é diferente de zero
    if (num2 != 0)
    {
        printf("Divisao: %d / %d = %.2f", num1, num2, num1 / num2);
    }
    else
    {
        printf("Nao e possivel dividir por zero!\n");
    }
    
    return 0;
}