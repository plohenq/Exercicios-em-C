/*criar tabuada
  comando 'for'
            2 (multiplicador)  x   2 (multiplicando) = 4 (produto) */

#include <stdio.h>

int main(void)
{
    int mdr, mdo, prod;
    printf("Informe o multiplicador: ");
    scanf("%d", &mdr);

    // Sintaxe geral: for(inicialização; condição; atualização)
    for(mdo = 0; mdo <= 10; mdo++)
    {
        prod = (mdr * mdo);
        printf("\n %d X %d = %d", mdr, mdo, prod);
    }

    return 0;
}

/*
 -mdo = 0 é a inicialização da variável mdo. Nesse caso, estamos definindo o valor inicial de mdo
  como 0.

 -mdo <= 10 é a condição que determina quando o loop deve ser executado. Enquanto essa condição for
  verdadeira, o loop será executado. No caso, o loop será executado enquanto mdo for menor ou igual
  a 10.

 -mdo++ é a atualização que ocorre a cada iteração do loop. Nesse caso, incrementamos o valor de mdo
  em 1 a cada iteração do loop.

- O bloco de código dentro do for é executado repetidamente enquanto a condição for verdadeira.
*/