#include <stdio.h>

//Exercício: Faça um algoritmo para ler um valor correspondente a um lado de um quadrado e mostrar a área.

int main(){
    float lado;
    
    printf("Digite o comprimento do lado do quadrado: ");
    scanf("%f", &lado);
    printf("O valor da área do quadrado é: %.2f", lado*lado);
    
    return 0;
}
