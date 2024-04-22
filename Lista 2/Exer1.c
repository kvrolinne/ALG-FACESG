#include <stdio.h>

int main() {
    int anoNascimento, anoAtual, idade;
    float peso, altura, imc;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);
  
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;

    imc = peso / (altura * altura);

    printf("\nIdade: %d anos\n", idade);
    printf("Peso: %.2f kg\n", peso);
    printf("IMC: %.2f\n", imc);

    return 0;
}
