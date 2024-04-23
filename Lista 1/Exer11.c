#include <stdio.h>

//Exercício: Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o valor do pagamento e o preço do litro da gasolina, e exibir quantos litros ele conseguiu colocar no tanque. OBS: Valor da gasolina é 5.78

int main(){
   float valor;
   
   printf("Informe o valor que colocou de gasolina em reais: R$");
   scanf("%f", &valor);
   printf("Você colocou %.2f litros de gasolina com este valor.", valor/5.78);
   
    return 0;
}
