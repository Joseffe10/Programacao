// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

printf("Digite o valor da base do triangulo: ");
      float b, h, A;
        scanf("%f", &b);



        printf("Digite o valor da altura do triangulo: ");

        scanf("%f", &h);



        A = (b * h)/2;



        printf("A area do triangulo e: %f", A);



        return 0;
}