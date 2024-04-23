#include <stdio.h>

//Exercício: Faça um algoritmo para ler um valor em polegadas e escrever o equivalente em centímetros. OBS: 1 polegada = 2.54 centímetros.

int main(){
    float polegadas, centimetros = 2.54;
    
    printf("Digite um valor em polegadas: ");
    scanf("%f", &polegadas);
    printf("%.2f polegadas equivale a %.2fcm", polegadas, polegadas*centimetros);
    
    return 0;
}
