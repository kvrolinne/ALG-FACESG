#include <stdio.h>

//Exercício: Faça um algoritmo para ler três valores e imprimir a soma dos mesmos.

int main(){
    
    int num1, num2, num3, soma;
    
    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite um número: ");
    scanf("%d", &num2);
    printf("Digite um número: ");
    scanf("%d", &num3);
    
    soma = num1 + num2 + num3;
    
    printf("A soma dos números é: %d", soma);
    
    return 0;
}
