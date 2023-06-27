/*Faça um algoritmo simples que calcule a média aritmética de um aluno
  a partir de suas 2 notas no curso, mostre a mensagem: A MÉDIA FINAL FOI:...
  Informar se o aluno foi aprovado com a mensagem 'APROVADO'
  caso sua média final seja igual ou superior a 7
  'REPROVADO' caso sua média final seja inferior a 7*/
  // usar 'if = se' e 'else = se não'

#include <stdio.h>

int main(){
    int media, n1, n2;

    printf("Digite a Primeira Nota:\n");
    scanf("%d",&n1);
    printf("Digite a Segunda Nota:\n");
    scanf("%d",&n2);

    media=((n1+n2)/2);
    printf("A media final foi: %d\n",media);

        if(media>=7){
            printf("Aluno aprovado(a)!");        //não precisa declarar condições em 'else'
        }
        else {
            printf("Aluno reprovado(a)!");
        }


    return 0;
  }