#include <stdio.h>

//Exercício: Escreva um algoritmo para ler a idade de uma pessoa e exibir quantos dias de vida ela possui. Considere sempre anos "cheios" e que um ano possui 365 dias.

int main(){
   int idade;
  
   printf("Informe a sua idade: ");
   scanf("%d", &idade);
   printf("Você possue aproximadamente %d dias de vida.", idade*365);
   
    return 0;
}
