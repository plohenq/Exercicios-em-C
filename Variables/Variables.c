#include <stdio.h>

int calc(void);

int main(void)
{
    printf("Result: %i", calc());

    return 0;
}

int calc(void)
{
    int x = 10, y = 20;

    return x + y;
}
    // Variáveis = um espaço alocado na memória pra guardar algum valor.
    // Nós declaramos o nome da variável quando queremos acessar o valor agregado.
    // Agora a variável se comporta como se fosse o valor que ela guarda.
    // MAS precisamos declarar que tipo de valor nós estamos guardando.