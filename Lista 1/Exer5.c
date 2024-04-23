#include <stdio.h>

//Exercício: Faça um algoritmo para ler um valor e imprimir o quadrado deste número

int main(){
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("%d ao quadrado é: %d\n", num, num*num);
    
    return 0;
}
