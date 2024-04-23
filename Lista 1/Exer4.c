#include <stdio.h>

//Exercício: Faça um algoritmo para ler um valor em quilogramas (Kg) e imprimir o equivalente em gramas (g).

int main() {
    float quilogramas;

    printf("Digite o valor em quilogramas (kg): ");
    scanf("%f", &quilogramas);
    printf("%.0fkg equivale a %.0fg\n", quilogramas, quilogramas*1000);

    return 0;
}
