#include <stdio.h>

//Exercício: Faça um algoritmo para ler base e altura de um triângulo e informar a área.

int main(){
    float base, altura;
    
    printf("Informe o valor da base do triângulo: ");
    scanf("%f", &base);
    printf("Informe o valor da altura do triângulo: ");
    scanf("%f", &altura);
    printf("A base do triângulo é: %.2f", (base*altura)/2);
    
    return 0;
}
