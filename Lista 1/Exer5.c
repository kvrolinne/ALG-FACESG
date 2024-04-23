#include <stdio.h>

//Exercício: Faça um algoritmo para ler um valor e imprimir o quadrado deste número

int main(){
    int num, aoquadrado;
    printf("Digite um número: ");
    scanf("%d", &num);
    aoquadrado = num*num;
    printf("%d ao quadrado é: %d\n", num, aoquadrado);
    
    return 0;
}
