#include <stdio.h>

/* Exercício: Maçãs custam R$ 0,30 se forem compradas menos que uma dúzia e R$0,25 se forem
compradas uma dúzia ou mais. Escreva um programa em pseudocódigo que leia o número
de maçãs compradas, calcule e escreva na tela o valor total da compra */

int main() {
    int qnt;

    printf("Informe a quantidade de maçãs compradas: ");
    scanf("%d", &qnt);

    if (qnt < 12) 
        printf("Valor da compra: R$%.2f\n", qnt * 0.30);
    else 
        printf("Valor da compra: R$%.2f\n", qnt * 0.25);

    return 0;
}
