#include <stdio.h>

//Exercício: Faça um algoritmo para ler um valor real e apresentar este valor com desconto de 10%.

int main(){
    float valor;
    
    printf("Digite o valor do produto: R$");
    scanf("%f", &valor);
    printf("O valor do produto com desconto de 10%% é: R$%.2f", valor-(valor*0.10));
    
    return 0;
}
