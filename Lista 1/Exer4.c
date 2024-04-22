#include <stdio.h>

//Exercício: Faça um algoritmo para ler um valor em quilogramas (Kg) e imprimir o equivalente em gramas (g).

int main() {
    float quilogramas;
    float gramas;

    printf("Digite o valor em quilogramas (Kg): ");
    scanf("%f", &quilogramas);

    gramas = quilogramas * 1000;

    printf("%.2f Kg equivale a %.2f gramas (g)\n", quilogramas, gramas);

    return 0;
}
