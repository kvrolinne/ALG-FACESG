#include <stdio.h>

/* Tendo como entrada a altura e o sexo (codificado da seguinte forma: “f”:feminino e
“m”:masculino) de uma pessoa, construa um programa que calcule e imprima seu peso
ideal, utilizando as seguintes fórmulas:
– para homens : (72.7 * h) – 58
– para mulheres : (62.1 * h) – 44.7
Onde h é a altura digitada. */

void limpar(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    float altura;
    char sexo;

    printf("Informe a sua altura: ");
    scanf("%f", &altura);
    limpar();
    printf("Informe o seu sexo (F/M): ");
    sexo = getchar();

    if (sexo == 'm')
        printf("O seu peso ideal é: %.2f\n", (72.7*altura) - 58);
    else if (sexo == 'f')
        printf("O seu peso ideal é: %.2f\n", (62.1*altura) - 44.7);
    else 
        printf("Tente novamente!");

    return 0;
}

