#include <stdio.h>

//Exercício: Faça um algoritmo para ler dois valores e imprimir a multiplicação dos mesmos.

int main() {
    int num1, num2;
    
    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite mais um número: ");
    scanf("%d", &num2);
    printf("A multiplicação dos números é: %d", num1*num2);
    
    return 0;
}
