#include <stdio.h>

int main() {
    int num, i, flag = 0;

    // Solicita um número inteiro
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    // Verifica se o número é maior que 1
    if (num > 1) {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }
        
        // Verifica se a flag foi alterada (se o número pode ser dividido por outro número)
        if (flag == 0)
        {
            printf("%d e um numero primo", num);
        } 
        else
        {
            printf("%d nao e um numero primo", num);
        }
    
    } 
    else {
        printf("O numero precisa ser maior que zero!");
    }
    
    return 0;
}