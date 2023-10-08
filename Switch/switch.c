/*Usando a instrução 'switch' mostre o preço do produto junto com sua procedência
  Caso o código não conste na tabela declare-o como importado

 |Código de Origem|       |Procedência|
    |   1   |           |  Sul         |
    |   2   |           |  Norte       |
    |   3   |           |  Leste       |
    |   4   |           |  Oeste       |
    | 5 ou 6|           |  Nordeste    |
    */


#include <stdio.h>
// system ("pause) / system (cls)
#include <stdLib.h>

int main(void)
{
    int cod;
    float preco;  //números reais (1.21, 1.31, etc...)
   
    printf("PRODUTO X \n");
    printf("preco \n");
    scanf("%f", &preco);
    printf("Codigo do Produto: \n");
    scanf("%d", &cod);
    system("cls");

    switch(cod)
    {                                      
        //switch cases for simplify 'if and else'
        case 1: //caso
        printf("Procedencia do Produto: SUL\n");
        printf("Preco: %.2f",preco);
        break;

        case 2: 
        printf("Procedencia do Produto: NORTE\n");
        printf("Preco: %.2f",preco);
        break;

        case 3: 
        printf("Procedencia do Produto: LESTE\n");
        printf("Preco: %.2f",preco);
        break;

        case 4: 
        printf("Procedencia do Produto: OESTE\n");
        printf("Preco: %.2f",preco);
        break;

        case 5: 
        printf("Procedencia do Produto: NORDESTE\n");
        printf("Preco: %.2f",preco);
        break;

        case 6: 
        printf("Procedencia do Produto: NORDESTE\n");
        printf("Preco: %.2f",preco);
        break;

        default:
        printf("Produto Importado!\n");
    }

    return 0;
}