#include <stdio.h>

//Excercício: Faça um algoritmo para ler dois valores e imprimir a soma dos mesmos

int main() {
    int num1, num2, soma;
    
    printf("Digite um número: ");
    scanf("%d", &num1);
    
    printf("Digite mais um número: ");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    
    printf("A soma dos números é: %d", soma);
    
    return 0;
}
